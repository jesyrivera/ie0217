# se importan las bibliotecas
import numpy as np
import  matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score

# se generan numeros al azar pero siempre los mismos
np.random.seed(42)
# se genera un vector de 100 numeros al azar multiplicado
X = 2 * np.random.rand(100, 1)
y = 4 + 3 * X + np.random.randn(100, 1)

# los datos de ejemplo que se crearon, se dividen en conjuntos de entrenamiento y prueba
# se generan 4 vectores
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

# se crea un modelo con la instancia un objeto LinearRegression
modelo = LinearRegression()
# ajusta el modelo, le paso los parametros X y 'y'
modelo.fit(X_train, y_train)

# hace predicciones del conjunto de prueba
y_pred = modelo.predict(X_test)

# se calcula el coeficiente de determinacionR^2
r2 = r2_score(y_test, y_pred)


# gradico de dispersion
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
# grafico de linea
plt.plot(X_test, y_pred, label=f'Regresion lineal (R^2={r2:.2f})', 
        color='red')
# titulo
plt.title('Regresion Lineal y Coeficientes de Determinacion R^2')
# etiquetas
plt.xlabel('X')
plt.ylabel('y')
# muestra la informacion
plt.legend()
# lo muestra
plt.show()
