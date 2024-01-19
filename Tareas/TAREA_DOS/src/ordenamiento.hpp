/**
 * @file ordenamiento.hpp
 * @author jesyrivera
 * @brief contiene la clase MaterialOrdenado
 * @version 0.1
 * @date 2024-01-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef ORDENAMIENTO_HPP
#define ORDENAMIENTO_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include "grupo1.hpp"
#include "grupo2.hpp"
using namespace std;

/**
 * @brief Se declara la clase Material ordenado que represena materiales ordenados
 */
class MaterialOrdenado {
public:
    /**
     * @brief constructor de la clase MaterialOrdenado
     */
    MaterialOrdenado();

    /**
     * @brief destructor de la clase
     * elimina los materiales guardados en el vector
     */
    ~MaterialOrdenado();

    /**
     * @brief funcion para añadir un material al vector, recibe un parametro
     * @param material 
     */
    void agregarMaterial(MaterialLectura* material);

    /**
     * @brief funcion para eliminar un material del vector, recibe un parametro
     * @param titulo 
     */
    void eliminarMaterial(const string& titulo);

    /**
     * @brief metodo que busca un material con el titulo
     * @param titulo 
     * @return MaterialLectura* 
     */
    MaterialLectura* buscarMaterialPorTitulo(const string& titulo) const;

    /**
     * @brief busca un material con el tipo
     * @param tipo 
     * @return vector<MaterialLectura*> 
     */
    vector<MaterialLectura*> buscarMaterialPorTipo(const string& tipo) const;

private:
    vector<MaterialLectura*> materiales;
};

#endif