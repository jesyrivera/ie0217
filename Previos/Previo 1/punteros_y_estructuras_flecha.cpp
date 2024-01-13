#include <iostream>
using namespace std;

struct Distance { //se define la estructura Distance que contiene dos miembros
    int feet;
    float inch;
};

int main () {
    Distance *ptr, d; //se declara un puntero ptr y una variable d

    ptr = &d; //se asigna la direccion de d al puntero ptr

    //imprime el mensaje
    //le pide a la persona ingresar informacion
    //utilizando el puntero ptr accede a la estructura
    cout << "Enter feet: ";
    cin >> ptr->feet;
    cout << "Enter inch: ";
    cin >> ptr->inch;

    cout << "displayinf information." << endl; //imprime el mensaje
    cout << "Distance = " << ptr->feet << " feet " << ptr->inch << "inches";
    //se imprime la informacion que ingreso la persona utilizando el puntero y los miembrso de la estructura
    
    return 0;
}