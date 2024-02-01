import matplotlib.pyplot as plt

# Datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# crea el grafico de linea
plt.plot(x, y, color='blue', linestyle='--', marker='o', label='Serie A')

# se personaliza el grafico
# etiquetas
plt.xlabel('Eje X')
plt.ylabel('Eje y')
# titulo
plt.title('Grafico Personalizado')
# muestra informacion
plt.legend()

# muestra el grafico
plt.show()