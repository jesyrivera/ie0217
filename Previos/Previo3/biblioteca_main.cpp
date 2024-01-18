/**
 * @file biblioteca_main.cpp
 * @author jesyrivera
 * @brief contiene a la funcion main para llamar a las funciones y que corra el programa
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "biblioteca.hpp"

int main() {
    Biblioteca biblioteca; /**<Crea un objeto de la clase Biblioteca*/
    /**
     * @brief agrega dos libros con la funcion agregarLibro
     */
    biblioteca.agregarLibro("El Gran Gatsby", "F. Scott Fitzgerald");
    biblioteca.agregarLibro("1984", "George Orwell");

    /** Imprime el catalogo con la lista de libros*/
    biblioteca.mostrarCatalogo();

    return 0;
}