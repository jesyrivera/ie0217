#include <iostream>
using namespace std;

int globalVariable = 42; //se define una variable global con valor 42

int main () {
    int stackVariable = 10; //se declara la variable y se inicia con un valor 10

    int* heapVariable = new int(20); //reserva la memoria en el heap y le asigna el valor 20 a la variable
                                    //apunta a la memoria

    //imprime el valor de la variable global y el valor de las otras dos variables
    cout << "Valor de globalVariable: " << globalVariable << endl;
    cout << "Valor de stackVariable: " << stackVariable << endl;
    cout << "Valor de heapVariable: " << heapVariable << endl;

    delete heapVariable; //libera la memoria que se le asigno a la variable

    return 0;
}