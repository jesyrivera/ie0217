# se importa las bibliotecas
import pandas as pd
import requests
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns


# se define la variable que contiene el url de la pagina
url = "https://www.transtats.bts.gov/freight.asp"


# se le da un nommbre a la variable
archivo_csv = "datos_cargo.csv"


# se define a la funcion
def obtener_datos(url, archivo_csv):
    # bloque que puede provocar error
    try:
        # se solicita el contenido de la pagina
        html = requests.get(url, verify=False).content
        # lee el contenido de la tabla de la pagina
        tabla = pd.read_html(html)
        df = tabla[-1]
        # se guarda la informacion en un archivo csv
        df.to_csv(archivo_csv, index=False)
        # imprime el mensaje para saber que se guardo
        print("\nDatos guardados en el archivo datos_cargo.csv\n")
        # devuelve true para saber que todo corrio bien
        return True
    # bloque que maneja los errores
    # el error se asigna a la variable e
    except Exception as e:
        # imprime el error
        print(f"Error: {e}")
        # devuelve falso para indicar que hubo un error
        return False


# se define la funcion
def leer_archivo(archivo_csv):
    # bloque que puede generar un error
    try:
        # carga los datos del archivo y se ignoran las primeras 3 filas
        datos = pd.read_csv(archivo_csv, skiprows=3)
        # se imprime el mensaje
        print("\nSe han cargado los datos al DataFrame\n")
        # devuelve el dataframe
        return datos
    # bloque que maneja la excepcion
    except Exception as e:
        # imprime el mensaje del error
        print(f"Error al cargar datos en el DataFrame: {e}")
        # devuelve None para indicar que no se cargaron los datos
        return None


# se define la funcion
def transformar_datos(df):
    # bloque try que puede generar un error
    try:
        # elimina la columna de valores NaN
        df = df.drop(columns=['Unnamed: 8'], errors='ignore')
        # elimina las filas que tienen letras en la columna 'Year'
        df = df[~df['Year'].astype(str).str.contains('Year')]
        # ciclo for itera sobre indices de la columna 2 a la 7
        for col_idx in range(2, 8):
            # con la funcion pd.to_numeric se hace la transformacion de 
            # valores en las columnas y los valores con letras se convierten
            # en NaN
            df.iloc[:, col_idx] = pd.to_numeric(df.iloc[:, col_idx], errors='coerce')
        # se imprime el mensaje
        print("\nSe ha logrado la transformacion de datos\n")
        # devuelve el dataframe luego de la transformacion
        return df
    # bloque que maneja el error
    except Exception as e:
        # imprime el mensaje de error
        print(f"Error en la transformacion de datos: {e}")
        # devuelve None para indicar que no ocurrio
        return None


# se define la funcion
def analizar_datos_meses(df):
    # bloque que puede provocar error
    try:
        # crea un dataframe con las filas que no tienen Year como primera
        # columna y que no tienen Chg
        df_filtered = df[~df['Year'].astype(str).str.contains('Year') & ~df['Month'].astype(str).str.contains('Chg')]
        # ciclo for que itera sobre cada fila del dataframe
        for index, row in df_filtered.iterrows():
            # se obtienen los valores de esas columnas de la fila actual
            year = row['Year']
            month = row['Month']
            total = row['Total']
            # se verifica si la columna Total tiene un valor
            if pd.notna(total):
                # los valores de Total se convierten en numericos
                total = pd.to_numeric(total, errors='coerce')
                # se imprime la informacion
                print(f"Año: {year}, Mes: {month}, Total: {total}")
        # se imprime el mensaje
        print("\nAnalisis de datos de MESES completado\n")
    # bloque que maneja el error
    except Exception as e:
        # imprime el mensaje
        print(f"Error en el analisis de datos de meses: {e}")


# se define la funcion
def analizar_datos_year(df):
    # bloque que puede generar error
    try:
        # crea un dataframe con las filas que no tienen Year como primera
        # columna y que no tienen Chg
        df_filtered = df[~df['Year'].astype(str).str.contains('Year') & ~df['Month'].astype(str).str.contains('Chg')]
        #  se agrupan los datos y se suma los valores del total para cada año
        total_por_ano = df_filtered.groupby('Year')['Total'].sum()
        # ciclo for que itera sobre cada resultado de la suma
        for year, total in total_por_ano.items():
            # imprime la informacion
            print(f"Año: {year}, Total: {total}")
    # bloque que maneja los errores
    except Exception as e:
        # imprime el mensaje de error
        print(f"Error en el analisis de datos de año: {e}")


# se define la funcion
def obtener_datos_cargo():
    # llama a la funcion y si devuelve False entonces hubo un error
    if not obtener_datos(url, archivo_csv):
        return

    # se llama a la funcion y si devuelve None entonces hubo un error
    datos = leer_archivo(archivo_csv)
    if datos is None:
        return

    # se llama a la funcion
    datos_transformados = transformar_datos(datos)
    # si devuelve None es porque hubo un error
    if datos_transformados is None:
        return

    # analiza los datos y los imprime
    analizar_datos_meses(datos_transformados)
    analizar_datos_year(datos_transformados)


def generar_datos():
    # se crea un arreglo con los años
    años = np.arange(2002, 2024)
    #  numeros para cada año en el rango de años
    totales = np.random.uniform(50000, 100000, len(años))
    # se crea un dataframe usando diccionarios con los valores
    df = pd.DataFrame({'Año': años, 'Total': totales})
    # devuelve el dataframe
    return df


# se define la funcion
def grafico_barras(df):
    # grafico de barras con Matplotlib
    # tamaño del grafico
    plt.figure(figsize=(10, 6))
    # grafico de barras de color morado
    plt.bar(df['Año'], df['Total'], color='purple')
    # etiquetas
    plt.xlabel('Año')
    plt.ylabel('Total')
    # titulo
    plt.title('Total por año (Matplotlib)')
    # cuadricula en el grafico
    plt.grid(True)
    # lo muestra
    plt.show()


def grafico_dispersion(df):
    # grafico de dispersion con Matplotlib
    # tamaño del grafico
    plt.figure(figsize=(10, 6))
    # grafico de linea de color verde
    plt.scatter(df['Año'], df['Total'], marker='o', color='green')
    # etiquetas
    plt.xlabel('Año')
    plt.ylabel('Total')
    # titulo
    plt.title('Total por año (Matplotlib)')
    # cuadricula en el grafico
    plt.grid(True)
    # lo muestra
    plt.show()


def visualizacion_seaborn(df):
    # grafico en barras usando Seaborn
    # tamaño del grafico
    plt.figure(figsize=(10, 6))
    # grafico de barras de color rosado
    sns.barplot(data=df, x='Año', y='Total', color='pink')
    # etiquetas
    plt.xlabel('Año')
    plt.ylabel('Total')
    # titulo
    plt.title('Total por año (Seaborn)')
    # cuadricula en el grafico
    plt.grid(True)
    # lo muestra
    plt.show()

    # grafico de lineas con Seaborn
    # tamaño del grafico
    plt.figure(figsize=(10, 6))
    # grafico de lineas de color anaranjado
    sns.lineplot(data=df, x='Año', y='Total', marker='o', color='orange')
    # etiquetas
    plt.xlabel('Año')
    plt.ylabel('Total')
    # titulo
    plt.title('Total por año (Seaborn)')
    # cuadricula en el grafico
    plt.grid(True)
    # lo muestra
    plt.show()


# llama a la funcion
obtener_datos_cargo()

# genera los datos
datos = generar_datos()

# crea graficos con Matplotlib
grafico_barras(datos)
grafico_dispersion(datos)

# crea visualizaciones con Seaborn
visualizacion_seaborn(datos)
