/**
 * @file operacionCompleja.cpp
 * @author jesyrivera
 * @brief implementacion de las funciones de la clase OperacionCompleja
 * @version 0.1
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "operacionCompleja.hpp"

/**
 * @brief se implementa la funcion de la clase OperacionCompleja
 * primero se validan que las matrices sean compatibles para la operacion
 * luego se realiza la suma de dos matrices que tienen numeros commplejos
 * @tparam T 
 * @param matriz1 
 * @param matriz2 
 * @return Matriz<complex<T>> matriz resultante
 */
template <typename T>
Matriz<complex<T>> OperacionCompleja<T>::suma(const Matriz<complex<T>>& matriz1, const Matriz<complex<T>>& matriz2) {
    OperacionesBasicas<T>::validar(matriz1, matriz2, '+');
    Matriz<complex<T>> resultado(matriz1.obtenerFilas(), matriz1.obtenerColumnas());
    transform(matriz1.cbegin(), matriz1.cend(), matriz2.cbegin(), resultado.begin(), plus<complex<T>>());

    return resultado;
}

/**
 * @brief se implementa la funcion de la clase OperacionCompleja
 * primero se validan que las matrices sean compatibles para la operacion
 * luego se realiza la resta de dos matrices que tienen numeros commplejos
 * @tparam T 
 * @param matriz1 
 * @param matriz2 
 * @return Matriz<complex<T>> matriz resultante
 */
template <typename T>
Matriz<complex<T>> OperacionCompleja<T>::resta(const Matriz<complex<T>>& matriz1, const Matriz<complex<T>>& matriz2) {
    OperacionesBasicas<T>::validar(matriz1, matriz2, '-');
    Matriz<complex<T>> resultado(matriz1.obtenerFilas(), matriz1.obtenerColumnas());
    transform(matriz1.cbegin(), matriz1.cend(), matriz2.cbegin(), resultado.begin(), minus<complex<T>>());

    return resultado;
}

/**
 * @brief se implementa la funcion de la clase OperacionCompleja
 * primero se validan que las matrices sean compatibles para la operacion
 * luego se realiza la multiplicacion de dos matrices que tienen numeros commplejos
 * @tparam T 
 * @param matriz1 
 * @param matriz2 
 * @return Matriz<complex<T>> matriz resultante
 */
template <typename T>
Matriz<complex<T>> OperacionCompleja<T>::multiplicacion(const Matriz<complex<T>>& matriz1, const Matriz<complex<T>>& matriz2) {
    OperacionesBasicas<T>::validar(matriz1, matriz2, '*');

    Matriz<complex<T>> resultado(matriz1.obtenerFilas(), matriz2.obtenerColumnas());
    for (size_t i = 0; i < matriz1.obtenerFilas(); ++i) {
        for (size_t j = 0; j < matriz2.obtenerColumnas(); ++j) {
            resultado(i, j) = inner_product(matriz1[i].cbegin(), matriz1[i].cend(), matriz2.cbegin() + j, complex<T>());
        }
    }

    return resultado;
}