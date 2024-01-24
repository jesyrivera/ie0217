/**
 * @file matriz.cpp
 * @author your name (you@domain.com)
 * @brief archivo que implementa las funciones prototipo de la Clase principal Matriz
 * @version 0.1
 * @date 2024-01-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "matriz.hpp"

/**
 * @brief Constructor de la clase principal Matriz
 * 
 * @tparam T tipo de dato de la matriz
 * @param filas numero de filas
 * @param columnas numero de filas
 * @param valores vector con los valores de la matriz
 * @throw invalid_argument lanza error si los datos de la matriz son diferentes a float, int y numeros complejos
 */
template <typename T>
Matriz<T>::Matriz(size_t filas, size_t columnas, const vector<vector<T>>& valores)
    : filas(filas), columnas(columnas), datos(valores) {
    if (!is_same<T, int>::value && !is_same<T, float>::value && !is_same<T, complex<double>>::value) {
        throw invalid_argument("Tipo de dato no permitido. Solo se permiten int, float y complex<double>.");
    }
}

/**
 * @brief funcion que solicita que ingrese el numero de columnas y filas de la matris y sus elementos
 * 
 * @tparam T 
 */
template <typename T>
void Matriz<T>::pedirDatos() {
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;

    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    datos.resize(filas, vector<T>(columnas));

    for (size_t i = 0; i < filas; ++i) {
        for (size_t j = 0; j < columnas; ++j) {
            cout << "Ingrese el elemento en la posicion fila [" << i << "] y columna [" << j << "]: ";
            cin >> datos[i][j];
        }
    }
}

/**
 * @brief metodo de funcion que solicita que ingrese el tipo de operacion que desea realizar
 * 
 * @tparam T 
 * @return matriz despues de la operacion
 * @throw invalid_argument lanza un mensaje de error si la operacion ingresada no es valida
 */
template <typename T>
Matriz<T> Matriz<T>::realizarOperacion() const {
    char operacion;
    cout << "Ingrese la operacion que desea realizar (+, - o *): ";
    cin >> operacion;

    Matriz<T> resultado(filas, columnas, datos);

    for (size_t i = 0; i < filas; ++i) {
        for (size_t j = 0; j < columnas; ++j) {
            switch (operacion) {
                case '+':
                    resultado.datos[i][j] += datos[i][j];
                    break;
                case '-':
                    resultado.datos[i][j] -= datos[i][j];
                    break;
                case '*':
                    resultado.datos[i][j] *= datos[i][j];
                    break;
                default:
                    throw invalid_argument("Operacion no valida. Ingrese una de las operaciones indicadas");
            }
        }
    }

    return resultado;
}