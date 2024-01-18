/**
 * @file excepciones.cpp
 * @author jesyrivera
 * @brief crea excepciones para eventos que ocurren durante la ejecucion
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

int main () {
    double numerator, denominator, divide; /**<Declara las variables del tipo double*/
    
    /**
     * @brief se imprime el mensaje donde se le solicita al usuario ingresar dos 
     * valores, usando cin los lee
     */
    cout << "Enter numerator: ";
    cin>> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try{ //try es el codigo que puede generar una excepcion
        if (denominator == 0)
            /**
             * @brief se verifica si el denominador es 0, si es asi entonces
             * lanza un cero
             */
            throw 0; //throw lanza una excepcion cuando se detecta un error (no es obligatorio)
        
        /**
         * @brief si la condicion del if no se cumple, sigue con la operacion y luego
         * imprime la informacion
         */
        divide = numerator / denominator;
        cout << numerator << " / " << " = " << divide << endl;
    }
    catch (int num_exception) { //catch es el codigo que maneja la excepcion lanzada por throw
        /**
         * @brief si la condicion de que el denominador sea igual a 0 se cumple, se viene al catch
         * imprime el mensaje error
         */
        cout << "Error: Cannot divide by " << num_exception << endl;
    }

    return 0;
}