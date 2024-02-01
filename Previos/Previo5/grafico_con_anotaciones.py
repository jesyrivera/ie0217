import matplotlib.pyplot as plt

# Datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# crea el grafico de linea
plt.plot(x, y, label='Datos de ejemplo')

# agrega una anotacion
plt.annotate('Valor Maximo', xy=(5, 14), xytext=(3, 16), arrowprops=dict(facecolor='black', shrink=0.05))

# se personaliza el grafico
plt.xlabel('Eje X')
plt.ylabel('Eje y')
# titulo
plt.title('Grafico con Anotacion')
# muestra informacion
plt.legend()

# muestra el grafico
plt.show()