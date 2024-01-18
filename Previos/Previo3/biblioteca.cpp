/**
 * @file biblioteca.cpp
 * @author jesyrivera
 * @brief define a las funciones del programa
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include "biblioteca.hpp"
using namespace std;

/**
 * @brief agrega un libro al catalogo
 * @param titulo 
 * @param autor 
 */
void Biblioteca::agregarLibro(const string& titulo, const string& autor) {
    catalogo.emplace_back(titulo, autor);
}

/**
 * @brief imprime la informacion de los libros en el catalogo
 * con el bucle for recorre todo el catalogo y llama a la funciion
 * para que imprima el titulo y autor de los libros
 */
void Biblioteca::mostrarCatalogo() {
    for (const auto& libro : catalogo) {
        libro.mostrarInfo();
    }
}