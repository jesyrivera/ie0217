/**
 * @file classTemplate.cpp
 * @author jesyrivera
 * @brief ejemplo de Class Template que crea una unica clase que puede trabajar distintos tipos de datos
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

template<class T>
class Number {
    private: /**<Especifica que el acceso es de tipo privado (se accede solo adentro)*/
        T num; /**<Atributo del tipo T*/

    public: /**<Especifica que el acceso es tipo publico (se accede desde cualquier parte)*/
        /**
         * @brief Constructor que recibe un argumento del tipo T que se llama n
         * lo que hace es internamente es asignarle el valor a num
         * @param n 
         */
        Number(T n) : num(n){}

        T getNum() {
            /**
             * @brief Metodo del tipo publico que el tipo de dato es T
             * devuelve num
             */
            return num
        }
};

int main () {
    /**
     * @brief crea dos objetos del tipo entero y doble, utiliza la clase Number
     * en ambas
     */
    Number<int> numberInt(7);
    Number<double> numberDouble(7.7);
    
    //imprime los datos
    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}