/**
 * @file main.cpp
 * @author jesyrivera
 * @brief contiene la funcion main que llama a todas las funciones del programa
 * @version 0.1
 * @date 2024-01-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "grupo1.hpp"
#include "grupo2.hpp"
#include "ordenamiento.hpp"
#include "materialPrecio.hpp"

/**
 * @brief funcion main
 *
 * @return 0
 */
int main() {
    /**< se crean objetos a partir de clases*/
    BibliotecaVirtual biblioteca;
    MaterialOrdenado materialOrdenado;
    vector<MaterialPrecio> materialesPrecio;

    /**
     * @brief se agrega un libro y una noticia, estan ordenados
     */
    Libro libro("El Libro", "Autor Libro", "Editorial", "Romance", "Disponible", 150, 15999.99, "Resumen", "Material Relacionado");
    Noticia noticia("La Noticia", "Autor Noticia", "Editorial", "Actualidad", "Disponible", 11, 205.99, "Resumen", "Material Relacionado");
    materialOrdenado.agregarMaterial(&libro);
    materialOrdenado.agregarMaterial(&noticia);


    /**
     * @brief a los materialesa agregados, se les coloca el precio
     */
    materialesPrecio.emplace_back("Libro1", "Libro", 15999.99);
    materialesPrecio.emplace_back("Noticia1", "Noticia", 205.99);

    /**
     * @brief se ordenan los precios de manera ascendente, recibe un parametro
     */
    MaterialPrecio::ordenarPorPrecioAscendente(materialesPrecio);

    /**
     * @brief se imprime el mensaje y luego la informacion de la biblioteca virtual
     */
    cout << "Información de la Biblioteca Virtual: "<< endl;
    biblioteca.imprimirInformacion();

    /**
     * @brief se busca un libro usando el titulo y se imprime la informacion del libro
     */
    MaterialLectura* materialBuscado = materialOrdenado.buscarMaterialPorTitulo("El Libro");
    if (materialBuscado) {
        materialBuscado->imprimirInformacion();
    }

    /**
     * @brief se imprime los precios de los materiales
     */
    for (const auto& material : materialesPrecio) {
        material.imprimirInformacion();
    }

    return 0;
}