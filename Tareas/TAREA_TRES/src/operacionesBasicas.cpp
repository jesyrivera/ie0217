/**
 * @file operacionesBasicas.cpp
 * @author jesyrivera
 * @brief Se implementan las funciones de la clase OperacionesBasicas para realizar operaciones en las matrices
 * @version 0.1
 * @date 2024-01-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "operacionesBasicas.hpp"

/**
 * @brief metodo para validar
 * Para sumar o restar 2 matrices estas deben tener las mismas dimensiones 
 * y para multiplicar dos matrices, el numero de columnas de la
 * primera matriz debe ser igual al numero de filas de la segunda matriz
 * @tparam T 
 * @param matriz1 
 * @param matriz2 
 * @param operacion
 * @throw invalid_argument tira un mensaje de error si no se pueden sumar, restar, multipiclar o la operacion no es valida 
 */
template <typename T>
void OperacionesBasicas<T>::validar(const Matriz<T>& matriz1, const Matriz<T>& matriz2, char operacion) {
    switch (operacion) {
        case '+':
        case '-':
            if (matriz1.obtenerFilas() != matriz2.obtenerFilas() || matriz1.obtenerColumnas() != matriz2.obtenerColumnas()) {
                throw invalid_argument("no es posible sumar o restar matrices de diferentes dimensiones");
            }
            break;
        case '*':
            if (matriz1.obtenerColumnas() != matriz2.obtenerFilas()) {
                throw invalid_argument("No se puede multiplicar matrices porque el numero de columnas de la primera matriz debe ser igual al numero de filas de la segunda matriz");
            }
            break;
        default:
            throw invalid_argument("Esta operacion no es valida");
    }
}

/**
 * @brief metodo para implementar la operacion basica suma
 * se suman dos matrices, primero se verifica que las matrices sean compatibles,
 * luego se hace la suma y devuelve la matriz resultante
 * @tparam T 
 * @param matriz1 
 * @param matriz2 
 * @return Matriz<T> matriz resultante de la suma
 */
template <typename T>
Matriz<T> OperacionesBasicas<T>::suma(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    validar(matriz1, matriz2, '+');
    Matriz<T> resultado = matriz1 + matriz2;
    return resultado;
}

/**
 * @brief metodo para implementar la operacion basica resta
 * se restan dos matrices, primero se verifica que las matrices sean compatibles,
 * luego se hace la resta y devuelve la matriz resultante
 * @tparam T 
 * @param matriz1 
 * @param matriz2 
 * @return Matriz<T> matriz resultante de la resta
 */
template <typename T>
Matriz<T> OperacionesBasicas<T>::resta(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    validar(matriz1, matriz2, '-');
    Matriz<T> resultado = matriz1 - matriz2;
    return resultado;
}

/**
 * @brief metodo para implementar la operacion basica multiplicacion
 * se multiplican dos matrices, primero se verifica que las matrices sean compatibles,
 * determina las dimensiones de la matriz resultante, luego se hace la multiplicacion,
 * y devuelve la matriz resultante
 * @tparam T 
 * @param matriz1 
 * @param matriz2 
 * @return Matriz<T> matriz resultante de la multiplicacion
 */
template <typename T>
Matriz<T> OperacionesBasicas<T>::multiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    validar(matriz1, matriz2, '*');

    size_t filasResultado = matriz1.obtenerFilas();
    size_t columnasResultado = matriz2.obtenerColumnas();

    vector<vector<T>> datosResultado(filasResultado, vector<T>(columnasResultado, T()));

    for (size_t i = 0; i < filasResultado; ++i) {
        for (size_t j = 0; j < columnasResultado; ++j) {
            T suma = T();
            for (size_t k = 0; k < matriz1.obtenerColumnas(); ++k) {
                suma += matriz1(i, k) * matriz2(k, j);
            }
            datosResultado[i][j] = suma;
        }
    }
    return Matriz<T>(filasResultado, columnasResultado, datosResultado);
}

/**
 * @brief sobrecarga de operador con + para manipular las matrices
 * @tparam T 
 * @param matriz1 
 * @param matriz2 
 * @return Matriz<T> resultante
 */
template <typename T>
Matriz<T> operator+(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    return OperacionesBasicas<T>::suma(matriz1, matriz2);
}

/**
 * @brief sobrecarga de operador con - para manipular las matrices
 * @tparam T 
 * @param matriz1 
 * @param matriz2 
 * @return Matriz<T> resultante
 */
template <typename T>
Matriz<T> operator-(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    return OperacionesBasicas<T>::resta(matriz1, matriz2);
}

/**
 * @brief sobrecarga de operador con * para manipular las matrices
 * @tparam T 
 * @param matriz1 
 * @param matriz2 
 * @return Matriz<T> resultante
 */
template <typename T>
Matriz<T> operator*(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    return OperacionesBasicas<T>::multiplicacion(matriz1, matriz2);
}