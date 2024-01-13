#include <iostream>
using namespace std;

int main () {
    float arr[3]; //se declara un arreglo de tama;o 3

    float *ptr; //se declara un puntero

    cout << "Displaying address using arrays: " << endl; //se imprime el mensaje

    //se empieza un ciclo para mostrar las direcciones de memoria de cada elemento del arrelgo
    for (int i = 0; i < 3; ++i){
        //imprime las direcciones de memoria de cada elemento del arreglo
        cout << "&arr[" << i << "] = " << endl; 
    }

    ptr = arr; //el puntero apunta al primer elemento del arreglo

    cout << "\nDisplaying address using pointers: " << endl; //imprime el mensaje

    for (int i = 0; i < 3; ++i){
        //imprime las direcciones de memoria a las que apunta el puntero cuando recorre el arreglo
        cout << "ptr + " << i << " = " << ptr + i << endl; 
    }
    return 0;
}