/**
 * @file biblioteca.hpp
 * @author jesyrivera
 * @brief contiene a la clase Biblioteca
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "libro.hpp"

class Biblioteca { /**<Se declara la clase Biblioteca*/
public: /**<Especifica que el acceso es tipo publico (se accede desde cualquier parte)*/
    /**
     * @brief agrega un libro al catalogo junto al titulo y autor
     * @param titulo 
     * @param autor 
     */
    void agregarLibro(const string& titulo, const string& autor);
    /**
     * @brief imprime el catalogo
     */
    void mostrarCatalogo();

private: /**<Especifica que el acceso es de tipo privado (se accede solo adentro)*/
    vector<Libro> catalogo; /**<guarda los libros en el catalogo*/
};

#endif