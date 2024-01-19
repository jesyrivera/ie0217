/**
 * @file materialPrecio.hpp
 * @author jesyrivera
 * @brief contiene la clase MaterialPrecio
 * @version 0.1
 * @date 2024-01-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef MATERIALPRECIO_HPP
#define MATERIALPRECIO_HPP
#include <iostream>
#include <vector>
#include "grupo1.hpp" // Incluir las clases de grupo1.hpp
#include "grupo2.hpp" // Incluir las clases de grupo2.hpp

/**
 * @brief Se declara la clse que representa el material con el precio
 */
class MaterialPrecio : public MaterialLectura, public MaterialAudiovisual {
public:
    /**
     * @brief constructor de la clase, recibe tres parametros
     * @param titulo 
     * @param tipoMaterial 
     * @param precio 
     */
    MaterialPrecio(const string& titulo, const string& tipoMaterial, double precio);

    /**
     * @brief funciones prototipo que ordena los precios 
     * los ordena por medio del algoritmo bubble sort, de manera ascendente y luedo descendente
     * @param materiales 
     */
    static void ordenarPorPrecioAscendente(vector<MaterialPrecio>& materiales);
    static void ordenarPorPrecioDescendente(vector<MaterialPrecio>& materiales);

    /**
     * @brief funcion que imprime la informacion del material
     */
    virtual void imprimirInformacion() const;
};

#endif