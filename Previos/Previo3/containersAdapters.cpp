/**
 * @file containersAdapters.cpp
 * @author jesyrivera (you@domain.com)
 * @brief archivo contiene ejemplo de los adaptadores de contenedor
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <stack>
using namespace std;

int main() {
    /**
     * @brief La pila (stack) es un contenedor adaptado
     */
    stack <int> numbers; /**Declaramos una pila de la forma stack<type>name*/

    numbers.push(1); /**Le agregamos un 1*/
    numbers.push(100); /**Le agregamos un 100*/
    numbers.push(10); /**Le agregamos un 10*/
    /**
     * @brief El primero en salir es el 10, luego el 100 y de ultimo el 1
     * Se hace la impresion de los numeros
     */
    cout << "Numbers are: ";
    /**
     * @brief Siempre y cuando no este vacia se imprime los numeros, 10, 100, 1
     */
    while (!numbers.empty()) { 
        cout << numbers.top() << ", ";

        numbers.pop();
    }
    return 0;
}