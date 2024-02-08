# se importan las bibliotecas
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.datasets import make_regression

# crea datos de ejemplos, 100 muestras, caracteristicas 3, parametro de ruido 20
# semilla de 42
X, y = make_regression(n_samples=100, n_features=3, noise=20, random_state=42)

# se crea un dataframe y se le indican cuales columnas va a tener
df = pd.DataFrame(X, columns=['Tamano', 'Habitaciones', 'Distancia_Ciudad'])
# columna se crea con lo que se genero en y
df['Precio'] = y

# los datos de ejemplo que se crearon, se dividen en conjuntos de entrenamiento y prueba
# se generan 4 vectores
X_train, X_test, y_train, y_test = train_test_split(
    df[['Tamano', 'Habitaciones', 'Distancia_Ciudad']],
    df['Precio'], test_size=0.2, random_state=42
)

# crea un modelo de regresion lineal
modelo = LinearRegression()
# ajusta el modelo, le mandamos esos dos vectores
modelo.fit(X_train, y_train)

# se imprime los coeficientes e intercepcion
print('Coeficientes:', modelo.coef_)
print('Intercepcion:', modelo.intercept_)

# se hacen predicciones en el conjunto de prueba
y_pred = modelo.predict(X_test)

# el tamano de la visualizacion
fig = plt.figure(figsize=(12, 6))

# grafica 1 Tamano vs. Precio
# se agrega la subgrafica 131( 1 fila, 3 columnas y es la grafica 1)
ax1 = fig.add_subplot(131, projection='3d')
# grafico de dispersion de color azul
ax1.scatter(
    X_test['Tamano'], X_test['Habitaciones'],
    y_test, c='blue', marker='o', alpha=0.5
)
# etiquetas
ax1.set_xlabel('Tamano')
ax1.set_ylabel('Habitaciones')
ax1.set_zlabel('Precio Verdadero')
# titulo
ax1.set_title('Precio vedadero vs. Tamano y Habitaciones')


# grafica 2 Tamano vs. Precio Predicho
# se agrega la subgrafica 132( 1 fila, 3 columnas y es la grafica 2)
ax2 = fig.add_subplot(132, projection='3d')
# grafico de dispersion de color rojo
ax2.scatter(
    X_test['Tamano'], X_test['Habitaciones'],
    y_pred, c='red', marker='o', alpha=0.5
)
# etiquetas
ax2.set_xlabel('Tamano')
ax2.set_ylabel('Habitaciones')
ax2.set_zlabel('Precio Predicho')
# titulo
ax2.set_title('Precio Predicho vs. Tamano y Habitaciones')


# grafica 3 Comparacion de Precio verdadero y Precio predicho
# se agrega la subgrafica 133( 1 fila, 3 columnas y es la grafica 3)
ax3 = fig.add_subplot(133)
# grafico de dispersion de color verde
ax3.scatter(y_test, y_pred, c='green',  alpha=0.5)
ax3.plot(
    [min(y_test), max(y_test)], [min(y_test), max(y_test)],
    linestyle='--', color='red', linewidth=2)
# etiquetas
ax3.set_xlabel('Precio Verdadero')
ax3.set_ylabel('Precio Predicho')
# titulo
ax3.set_title('Comparacion de Precio vedadero y Precio Predicho')


#se maximiza el espacio de los graficos
plt.tight_layout()
# lo muestra
plt.show()