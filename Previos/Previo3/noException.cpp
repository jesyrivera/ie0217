/**
 * @file noException.cpp
 * @author jesyrivera
 * @brief ejemplo donde no se utilizan excepciones, no se toma en cuenta los posibles casos de error
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <stdexcept>
using namespace std;

 int main() {
    int numerador, denominador, resultado; /**<Declara las variables del tipo double*/
    
    /**
     * @brief se imprime el mensaje donde se le solicita al usuario ingresar dos 
     * valores, usando cin los lee, se calcula la division y se imprime la informacion
     */
    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denomminador: ";
    cin >> denominador;

    resultado = numerador / denominador;
    cout << "El resultado es: " << resultado << endl;

    return 0;
 }