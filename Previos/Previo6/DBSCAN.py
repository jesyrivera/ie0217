# Density-Based Spatial Clustering of Applications with Noise

# se importan las bibliotecas
import matplotlib.pyplot as plt
from sklearn.datasets import make_moons
from sklearn.cluster import DBSCAN

# se generan datos, 200 muestras el parametro de sonido 0.05
# luna creciente
X, _ = make_moons(n_samples=200, noise=0.05, random_state=42)


# se crea una instancia, tiene distancia maxima 0.3
# y el minimo de muestras es 5
dbscan = DBSCAN(eps=0.3, min_samples=5)
# se ajusta el modelo con los datos de X
# y se predicen las etiquetas de clusters
dbscan_labels = dbscan.fit_predict(X)

# grafico de dispersion
plt.scatter(
    X[:, 0], X[:, 1], c=dbscan_labels, cmap='viridis', edgecolors='k', s=50)
# titulo
plt.title('Resultado del Clustering DBSCAN')
# etiquetas
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
# lo muestra
plt.show()
