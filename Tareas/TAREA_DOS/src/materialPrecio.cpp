/**
 * @file materialPrecio.cpp
 * @author jesyrivera
 * @brief archivo que contiene las funciones para calcular el precio de los materiales
 * @version 0.1
 * @date 2024-01-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "materialPrecio.hpp"

/**
 * @brief constructor de la clase MaterialPrecio
 * recibe tres parametros y las clases base MaterialLectura y MaterialAudiovisual
 * @param titulo 
 * @param tipoMaterial 
 * @param precio 
 */
MaterialPrecio::MaterialPrecio(const string& titulo, const string& tipoMaterial, double precio)
    : MaterialLectura(titulo, tipoMaterial, tipoMaterial, "", "", "", "", 0, precio),
      MaterialAudiovisual(titulo, tipoMaterial, "", tipoMaterial, "", 0, "", precio) {}

/**
 * @brief funcion que ordena un vector de la clase MaterialPrecio
 * ordena los precio de manera ascendente utilizando el algoritmo de ordenamiento Bubble Sort
 * @param materiales 
 */
void MaterialPrecio::ordenarPorPrecioAscendente(vector<MaterialPrecio>& materiales) {
    size_t n = materiales.size();
    
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (materiales[j].MaterialAudiovisual::precio > materiales[j + 1].MaterialAudiovisual::precio) {
                /**
                 * @brief intercambia los elementos
                 */
                iter_swap(materiales.begin() + j, materiales.begin() + j + 1);
            }
        }
    }
}

/**
 * @brief funcion que ordena un vector de la clase MaterialPrecio
 * lo ordena de manera descendente usando el algoritmo de ordenamiento Bubble Sort
 * @param materiales 
 */
void MaterialPrecio::ordenarPorPrecioDescendente(vector<MaterialPrecio>& materiales) {
    size_t n = materiales.size();
    
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (materiales[j].MaterialAudiovisual::precio < materiales[j + 1].MaterialAudiovisual::precio) {
                /**
                 * @brief intercambia los elementos
                 */
                iter_swap(materiales.begin() + j, materiales.begin() + j + 1);
            }
        }
    }
}

/**
 * @brief se define la funcion que imprime la informacion de la clase MaterialPrecio
 */
void MaterialPrecio::imprimirInformacion() const {
    cout << "Título: " << MaterialLectura::titulo << endl;
    cout << "Tipo de Material: " << MaterialLectura::tipoMaterial << endl;
    cout << "Precio: $" << MaterialAudiovisual::precio << endl;
}
