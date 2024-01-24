/**
 * @file correo.hpp
 * @author jesyrivera
 * @brief se define la clase correo para validar direcciones de correos electronicos
 * @version 0.1
 * @date 2024-01-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef CORREO_HPP
#define CORREO_HPP

#include <regex>
#include <stdexcept>
#include <iostream>
using namespace std;

/**
 * @brief se define la clase correo
 * 
 */
class Correo {
public:
	/**
	 * @brief metodo de funcion para validar un correo electronico
	 * 
	 * @param correo 
	 * @return true si es valido
	 * @return false si no es valido
	 */
    static bool validarCorreo(const string& correo);
};

#endif // CORREO_HPP