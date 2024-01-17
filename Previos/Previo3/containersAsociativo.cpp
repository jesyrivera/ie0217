/**
 * @file containersAsociativo.cpp
 * @author jesyrivera (you@domain.com)
 * @brief archivo contiene ejemplo de Contenedor Asociativo
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <set>
using namespace std;

int main() {
    /** 
     * set <tipo> nombre
    */
    set<int> numbers = {1, 100, 10, 70, 100}; /**<Declara un set*/
    /** 
     * Imprime el mensaje
     * */
    cout << "Numbers are: ";
    for (auto &num: numbers) {/**<Bucle para iterar entre cada elemento del set*/
        /**
         * @brief Imprime cada elemento del set en orden ascendente
         * sin repetir ningun elemento, si alguno se repite entonces
         * solo se impirme una vez, separados por una coma y un espacio
         */
        cout << num << ", ";
    }
    return 0;
}