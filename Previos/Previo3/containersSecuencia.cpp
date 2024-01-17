/**
 * @file containersSecuencia.cpp
 * @author jesyrivera (you@domain.com)
 * @brief archivo contiene ejemplo de codigo de Contenedores en Secuencia
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    /** 
     * vector <tipo> nombre
    */
    vector <int> numbers = {1, 100, 10, 70, 100}; /**<Declara un vector*/
    /** 
     * Imprime el mensaje
     * */
    cout << "Numbers are: ";
    for(auto &num: numbers){ /**<Bucle para iterar entre cada elemento del vector*/
        /**
         * @brief Imprime cada elemento del vector exactamente como 
         * se declaro arriba
         */
        cout << num << ", "; 
    }
    /**
     * @brief Se imprimen todos los elementos del vector en el orden que esta en 
     * el vector y devulve 0 para inicar que ya finalizo
     */
    return 0;
}