/**
 * @file forwardIteradors.cpp
 * @author jesyrivera (you@domain.com)
 * @brief ejemplo de los forward iterators que pueden leer/escribir mientras iteran hacia adelante
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list <int> nums{1, 2, 3, 4}; /**<Se declara un forward list del tipo entero*/

    forward_list<int>::iterator itr = nums.begin(); /**<Se crea un iterador que empieza desde el inicio*/

    while (itr != nums.end()) {
        int original_value = *itr; /**se declara una varriable que guarda el valor actual al que apunta el iterador. */

        *itr = original_value * 2; /**<se multiplica por 2 el valor al que apunta el iterador y  le cae encima al valor que tenia el forward list. */

        itr++; /**<Aumentamos en 1 el iterador*/
    }
    for (int num: nums) {
        /**
         * @brief se imprime cada elemento del forward list despues del cambio, cada elemento
         * va separado por una coma
         */
        cout << num << ", ";
    }
    return 0;
}