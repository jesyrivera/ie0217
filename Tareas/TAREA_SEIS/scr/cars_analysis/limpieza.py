# importa la biblioteca
import pandas as pd


# se define la funcion
def cargar_conjunto_de_datos(file_path):
    # devuelve el dataframe
    return pd.read_csv(file_path)


# se define la funcion
def limpiar_datos(df):
    # imprime las primeras filas
    print(df.head())
    # imprime la informacion sobre las columnas y el tipo de datos
    print(df.info())
    # imprime los analisis
    print(df.describe())
    # elimina las filas con valores faltantes
    df.dropna(inplace=True)
    # elimina las filas que esten duplicadas
    df.drop_duplicates(inplace=True)
