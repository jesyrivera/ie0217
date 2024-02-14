# importa los archivos
import limpieza
import regression
import clustering
import analisis


# se define la funcion main
def main():
    # descarga el conjunto de datos
    analisis.descargar_conjunto_de_datos()

    # cargar y limpiar los datos
    file_path = 'CAR DETAILS FROM CAR DEKHO.csv'
    # carga el conjunto de datos a un dataframe
    df = limpieza.cargar_conjunto_de_datos(file_path)
    # limpia el dataframe
    limpieza.limpiar_datos(df)

    # imprime el mensaje
    print("\nAnalisis de Regresion Lineal:")
    # hace un analisis de regresion lineal
    regression.regresion_lineal(df, 'year', 'selling_price')
    regression.regresion_lineal(df, 'km_driven', 'selling_price')

    # imprime el mensaje
    print("\nAnalisis de Regresion No Lineal:")
    # hace un analisis de regresion NO lineal
    regression.regresion_no_lineal(df, 'year', 'selling_price')
    regression.regresion_no_lineal(df, 'km_driven', 'selling_price')

    # imprime el mensaje
    print("\nAnalisis de clustering:")
    # define las columnas que se van a usar
    features = ['year', 'selling_price', 'km_driven']
    # preprocesa los datos
    X_scaled = clustering.preprocesar_datos(df, features)
    # determina el numero de clusters optimos
    silhouette_scores, elbow_scores = clustering.determinar_clusters_optimos(
        X_scaled)
    # muestra los graficos
    clustering.metodo_del_codo(elbow_scores)
    clustering.metodo_de_silhouette(silhouette_scores)
    # selecciona el numero optimo de clusters
    optimal_n_clusters = clustering.seleccionar_clusters_optimos(elbow_scores)
    # agrupa los datos en el numero optimo de clusters
    clustering.aplicar_kmeans(X_scaled, optimal_n_clusters)


# el codigo dentro del main() se ejecuta
if __name__ == "__main__":
    main()
