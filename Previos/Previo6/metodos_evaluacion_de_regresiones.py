# se importan las bibliotecas
import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_absolute_error, mean_squared_error
from math import sqrt

# se generan numeros al azar pero siempre los mismos
np.random.seed(42)
# se genera un vector de 100 numeros al azar multiplicado
X = 2 * np.random.rand(100, 1)
y = 4 + 3 * X + np.random.randn(100, 1)

# los datos de ejemplo que se crearon, se dividen en conjuntos de
# entrenamiento y prueba, se generan 4 vectores
X_train, X_test, y_train, y_test = \
    train_test_split(X, y, test_size=0.2, random_state=42)

# se crea un modelo con la instancia un objeto LinearRegression
modelo = LinearRegression()

# ajusta el modelo, le paso los parametros X y 'y'
modelo.fit(X_train, y_train)

# hace predicciones del conjunto de prueba
y_pred = modelo.predict(X_test)


# calcula el error absoluto medio
mae = mean_absolute_error(y_test, y_pred)
# calcula el error cuadratico medio
mse = mean_squared_error(y_test, y_pred)
# calcula la raiz cuadrada de la variable de arriba
rmse = sqrt(mse)
# calcula el eerror absoluto relativo
rae = np.sum(np.abs(y_test - y_pred)) / \
    np.sum(np.abs(y_test - np.mean(y_test)))
# calcula el error cuadratico relativo
rse = np.sum((y_test - y_pred)**2) / np.sum((y_test - np.mean(y_test))**2)

# imprime los resultados
print(f'MAE: {mae:.2f}')
print(f'MSE: {mse:.2f}')
print(f'RMSE: {rmse:.2f}')
print(f'RAE: {rae:.2f}')
print(f'RSE: {rse:.2f}')

# gradico de dispersion
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
# grafico de linea
plt.plot(X_test, y_pred, label='Predicciones', color='red')
# titulo
plt.title('Regresion Lineal y Errores')
# etiquetas
plt.xlabel('X')
plt.ylabel('y')
# muestra la informacion
plt.legend()

# muestra los errores en la grafica
# cilco for que itera sobre cada linea en el conjunto de prueba
for i in range(len(X_test)):
    # grafico de linea
    plt.plot([X_test[i], X_test[i]],
             [y_test[i], y_pred[i]],
             linestyle='--', color='gray')

# lo muestra
plt.show()
