# se importan las bibliotecas
import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.pipeline import make_pipeline

# se generan numeros al azar pero siempre los mismos
np.random.seed(42)
# se genera un vector de 100 numeros al azar multiplicado
X = 2 * np.random.rand(100, 1)
y = 0.5 * X**2 + X + 2 + np.random.randn(100, 1)

# grafico de dispersion
plt.scatter(X, y)
# titulo
plt.title('Datos de Regresion NO Lineal')
# etiquetas
plt.xlabel('X')
plt.ylabel('y')
# lo muestra
plt.show()

# se define el grado de esa variable
grado_polinomio = 2
# pedimos que nos de la regresion lineal, le pasamos como argumento el
# grado del polinomio
modelo_polinomio = make_pipeline(
    PolynomialFeatures(grado_polinomio), LinearRegression())
# ajusta el modelo con respecto a X y 'y'
modelo_polinomio.fit(X, y)

# visualizamos la regresion polinomica
X_test = np.linspace(0, 2, 100).reshape(100, 1)
# hace predicciones
y_pred = modelo_polinomio.predict(X_test)

# grafico de dispersion
plt.scatter(X, y)
# grafico de linea
plt.plot(X_test, y_pred, color='red',
         label=f'Regresion Polinomica({grado_polinomio} grado)')
# titulo
plt.title('Regresion Polinomica')
# etiquetas
plt.xlabel('X')
plt.ylabel('y')
# muestra al informacion
plt.legend()
# lo muestra
plt.show()
