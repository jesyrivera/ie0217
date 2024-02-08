# metodo del codo
# busca el punto en el que la inercia deja de disminuir rapidamente

# se importan las bibliotecas
from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# se generan numeros al azar pero siempre los mismos
np.random.seed(42)
# se genera un vector de 100 numeros al azar bidimensionales en un rango de 0 a 10
X = np.random.rand(100, 2) * 10

# lista vacia
inertias = []
# ciclo for que itera k desde 1 al 10
for k in range(1, 11):
    # se crea la instancia KMeans con clusters=k
    kmeans = KMeans(n_clusters=k, random_state=42)
    # se ajusta el modelo con los datos de X
    kmeans.fit(X)
    # se agrega a la lista con el metodo inertia_
    inertias.append(kmeans.inertia_)

# grafico de linea
plt.plot(range(1, 11), inertias, marker='o')
# titulo
plt.title('Metodo del Codo')
# etiquetas
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Inercia')
# lo muestra
plt.show()