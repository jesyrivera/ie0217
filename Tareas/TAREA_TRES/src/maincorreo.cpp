/**
 * @file maincorreo.cpp
 * @author jesyrivera
 * @brief funcion main para la validacion de correos
 * @version 0.1
 * @date 2024-01-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "correo.hpp"

/**
 * @brief funcion main que valida direcciones de correos electronicos
 * 
 * @return 0
 */
int main() {
    try {
        string correo;
        cout << "ingrese una direccion de correo electronico: ";
        cin >> correo;

		//valida el correo
        if (Correo::validarCorreo(correo)) {
            cout << "la direccion de correo electronico que ingreso es valida." << endl;
        }
		else {
            cout << "la direccion de correo que ingreso es invalida." << endl;
        }
    }
	catch (const invalid_argument& e) {
        cerr << "error: " << e.what() << endl;
    }
    return 0;
}