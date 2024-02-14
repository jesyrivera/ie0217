# se importan las bibliotecas y modulos
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_error


# se define la funcion de regresion lineal
def regresion_lineal(df, feature, target):
    # datos
    X = df[[feature]]
    y = df[target]

    # se divide el conjunto de datos en train y en test
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2,
                                                        random_state=42)
    # crea el modelo de regresion lineal
    model = LinearRegression()
    # ajusta el modelo con los datos de train
    model.fit(X_train, y_train)

    # predice los datos de X_test
    y_pred = model.predict(X_test)

    # se calculan las metricas de rendimiento
    # calcula el error cuadratico medio
    mse = mean_squared_error(y_test, y_pred)
    # calcula el coeficiente de determinacion
    r2 = r2_score(y_test, y_pred)
    # calcula el error absoluto medio
    mae = mean_absolute_error(y_test, y_pred)

    # grafico de dispersion
    plt.scatter(X_test, y_test, color='pink')
    # grafico de llinea
    plt.plot(X_test, y_pred, color='purple')
    # titulo
    plt.title('Regresion Lineal: ' + feature + ' vs ' + target)
    # etiquetas
    plt.xlabel(feature)
    plt.ylabel(target)
    # lo muestra
    plt.show()

    # imprime los datos de las metriicas
    print("Metricas del modelo de regresion lineal para", feature, "vs",
          target)
    print("Error cuadratico medio (MSE):", mse)
    print("Coeficiente de determinacion (R²):", r2)
    print("Error absoluto medio (MAE):", mae)


# se define la funcion de regresion no lineal, grado de polinomio 2
def regresion_no_lineal(df, feature, target, grado=2):
    # datos
    X = df[[feature]]
    y = df[target]

    # se divide el conjunto de datos en train y en test
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2,
                                                        random_state=42)
    # se crea la instancia con el parametro degree
    polinomio_features = PolynomialFeatures(degree=grado)
    # ajusta la instancia a los datos de train
    X_polinomio_train = polinomio_features.fit_transform(X_train)
    # los datos transformados se asignan a X_polinomio_test
    X_polinomio_test = polinomio_features.transform(X_test)

    # se crea el modelo de regresion
    model = LinearRegression()
    # ajusta el modelo con los datos
    model.fit(X_polinomio_train, y_train)

    # se predicen los datos de X_polinomio_test
    y_pred = model.predict(X_polinomio_test)

    # calcula las metricas de rendimiento
    # calcula el error cuadratico medio
    mse = mean_squared_error(y_test, y_pred)
    # calcula el coeficiente de determinacion
    r2 = r2_score(y_test, y_pred)
    # calcula el error absoluto medio
    mae = mean_absolute_error(y_test, y_pred)

    # grafico de dispersion
    plt.scatter(X_test, y_test, color='orange')
    # grafico de dispersion
    plt.scatter(X_test, y_pred, color='green')
    # titulo
    plt.title('Regresion No Lineal: ' + feature + ' vs ' + target)
    # etiquetas
    plt.xlabel(feature)
    plt.ylabel(target)
    # lo muestra
    plt.show()

    # imprime ls datos de las metricas de rendimiento
    print("Metricas del modelo de regresion no lineal para", feature, "vs",
          target, "(grado", grado, ")")
    print("Error cuadratico medio (MSE):", mse)
    print("Coeficiente de determinación (R²):", r2)
    print("Error absoluto medio (MAE):", mae)
