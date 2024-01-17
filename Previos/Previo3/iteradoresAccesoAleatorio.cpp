/**
 * @file iteradoresAccesoAleatorio.cpp
 * @author jesyrivera (you@domain.com)
 * @brief ejemplo de los iteradores de acceso aleatorio que tiene las propiedades de iteradores bidirecionales y acceso aleatorio
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
    vector<int> vec{1, 2, 3, 4}; /**<Se declara un vector del tipo entero*/

    vector<int>::iterator itr_first = vec.begin(); /**<Se crea un iterador que apunta al primer elemento del vector*/
    vector<int>:: iterator itr_last = vec.end() - 1; /**<crea un iterador que apunta al ultimo elemento - 1  del vector*/
    //el .end() apunta a un elemento despues del ultimo por eso se pone -1

    /**
     * @brief Imprime el primer elemento del vector
     * Imprime el segundo elemento
     * Imprime el segundo elemento desde el final
     * Imprime el ultimo elemento
     */
    cout << "First Element: " << *itr_first << endl;
    cout << "Second Element: " << itr_first[1] << endl;

    cout << "Second Last Element: " << *(itr_last - 1) << endl;
    cout << "Last Element: " << *(itr_last) << endl;

    return 0;
}
