
# se importan las bibliotecas
import matplotlib.pyplot as plt
from scipy.cluster.hierarchy import dendrogram, linkage
from sklearn.datasets import make_blobs
from sklearn.cluster import AgglomerativeClustering

# se generan datos, 50 muestras, 3 clusters, y el parametro de 1.0
X, y = make_blobs(n_samples=50, centers=3, random_state=42, cluster_std=1.0)

# con el methodo de enlace completo configura el Hierarchical
Z = linkage(X, method='complete')

# visulaizacion del dendrograma
# tamano del grafico
plt.figure(figsize=(10, 5))
# dendrograma (arbol de jerarquia)
dendrogram(Z)
# titulo
plt.title('Dendrograma Hierarchical Clustering')
# etiquetas
plt.xlabel('Indice del Punto de Datos')
plt.ylabel('Distancia')
# lo muestra
plt.show()

# se configura el Hirarchical con el metodo aglomerativo usando 3 clusters
agg_clustering = AgglomerativeClustering(n_clusters=3)
# se ajusta el modelo y se hace la prediccion usando los datos de X
agg_labels = agg_clustering.fit_predict(X)

# grafico de dispersion
plt.scatter(
    X[:, 0], X[:, 1], c=agg_labels, cmap='viridis', edgecolors='k', s=50)
# titulo
plt.title('Resultado del Clustering Jerarquico')
# etiquetas
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
# lo muestra
plt.show()
