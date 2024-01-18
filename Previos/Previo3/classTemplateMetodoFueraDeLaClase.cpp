/**
 * @file classTemplateMetodoFueraDeLaClase.cpp
 * @author Jesy Rivera
 * @brief ejemplo de Class Template que crea una unica clase que puede trabajar distintos tipos de datos y el metodo se define afuera de ella
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

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

        T getNum(); //funcion protoripo
};

template <class T>
T Number<T>::getNum(){
    /**
     * @brief Metodo que el tipo de dato es T, se define el metodo fuera de la clase
     * devuelve num
     */
    return num;
}

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