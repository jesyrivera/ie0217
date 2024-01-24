/**
 * @file operacionCompleja.hpp
 * @author jesyrivera
 * @brief declaracion de la clase OperacionCompleja para manipular matrices con numeros complejos
 * @version 0.1
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef OPERACIONCOMPLEJA_HPP
#define OPERACIONCOMPLEJA_HPP

#include <complex>
#include "matriz.hpp"
#include "operacionesBasicas.hpp"
#include "imprimirMatrices.hpp"

/**
 * @brief La clase OperacionCompleja realiza operaciones a matrices con numeros complejos
 * @tparam T 
 */
template <typename T>
class OperacionCompleja {
public:
    /**
     * @brief metodo de funcion que realiza suma entre dos matrices con numeros complejos
     * 
     * @param matriz1 
     * @param matriz2 
     * @return matriz resultante
     */
    static Matriz<complex<T>> suma(const Matriz<complex<T>>& matriz1, const Matriz<complex<T>>& matriz2);
    
    /**
     * @brief metodo de funcion que realiza resta entre dos matrices con numeros complejos
     * 
     * @param matriz1 
     * @param matriz2 
     * @return matriz resultante
     */
    static Matriz<complex<T>> resta(const Matriz<complex<T>>& matriz1, const Matriz<complex<T>>& matriz2);
    
    /**
     * @brief metodo de funcion que realiza multiplicacion entre dos matrices con numeros complejos
     * 
     * @param matriz1 
     * @param matriz2 
     * @return matriz resultante
     */
    static Matriz<complex<T>> multiplicacion(const Matriz<complex<T>>& matriz1, const Matriz<complex<T>>& matriz2);
	
	/**
     * @brief sobrecarga del operador + para sumar dos matrices con numeros complejos
     * 
     * @param matriz1 
     * @param matriz2 
     * @return matriz resultante
     */
	friend Matriz<complex<T>> operator+(const Matriz<complex<T>>& matriz1, const Matriz<complex<T>>& matriz2) {
        return suma(matriz1, matriz2);
    }

    /**
     * @brief sobrecarga del operador - para restar dos matrices con numeros complejos
     * 
     * @param matriz1 
     * @param matriz2 
     * @return matriz resultante
     */
    friend Matriz<complex<T>> operator-(const Matriz<complex<T>>& matriz1, const Matriz<complex<T>>& matriz2) {
        return resta(matriz1, matriz2);
    }

    /**
     * @brief sobrecarga del operador * para multiplicar dos matrices con numeros complejos
     * 
     * @param matriz1 
     * @param matriz2 
     * @return matriz resultante
     */
    friend Matriz<complex<T>> operator*(const Matriz<complex<T>>& matriz1, const Matriz<complex<T>>& matriz2) {
        return multiplicacion(matriz1, matriz2);
    }
};

#include "operacionCompleja.cpp"
#endif // OPERACIONCOMPLEJA_HPP
