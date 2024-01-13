#include <iostream>
using namespace std;

void swap(int* n1, int*n2) { //se define una funcion que toma intercambia los valores de dos punteros
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int a = 1, b = 2; //se declaran dos variables que inician en esos valores

    cout << "Before swapping" << endl; //imprime el mensaje
    
    //imprime el valor inicial y las direcciones de las variables
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;

    swap(&a, &b); //llama a la funcion e intercambia los valores de las variables

    cout << "\nAfter swapping" << endl; //imprime el mensaje
    //imprime las variables y el valor actual
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}