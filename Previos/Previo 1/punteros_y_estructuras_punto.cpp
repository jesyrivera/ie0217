#include <iostream>
using namespace std;

struct Distance { //se define una estructura Distance que contiene dos miembros
    int feet;
    float inch;
};

int main () {
    Distance *ptr, d; //se declara un puntero ptr a la estructura
    //primero va el tipo y es un puntero

    ptr = &d; //se crea una variable d, se asigna la direccion de memoria d al puntero ptr

    //imprime el mensaje
    //le pide a la persona ingresar informacion
    //utilizando el puntero ptr se accede a la estructura
    cout << "Enter feet: "; 
    cin >> (*ptr).feet; 
    cout << "Enter inch: ";
    cin >> (*ptr).inch;

    cout << "Displaying information." << endl; //imprime el mensaje
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";
    //imprime la informacion que ingreso la persona utilizando el puntero
    //ptr.miembro acceden a los miemtros de la estructura por medio del puntero

    return 0;

}