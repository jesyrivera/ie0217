/**
 * @file iteradoresBidireccionales.cpp
 * @author jesyrivera (you@domain.com)
 * @brief ejemplo de iterador Bidireccional, puede iterar hacia adelante y hacia atras
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> nums {1, 2, 3, 4, 5}; /**<Definimos una lista que se llama nums tipo entero*/

    list<int>::iterator itr = nums.begin(); /**<definimos un iterador que va a apuntar al inicio de nums*/

    cout << "Moving forward: " << endl;
    /**
     * @brief Imprime el mensaje de que vamos a ir hacia adelante
     * mientras que el iterador sea diferente al final de nums
     * vamos a imprimir el contenido de nums, el iterador va a aumentar en 1
     */
    while (itr != nums.end()) {
        cout << *itr << ", ";
        itr++;
    }

    cout << endl << "Moving backward: " << endl;
    /**
     * @brief Imprime el mensaje de que nos vamos a mover hacia atras
     * mientras el iterador sea diferente de donde empieza y si no hemos llegado al final
     * entonces le restamos 1 al iterador, luego imprime los elementos
     */
    while (itr != nums.begin()){
        if (itr != nums.end()){
            cout << *itr << ", ";
        }
        itr--;
    }
    cout << *itr << endl;

    return 0;
}