/**
 * @file exception.cpp
 * @author jesyrivera
 * @brief crea excepciones para eventos que ocurren durante la ejecucion
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
     * valores, usando cin los lee
     */
    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denomminador: ";
    cin >> denominador;

    try { //ahi va el codigo que podria generar una excepcion
        if (denominador == 0) {
            /**
             * @brief se verifica si el denominador es 0, si es asi entonces
             * lanza un error llamado error de tiempo de ejecucion
             */
            throw runtime_error("Error: el denominador no puede ser cero");
            //throw: lanza una excepcion cuando se detecta un error (no es obligatoira)
        }
        resultado = numerador / denominador;
        cout << "El resultado es: " << resultado << endl;
    }
    catch (const exception& e){ //catch sabe como interpretar el throw
        /**
         * @brief el catch tiene una nomemclatura especial para leer el error de tiempo de ejecucion
         * el cerr imprime que fue el error, o sea el mensaje de arriba del throw
         */
        cerr << e.what() << endl;
    }

    return 0;
 }