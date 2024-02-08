# se importan las bibliotecas
from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# se generan numeros al azar pero siempre los mismos
np.random.seed(42)
# se genera un vector de 100 numeros al azar
X = np.random.rand(100, 2) * 10

# tamano del grafico
plt.figure(figsize=(12, 5))
# subgrafico 1 de Visualizacion de puntos de datos aleatorios
# 1 fila 2 columnas subrafico 1
plt.subplot(1, 2, 1)
# grafico de dispersion
plt.scatter(X[:, 0], X[:, 1], c='blue', marker='o')
# titulo
plt.title('Puntos de Datos Aleatorios')
# etiquetas
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')

# configuracion de K-means, le pide que haga 3 clusters
kmeans = KMeans(n_clusters=3)
# ajusta el modelo con los datos de X
kmeans.fit(X)

# despues de lo de arriba, obtiene etiquetas de los clusters
labels = kmeans.labels_
# despues del ajuste, obtiene las coordenadas de los centroides de los clusters
centroids = kmeans.cluster_centers_

# subgrafico 2 del Resultado del Clustering con K-MEans
# 1 fila 2 columnas subgrafico 2
plt.subplot(1, 2, 2)

# ciclo for itera sobre los puntos de X
for i in range(len(X)):
    # traza un punto en el grafico de dispersion
    plt.scatter(X[i][0], X[i][1],
                c=('r' if labels[i] == 0 else 'b' if labels[i] == 1 else 'g'),
                marker='o')

# grafico de dispersion
plt.scatter(centroids[:, 0], centroids[:, 1], c='black', marker='X', s=200,
            label='Centroids')
# titulo
plt.title('Resultado del Clustering con K-Means')
# etiquetas
plt.xlabel('Caracteristicas 1')
plt.ylabel('Caracteristica 2')
# muestra la informacion
plt.legend()
# ajusta el diseno para que se visualice bien
plt.tight_layout()
# lo muestra
plt.show()
