#include <iostream>
using namespace std;

int main (){
    int var = 5;//se declara una variable que inicia en 5

    int* pointVar; //se declara un puntero

    pointVar = &var; //se asigna la direccion de memoria de la variable var al puntero

    //se imprime el mensaje y el valor de la variable
    cout << "var = " << var << endl;

    //se imprime el mensaje y la direccion de memoria de la variable
    cout << "Address of var (&var) = " << &var << endl;

    //se imprime el mensaje y el valor almacenado en el puntero que es la direccion de memoria de var
    cout << "pointVar = " << pointVar << endl;

    //imprime el contenido del int puntero, o sea el 5
    cout << "Content of de address pointed to by pointVar (*pointVar) = " << *pointVar << endl; 

    return 0;
}