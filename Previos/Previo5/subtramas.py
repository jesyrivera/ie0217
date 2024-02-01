import matplotlib.pyplot as plt

# Datos
x = [1, 2, 3, 4, 5]
y1 = [10, 12, 5, 8, 14]
y2 = [5, 8, 9, 6, 10]

# crea subtramas
fig, axs = plt.subplots(1, 2)  # 1 fila y 2 columnas

# grafico en la primera subtrama
# etiquetas
axs[0].plot(x, y1, label='Serie A')
# titulo
axs[0].set_tittle('Subtrama 1')

# grafico en la segunda subtrama
# etiquetas
axs[1].plot(x, y2, label='Serie B', color='red')
# titulo
axs[1].set_tittle('Subtrama 2')

# se personaliza el grafico
for ax in axs:
    # etiquetas
    ax.set_xlabel('Eje X')
    ax.set_ylabel('Eje y')
    # muestra informacion
    ax.legend()

# ajusta disposicion
plt.tight_layout()

# muestra el grafico
plt.show()