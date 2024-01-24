/**
 * @file imprimirMatrices.hpp
 * @author jesyrivera
 * @brief se declara la clase ImprimirMatrices que tiene la funcion de imprimir las matrices y las matrices resultantes
 * @version 0.1
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef IMPRIMIRMATRICES_HPP
#define IMPRIMIRMATRICES_HPP

#include "matriz.hpp"
#include "operacionesBasicas.hpp"
#include "operacionCompleja.hpp"

/**
 * @brief se declara la matriz ImprimirMatrices para imprimir las matrices y los resultados
 *
 * @tparam T 
 */
template <typename T>
class ImprimirMatrices {
public:
    /**
     * @brief funcion que imprime la matriz en formato mxn
     * 
     * @param matriz
     */
    static void imprimirMatriz(const Matriz<T>& matriz);
    
    /**
     * @brief funcion que imprime la matriz resultante de operaciones en formato mxn
     * 
     * @param resultado  matriz resultante
     */
    static void imprimirResultado(const Matriz<T>& resultado);
};

#include "imprimirMatrices.cpp"
#endif // IMPRIMIRMATRICES_HPP
