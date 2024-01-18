/**
 * @file libro.cpp
 * @author jesyrivera
 * @brief contiene la definicion de la funcion y el constructor
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include "libro.hpp"

/**
 * @brief Constructor de la clase libro
 * @param titulo 
 * @param autor 
 */
Libro::Libro(
    const string& titulo, const string& autor
) : titulo(titulo), autor(autor){}

/**
 * @brief metodo de funcion para imprimir la informacion del
 * libro, imprime el titulo y el autor 
 */
void Libro::mostrarInfo() const{
    cout << "Titulo: " << titulo << ", Autor: " << autor << endl;
}