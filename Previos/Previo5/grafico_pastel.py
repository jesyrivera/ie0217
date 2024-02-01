import matplotlib.pyplot as plt

# Datos
proporciones = [30, 20, 25, 15]
etiquetas = ['A', 'B', 'C', 'D']

# crea el grafico de pastel
plt.pie(proporciones, labels=etiquetas, autopct='%1.1f%%', startangle=140, colors=['gold', 'lightcoral', 'lightgreen', 'lightskyblue'])

# se personaliza el grafico
plt.title('Grafico de Linea con Etiquetas y Titulo')

# muestra el grafico
plt.show()