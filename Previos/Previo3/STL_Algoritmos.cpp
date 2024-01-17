/**
 * @file STL_Algoritmos.cpp
 * @author jesyrivera (you@domain.com)
 * @brief ejemplo de algoritmos de la biblioteca STL
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/**
 * @brief funcion myfunction que toma dos parametros y los compara
 * @param i 
 * @param j 
 * @return true 
 * @return false 
 */
bool myfunction (int i, int j) { return (i<j); }

/**
 * @brief estructura que recibe dos elementos, los compara y luego devuelve
 * falso o verdadero
 */
struct myclass{
    bool operator() (int i, int j) {return (i<j); }
} myobject;

int main() {
    int myints[] = {32,71,12,45,26,80,53,33}; /**<Se crea un arreglo*/
    /**
     * @brief creo un vector del tipo entero empieza desde myints hasta myints+8
     */
    vector<int> myvector (myints, myints+8);

    /**
     * @brief se usa sort para ordenar el vector
     * ordena los primeros 4 elementos
     * ordena de los 4 elementos hasta el final usando la funcion
     * ordena desde el inicio hasta el final usando la estructura
     */
    sort (myvector.begin(), myvector.begin()+4);

    sort (myvector.begin()+4, myvector.end(), myfunction);

    sort (myvector.begin(), myvector.end(), myobject);

    /**
     * @brief se imprime el mensaje, el contenido del vector, con el bucle for
     * itera entre los elementos del vector, van a estar separados por un espacio
     */
    cout << "myvector contains: ";
    for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    return 0;
}