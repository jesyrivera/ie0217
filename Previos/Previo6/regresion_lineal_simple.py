# importar bibliotecas
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# se generan numeros al azar pero siempre los mismos
np.random.seed(42)
# se genera un vector de 100 numeros al azar multiplicado
X = 2 * np.random.rand(100, 1)
y = 4 + 3 * X + np.random.randn(100, 1)

# se crea un modelo con la instancia un objeto LinearRegression
modelo = LinearRegression()

# ajusta el modelo, le paso los parametros X y 'y'
modelo.fit(X, y)

# imprime la informacion y los atributos dentro de modelo.fit,
# se acceden de esa manera
print("Coeficiente:", modelo.coef_[0][0])
print("Intercepcion:", modelo.intercept_[0])


# grafico de dispersion
plt.scatter(X, y)
# grafico de linea de color 3
plt.plot(X, modelo.predict(X), color='red', linewidth=3)
# titulo
plt.title('Regresion Lineal')
# etiquetas
plt.xlabel('X')
plt.ylabel('y')
# lo muestra
plt.show()
