import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np

# se crea una figura y los ejes con la funcion
fix, ax = plt.subplots()
ax.plot([1, 2, 3, 4], [1, 4, 1, 3])
# se muestra el grafico
plt.show()