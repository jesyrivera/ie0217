/**
 * @file libro.hpp
 * @author jesyrivera
 * @brief contiene la clase Libro
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>
using namespace std;

class Libro { /**<Declara la clase Libro*/
public: /**<Especifica que el acceso es tipo publico (se accede desde cualquier parte)*/
    /**
     * @brief Constructor de la clase Libro
     * @param titulo 
     * @param autor 
     */
    Libro(const string& titulo, const string& autor);
    
    /**
     * @brief metodo de funcion que imprime la informacion del libro
     */
    void mostrarInfo() const;

private: /**<Especifica que el acceso es de tipo privado (se accede solo adentro)*/
    string titulo;
    string autor;
};

#endif