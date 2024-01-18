/**
 * @file main.cpp
 * @author jesyrivera
 * @brief contiene a la funcion main que llama a las funciones para que corra el programa
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include "estudiante.hpp"

int main() {
    Estudiante estudiante("Juan", 20); /**< Declara un objeto de la clase Estudiante*/
    /**
     * @brief llama al metodo funcion para que imprima la informacion del estudiante
     */
    estudiante.mostrarDatos();
    return 0;
}