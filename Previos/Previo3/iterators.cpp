/**
 * @file iterators.cpp
 * @author jesyrivera (you@domain.com)
 * @brief este archivo contiene ejemplo de un iterador
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
    vector <string> languages = {"Python", "C++", "Java"}; /**Se declara un vector tipo string*/

    vector <string>::iterator itr; /**<Creamos un iterador itr a un vector tipo string*/
    /**
     * @brief Creamos un bucle para iterar entre los elementos, para empezar vamos a ir desde
     * un iterador hasta languages.begin(), siempre y cuando el iterador sea difetente a 
     * languages.end() voy a aumentar en uno
     */
    for (itr = languages.begin(); itr != languages.end(); itr++){
        cout << *itr << ", ";
        /**
         * @brief el *itr es un puntero a cada uno de los elementos del contenedor, nos va a dar
         * el contenido de cada elemento, entonces se imprime el elemento separado de una coma
         */
    }
    return 0;
}