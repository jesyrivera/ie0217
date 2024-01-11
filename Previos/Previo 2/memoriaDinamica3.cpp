#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    //se declara el puntero ptr y con malloc se le asigna memoria
    int* ptr = (int*) malloc(sizeof(int)); //la direccion es almacenada en ptr

    *ptr = 5; //se le asigna el valor 5 al puntero

    cout << *ptr;//se imprime el valor del puntero

    return 0;
}