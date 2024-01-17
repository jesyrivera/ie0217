/**
 * @file containersAsociativoDesordenado.cpp
 * @author jesyrivera (you@domain.com)
 * @brief archivo contiene ejemplo de Contenedor Asociativo Desordenado
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    /** 
     * unordered_set <tipo> nombre
    */
    unordered_set <int> numbers = {1, 100, 10, 70, 100}; /**<Declara un set desordenado*/
    /** 
     * Imprime el mensaje
     * */
    cout << "Numbers are: ";
    for (auto &num: numbers) {/**<Bucle para iterar entre cada elemento del set desordenado*/
        /**
         * @brief Imprime cada elemento del set en desorden, no los ordena
         * ni tampoco sigue el orden de arriba, no repite ningun numero si un
         * elemento se repite solo se imprime una vez, separados por una coma y un espacio
         */
        cout << num << ", ";
    }
    return 0;
}