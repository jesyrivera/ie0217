/**
 * @file imprimirMatrices.cpp
 * @author jesyrivera
 * @brief Implementacion de las funciones de la clase ImprimirMatrices
 * @version 0.1
 * @date 2024-01-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "imprimirMatrices.hpp"

/**
 * @brief funcion que imprime las matrices en formato mxn
 * 
 * @tparam T 
 * @param matriz 
 */
template <typename T>
void ImprimirMatrices<T>::imprimirMatriz(const Matriz<T>& matriz) {
    cout << "Matriz (" << matriz.obtenerFilas() << "x" << matriz.obtenerColumnas() << "):\n";
    
    for (size_t i = 0; i < matriz.obtenerFilas(); ++i) {
        for (size_t j = 0; j < matriz.obtenerColumnas(); ++j) {
            cout << matriz(i, j) << "\t";
        }
        cout << "\n";
    }
}

/**
 * @brief funcion que imprime las matrices resultantes de operaciones en formato mxn
 * 
 * @tparam T 
 * @param resultado 
 */
template <typename T>
void ImprimirMatrices<T>::imprimirResultado(const Matriz<T>& resultado) {
    cout << "Resultado (" << resultado.obtenerFilas() << "x" << resultado.obtenerColumnas() << "):\n";
    
    for (size_t i = 0; i < resultado.obtenerFilas(); ++i) {
        for (size_t j = 0; j < resultado.obtenerColumnas(); ++j) {
            cout << resultado(i, j) << "\t";
        }
        cout << "\n";
    }
}