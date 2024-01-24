/**
 * @file matriz.hpp
 * @author jesyrivera
 * @brief archivo donde se declara la Clase principal Matriz
 * @version 0.1
 * @date 2024-01-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <vector>
#include <stdexcept>
#include <complex>
#include <iostream>
using namespace std;

/**
 * @brief Se declara la clase principal Matriz representa una matriz que acepta cualquier tipo de dato
 * @tparam T
 */
template <typename T>
class Matriz {
private:
    vector<vector<T>> datos; ///< vector que almacena los elementos de la matriz
    size_t filas; ///< numero de filas
    size_t columnas; ///<numero de columnas

public:
//escribir comentarioooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
    Matriz() : filas(0), columnas(0) {}
    /**
     * @brief constructor de la clase Matriz
     * @param filas 
     * @param columnas 
     * @param valores 
     */
    Matriz(size_t filas, size_t columnas, const vector<vector<T>>& valores);
    
    /**
     * @brief funcion que le pide al usuario ingresar valores
     * le pide ingresar el numero de filas y columnas de la matriz
     * le pide ingresar los datos de la matriz
     */
    void pedirDatos();

    /**
     * @brief metodo de funcion que le pide al usuario el tipo de operacion que desea realizar
     * 
     * @throw invalid_argument lanza un mensaje de error si la operacion es erronea
     */
    Matriz<T> realizarOperacion() const;
	
	friend Matriz<T> operator+(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
        return OperacionesBasicas<T>::suma(matriz1, matriz2);
    }

    friend Matriz<T> operator-(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
        return OperacionesBasicas<T>::resta(matriz1, matriz2);
    }

    friend Matriz<T> operator*(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
        return OperacionesBasicas<T>::multiplicacion(matriz1, matriz2);
    }

};

#endif // MATRIZ_HPP