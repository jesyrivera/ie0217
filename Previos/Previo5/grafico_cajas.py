import matplotlib.pyplot as plt

# Datos
datos = [15, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90]

# crea el grafico de linea
plt.boxplot(datos)

# se personaliza el grafico
plt.ylabel('Valores')
plt.title('Grafico de Caja')

# muestra el grafico
plt.show()