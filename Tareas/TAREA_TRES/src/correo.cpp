/**
 * @file correo.cpp
 * @author jesyrivera
 * @brief se implementan las funciones de la clase Correo
 * @version 0.1
 * @date 2024-01-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "correo.hpp"

/**
 * @brief valida la direccion de correo electronico
 * 
 * @param correo 
 * @return true si es valida
 * @return false si no lo es
 */
bool Correo::validarCorreo(const string& correo) {
    //expresion regular para validar la direccion del correo
    regex regexCorreo(R"([a-zA-Z0-9.-]+@[a-zA-Z]+\.[a-zA-Z]{2,4})");

    //comprueba si hay un @
    if (correo.find('@') == -1) {
        throw invalid_argument("no contiene el '@'");
    }
    return regex_match(correo, regexCorreo);
}