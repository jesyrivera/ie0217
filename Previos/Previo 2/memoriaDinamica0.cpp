#include <iostream>
using namespace std;

int main() {
    int* pointInt; //se declara un puntero

    float* pointFloat; //se declara un puntero

    pointInt = new int; //reserva memoria para un entero 
                        //y le asigna la direccion de memoria al puntero
    pointFloat = new float;//reserva memoria para un float 
                        //y le asigna la direccion de memoria al puntero

    *pointInt = 45; //le asigna el valor 45 al puntero
    *pointFloat = 45.45f; //le asigna un valor al puntero

    cout << *pointInt << endl; //imprime el valor del puntero
    cout << *pointFloat << endl; //imprime el valor del puntero

    delete pointInt; //libera la memoria asignada al puntero
    delete pointFloat; //libera la memoria asignada al puntero

    return 0;
}