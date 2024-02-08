# se importan las bibliotecas
import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression, Lasso, Ridge
from sklearn.pipeline import make_pipeline

# se generan numeros al azar pero siempre los mismos
np.random.seed(42)
# se genera un vector de 100 numeros al azar multiplicado
X = 2 * np.random.rand(100, 1)
y = 0.5 * X**2 + X + 2 + np.random.randn(100, 1)

# los datos de ejemplo que se crearon, se dividen en conjuntos
# de entrenamiento y prueba, se generan 4 vectores
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

# crea un modelo de regresion polinomica de grado 2
modelo_polinomico = make_pipeline(
    PolynomialFeatures(degree=2), LinearRegression())
# ajusta el modelo con respecto a X_train y y_train
modelo_polinomico.fit(X_train, y_train)

# crea el modelo Lasso (L1) que genera un conjunto de
# PolynomialFeatures degree 2
# Agrega la suma de valores absolutos de los coeficientes multiplicados
# por un parametro de regularizacion el parametro de regularizacion es 0.1
modelo_lasso = make_pipeline(PolynomialFeatures(degree=2), Lasso(alpha=0.1))
# ajusta el modelo con respecto a X_train y y_train
modelo_lasso.fit(X_train, y_train)

# crea el modelo Ridge (L2) que genera un conjunto de
# PolynomialFeatures degree 2
# agrega la suma de valores cuadrados de los coeficientes multiplicados por
# un parametro de regularizacionel parametro de regularizacion es 0.1
modelo_ridge = make_pipeline(PolynomialFeatures(degree=2), Ridge(alpha=0.1))
# ajusta el modelo con respecto a X_train y y_train
modelo_ridge.fit(X_train, y_train)

# visualiza los resultados
# se ordenan los datos y se predice el valor
X_test_sorted, y_pred_polinomico_sorted = \
    zip(*sorted(zip(X_test, modelo_polinomico.predict(X_test))))
X_test_sorted, y_pred_lasso_sorted = \
    zip(*sorted(zip(X_test, modelo_lasso.predict(X_test))))
X_test_sorted, y_pred_ridge_sorted = \
    zip(*sorted(zip(X_test, modelo_ridge.predict(X_test))))

# grafico de dispersion
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
# graficos de linea
plt.plot(X_test_sorted, y_pred_polinomico_sorted, label='Regresion Polinomica',
         color='green')
plt.plot(X_test_sorted, y_pred_lasso_sorted, label='Lasso (L1)', color='red')
plt.plot(X_test_sorted, y_pred_ridge_sorted, label='Ridge (L2)',
         color='orange')
# titulo
plt.title('comparacion de Modelos con Regularizacion')
# etiquetas
plt.xlabel('X')
plt.ylabel('y')
# muestra la informacion
plt.legend()
# lo muestra
plt.show()
