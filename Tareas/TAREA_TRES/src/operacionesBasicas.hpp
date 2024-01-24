/**
 * @file operacionesBasicas.hpp
 * @author jesyrivera
 * @brief Se declara la clase OperacionesBasicas y funciones prototipo para manipular las matrices
 * @version 0.1
 * @date 2024-01-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef OPERACIONESBASICAS_HPP
#define OPERACIONESBASICAS_HPP

#include "matriz.hpp"

/**
 * @brief Clase que realiza operaciones basicas en matrices
 * 
 * @tparam T 
 */
template <typename T>
class OperacionesBasicas {
public:
    /**
     * @brief funcion que valida si es posible realizar la operacion en las matrices
     * 
     * @param matriz1 
     * @param matriz2 
     * @param operacion representa la operacion (=,-,*)
     * @throw invalid_argument lanza un mensaje de error si la operacion no es valida
     * las dimensiones de la matriz no permite esa operacion
     */
    static void validar(const Matriz<T>& matriz1, const Matriz<T>& matriz2, char operacion);
    
    /**
     * @brief suma dos matrices
     * 
     * @param matriz1 
     * @param matriz2 
     * @return Matriz<T> resultado de la suma
     */
    static Matriz<T> suma(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    
    /**
     * @brief resta dos matrices
     * 
     * @param matriz1 
     * @param matriz2 
     * @return Matriz<T> resultado de la resta
     */
    static Matriz<T> resta(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    
    /**
     * @brief suma dos matrices
     * 
     * @param matriz1 
     * @param matriz2 
     * @return Matriz<T> resultado de la suma
     */
    static Matriz<T> multiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

	/**
     * @brief sobrecarga del operador + para sumar dos matrices
     * 
     * @param matriz1 
     * @param matriz2 
     * @return matriz resultante
     */
	friend Matriz<T> operator+(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
		return suma(matriz1, matriz2);
	}

	/**
     * @brief sobrecarga del operador - para restar dos matrices
     * 
     * @param matriz1 
     * @param matriz2 
     * @return matriz resultante
     */
	friend Matriz<T> operator-(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
		return resta(matriz1, matriz2);
	}

	/**
     * @brief sobrecarga del operador * para multiplicar dos matrices
     * 
     * @param matriz1 
     * @param matriz2 
     * @return matriz resultante
     */
	friend Matriz<T> operator*(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
		return multiplicacion(matriz1, matriz2);
	}
};

#include "operacionesBasicas.cpp"

#endif // OPERACIONESBASICAS_HPP