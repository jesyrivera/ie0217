/**
 * @file classTemplateMultiplesParametros.cpp
 * @author Jesy Rivera
 * @brief ejemplo de Class Template que crea una unica clase que puede trabajar distintos tipos de datos que recibe multiples parametros
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
using namespace std;
/**
 * @brief tenemos un template con tres tipos de datos distintos
 * si no especifica el V, va a tomar un char de manera generica
 * @tparam T 
 * @tparam U 
 * @tparam V 
 */
template <class T, class U, class V = char>
class ClassTemplate {
    private: /**<Especifica que el acceso es de tipo privado (se accede solo adentro)*/
        /**
         * @brief definimos tres variables del tipo T, U y V
         */
        T var1;
        U var2;
        V var3;
    
    public: /**<Especifica que el acceso es tipo publico (se accede desde cualquier parte)*/
        /**
         * @brief Constructor que recibe un argumento del tipo T, del tipo U y del tipo V
         *  lo que hace es caerle encima a cada una de las variables privadas con los valores
         *  que me envian cuando instancia esta clase
         */
        ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}

        void printVar(){
            /**
             * @brief es un metodo de manera publica
             * lo que hace es imprimir el valor de cada variable
             */
            cout << "var1 = " << var1 << endl;
            cout << "var2 = " << var2 << endl;
            cout << "var3 = " << var3 << endl;
        }
};

int main() {
    /**
     * @brief tenemos el ClassTemplate que habiamos definido, se le esta pasando T y U, como no 
     * se le esta pasando V entonces utiliza char por defecto, cuando instacio el objeto, le paso un char
     * imprime el mensaje, luego invoca el metodo printVar
     */
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    /**
     * @brief tenemos el ClassTemplate que habiamos definido, se le esta pasando T , U y V 
     * luego le paso los elementos
     * imprime el mensaje, luego invoca el metodo printVar
     */
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;
}