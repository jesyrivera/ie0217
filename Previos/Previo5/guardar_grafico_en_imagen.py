import matplotlib.pyplot as plt

# Datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# crea el grafico de linea
plt.plot(x, y)

# se personaliza el grafico
# etiquetas
plt.xlabel('Eje X')
plt.ylabel('Eje y')
# titulo
plt.title('Grafico de Linea con Etiquetas y Titulo')
# muestra la informacion
plt.legend()

# guarda el grafico como una imagen
plt.savefig('grafico.png')

# muestra el grafico
plt.show()