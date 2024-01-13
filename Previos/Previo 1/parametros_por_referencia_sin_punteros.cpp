#include <iostream>
using namespace std;

void swap(int &n1, int &n2) {//se define una funcionque toma dos referencias
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    int a = 1, b = 2; //se declaran dos variables

    cout << "Before swapping" << endl; //imprime el mensaje
    //imprime los valores antes del intercambio
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b); //la funcion intercambia los valores de a y b

    cout << "\nAfter swapping" << endl; //imprime el mensaje
    cout << "a = " << a << endl; //imprime el valor despues del intercambio
    cout << "b = " << b << endl; //imprime el valor despues del intercambio

    return 0;
}