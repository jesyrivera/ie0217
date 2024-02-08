# se importan las bibliotecas
from sklearn.preprocessing import StandardScaler
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

# lee el archivo
data = pd.read_csv('data.csv')

# imprime los primeros 5 filas del archivo
print(data.head())

# preprocesamiento
# crea una instancia que realiza el escalado de caracteristicas
scaler = StandardScaler()
# se ajusta el escalador y transforma los datos
scaled_data = scaler.fit_transform(data)

# se usa el metodo del codo
# lista vacia
inertia = []
# ciclo for que itera k desde 1 a 10
for k in range(1, 11):
    # se crea la instancia con k numero de clusters
    kmeans = KMeans(n_clusters=k, random_state=42)
    # se ajusta el modelo
    kmeans.fit(scaled_data)
    # se agrega a la lista el modelo ajustado
    inertia.append(kmeans.inertia_)

# grafico de linea
plt.plot(range(1, 11), inertia, marker='o')
# titulo
plt.title('Metodo del codo para seleccion de k')
# etiquetas
plt.xlabel('Numero de clusters (k)')
plt.ylabel('Inercia')
# lo muestra
plt.show()

# se crea una instancia con 4 clusters
kmeans = KMeans(n_clusters=4, random_state=42)
# se ajusta el modelo y se hacen predicciones
cluster_labels = kmeans.fit_predict(scaled_data)

# se agregan las etiquetas de cluster al conjunto
data['Cluster'] = cluster_labels

# se agrupan los datos por la columna y se calcula la media
segment_analysis = data.groupby('Cluster').mean()

# tamano del grafico
plt.figure(figsize=(12, 6))
# ciclo for que itera sobre cada cluster
for cluster in range(4):
    # grafico de dispersion
    plt.scatter(data[data['Cluster'] == cluster]['Frequency'],
                data[data['Cluster'] == cluster]['Avg_Spend'],
                label=f'Cluster {cluster}')

# titulo
plt.title('Segmentacion de Clientes por Frecuencia y Gasto Promedio')
# etiquetas
plt.xlabel('Frecuencia de Visita')
plt.ylabel('Gasto Promedio')
# muestra la informacion
plt.legend()
# lo muestra
plt.show()
