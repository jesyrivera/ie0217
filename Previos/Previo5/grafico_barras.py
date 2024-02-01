import matplotlib.pyplot as plt

# Datos
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# crea el grafico de barras verticales
plt.bar(categorias, valores, color='royalblue')

# se personaliza el grafico
plt.xlabel('Eje X')
plt.ylabel('Eje y')
plt.title('Grafico de Linea con Etiquetas y Titulo')

# muestra el grafico
plt.show()