# se importan los modulos
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import silhouette_score


# se define la funcion
def preprocesar_datos(df, features):
    # selecciona columnas especificas del dataframe
    X = df[features]
    # se crea la instancia scaler
    scaler = StandardScaler()
    # ajusta el scaler a los datos y transforma los datos
    X_scaled = scaler.fit_transform(X)
    # devuelve los datos procesados
    return X_scaled


# se define la funcion, se pone un maximo de 10 clusters
def determinar_clusters_optimos(X, max_clusters=10):
    # se crean dos listas vacias
    silhouette_scores = []
    elbow_scores = []
    # ciclo for que itera sobre cada cluster empezando desde el 2
    for n_clusters in range(2, max_clusters + 1):
        # crea un objeto con el numero de clusters
        # configuracion de K-means, le pide que haga n clusters
        kmeans = KMeans(n_clusters=n_clusters, random_state=42)
        # se ajusta el modelo
        kmeans.fit(X)
        # despues de lo de arriba, obtiene etiquetas de los clusters
        labels = kmeans.labels_
        # los puntajes calculados en cada iteracion se agregan a las listas
        silhouette_scores.append(silhouette_score(X, labels))
        elbow_scores.append(kmeans.inertia_)
    # devuelve las listas
    return silhouette_scores, elbow_scores


# se define la funcion que muestra el grafico del codo
def metodo_del_codo(elbow_scores, max_clusters=10):
    # grafico de linea
    plt.plot(range(2, max_clusters + 1), elbow_scores, marker='o')
    # etiquetas
    plt.xlabel('Numero de Clusters')
    plt.ylabel('Puntuacion del codo')
    # titulo
    plt.title('Metodo del codo para determinar el numero optimo de clusters')
    # muestra el grafico
    plt.show()


# se define la funcion qe muestra el grafico de silhouette
def metodo_de_silhouette(silhouette_scores, max_clusters=10):
    # grafico de linea
    plt.plot(range(2, max_clusters + 1), silhouette_scores, marker='o')
    # etiquetas
    plt.xlabel('Numero de Clusters')
    plt.ylabel('Metodo de Silhouette')
    # titulo
    plt.title('Metodo Silhouette para determinar el numero optimo de clusters')
    # muestra el grafico
    plt.show()


# funcion que selecciona la cantidad de clusters optimos
def seleccionar_clusters_optimos(elbow_scores):
    # calcula la cantidad usando el metodo del codo, busca el minimo
    optimal_n_clusters = elbow_scores.index(min(elbow_scores)) + 2
    # imprime la informacion
    print("\nNumero optimo de clusters con el metodo del codo:",
          optimal_n_clusters)
    # devuelve la cantidad
    return optimal_n_clusters


# se define la funcion
def aplicar_kmeans(X, n_clusters):
    # crea un objeto con el numero de clusters
    # configuracion de K-means, le pide que haga n clusters
    kmeans = KMeans(n_clusters=n_clusters, random_state=42)
    # se ajusta el modelo
    kmeans.fit(X)
    # despues de lo de arriba, obtiene etiquetas de los clusters
    # se devuelven las etiquetas
    return kmeans.labels_
