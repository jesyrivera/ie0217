/**
 * @file functionTemplate.cpp
 * @author jesyrivera 
 * @brief ejemplo de funcion Template que puede trabajar con diferentes tipos de datos y estructuras de datos
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

/**
 * @brief funcion que toma dos parametros, suma dos valores del mismo tipo
 * @tparam T 
 * @param num1 es el primer numero que se va a sumar
 * @param num2 es el segundo numero que se va a sumar
 * @return devuelve el resultado de la suma
 */
template<typename T> T add (T num1, T num2) {
    return (num1 + num2)
}

int main(){
    int result1; /**<se declara una variable que guarda el valor de la suma tipo entero*/
    double result2; /**<se declara una variable que guarda el valor de la suma tipo double*/

    result1 = add<int>(2, 3); /**<Llama a la funcion add para que sume dos enteros*/
    cout << result1 << endl; //imprime el resultado

    result2 = add<double>(2.2, 3.3);/**<Llama a la funcion add para que sume dos double*/
    cout << result2 << endl; //imprime el resultado de la suma

    return 0;
}