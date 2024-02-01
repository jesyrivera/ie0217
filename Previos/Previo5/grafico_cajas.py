import matplotlib.pyplot as plt

# Datos
datos = [15, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90]

# crea el grafico de caja
plt.boxplot(datos)

# se personaliza el grafico
# etiqueta
plt.ylabel('Valores')
# titulo
plt.title('Grafico de Caja')

# muestra el grafico
plt.show()