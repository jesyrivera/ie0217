/**
 * @file estudiante.cpp
 * @author jesyrivera
 * @brief definicion de funciones
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include "estudiante.hpp"
/**
 * @brief Constructor de la clase Estudiante
 * 
 * @param nombre 
 * @param edad 
 */
Estudiante::Estudiante(
    /**
     * @brief metodo de funcion para mostrar los datos
     * del estudiante, imprime el nombre y la edad del estudiante
     */
    const string& nombre, int edad
) : nombre(nombre), edad(edad){}

void Estudiante::mostrarDatos() {
    /**
     * @brief se define el metodo mostrarDatos de la estructura Estudiante
     * imprime el nombre del estudiante y luego la edad
     */
    cout << "Nombre: " << nombre;
    cout << ", Edad: " << edad << endl;
}