/**
 * @file estudiante.hpp
 * @author jesyrivera
 * @brief contiene la clase
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>
using namespace std;

class Estudiante{ /**<Se declara la clase Estudiante*/
    public: /**<Especifica que el acceso es tipo publico (se accede desde cualquier parte)*/
        /**
         * @brief Constructor de la clase Estudiante
         * @param nombre 
         * @param edad 
         */
        Estudiante(const string& nombre, int edad);
        
        /**
         * @brief metodo de funcion que imprime los datos del estudiante
         */
        void mostrarDatos();
    
    private: /**<Especifica que el acceso es de tipo privado (se accede solo adentro)*/
        string nombre;
        int edad;
        int edad2;
};

#endif