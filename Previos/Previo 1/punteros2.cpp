#include <iostream>
using namespace std;

int main () {
    int var = 5; //se declara una variable que inicia en 5
    int* pointVar; //se declara un puntero

    pointVar = &var; //se asigna la direccion de memoria de var al puntero

    cout << "var = " << var << endl; //se imprime el valor de var

    cout << "*pointVar = " << *pointVar << endl << endl; //imprime el contenido de la variable
    
    cout << "Chaging value of var to 7: " << endl; //se imprime el mensaje

    var = 7; //se cambia el valor de la variable

    cout << "var = " << *pointVar << endl << endl; //imprime el contenido de la variable apuntada por el puntero
    
    cout << "Changing value of *pointVar to 16: " << endl;//imprime el mensaje

    *pointVar = 16; //se cambia el valor de la variable apuntada

    cout << "var = " << var << endl; //imprime el valor de la variable

    cout << "*pointVar = " << *pointVar << endl; //imprime el contenido de la variable apuntada por el puntero
    
    return 0;
}