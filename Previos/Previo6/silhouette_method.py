# metodo de la silueta evalua la coherencia de los clusters
# busca el valor de k que maximiza el coeficiente de silueta

# se importan las bibliotecas
from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
import matplotlib.pyplot as plt
import numpy as np

# se generan numeros al azar pero siempre los mismos
np.random.seed(42)
# se genera un vector de 100 numeros al azar bidimensionales en un rango de 0 a 10
X = np.random.rand(100, 2) * 10

# lista vacia
silhouette_scores = []
# ciclo for que itera k desde 2 al 19
for k in range(2, 20):
    # se crea la instancia KMeans con clusters=k
    kmeans = KMeans(n_clusters=k, random_state=42)
    # se ajusta el modelo con los datos de X
    kmeans.fit(X)
    # se calcula el puntaje usando la funcion
    score = silhouette_score(X, kmeans.labels_)
    # se agrega a la lista los puntajes
    silhouette_scores.append(score)

# grafico de linea
plt.plot(range(2, 20), silhouette_scores, marker='o')
# titulo
plt.title('Metodo de la Silueta')
# etiquetas
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Coeficiente de Silueta')
# lo muestra
plt.show()
