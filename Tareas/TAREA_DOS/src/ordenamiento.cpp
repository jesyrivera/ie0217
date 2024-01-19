/**
 * @file ordenamiento.cpp
 * @author jesyrivera
 * @brief contiene las funciones definidas de la clase MaterialOrdenado
 * @version 0.1
 * @date 2024-01-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "ordenamiento.hpp"

/**
 * @brief constructor de la clase MaterialOrdenado
 * 
 */
MaterialOrdenado::MaterialOrdenado() {}

/**
 * @brief destructor de la clase MaterialOrdenado
 * va a eliminar los materiales que fueron almacenados en el vector
 */
MaterialOrdenado::~MaterialOrdenado() {
    for (auto material : materiales) {
        delete material;
    }
}

/**
 * @brief funcion que agrega un material al vector, recibe un parametro
 * @param material 
 */
void MaterialOrdenado::agregarMaterial(MaterialLectura* material) {
    materiales.push_back(material);
}

/**
 * @brief funcion que elimina un material del vector, recibe un parametro
 * @param titulo 
 */
void MaterialOrdenado::eliminarMaterial(const string& titulo) {
    auto it = remove_if(materiales.begin(), materiales.end(),
                             [titulo](MaterialLectura* material) {
                                 return material->titulo == titulo;
                             });
    materiales.erase(it, materiales.end());
}

/**
 * @brief busca materiales con el titulo
 * @param titulo 
 * @return MaterialLectura* 
 */
MaterialLectura* MaterialOrdenado::buscarMaterialPorTitulo(const string& titulo) const {
    for (auto material : materiales) {
        if (material->titulo == titulo) {
            return material;
        }
    }
    return nullptr;
}

/**
 * @brief busca los materiales con el tipo
 * @param tipo 
 * @return vector<MaterialLectura*> 
 */
vector<MaterialLectura*> MaterialOrdenado::buscarMaterialPorTipo(const string& tipo) const {
    vector<MaterialLectura*> result;
    for (auto material : materiales) {
        if (material->tipoMaterial == tipo) {
            result.push_back(material);
        }
    }
    return result;
}