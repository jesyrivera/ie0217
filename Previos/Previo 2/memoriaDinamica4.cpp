#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int *ptr;//se define el puntero
    ptr= (int *)calloc(5, sizeof(int));//con calloc se asigna memoria para 5 elementos
    if (!ptr) { //verifica que se le asignara la memoria
        cout << "Memory Allocation Failed"; //si no se asigno se imprime el mensaje
        exit(1);
    }
    cout << "Initializing values..." << endl; //imprime el mensaje
    for (int i = 0; i < 5; i++) { //se asigna valores a los elementos de la memoria asignada
        ptr[i] = i * 2 + 1;
    }
    cout << "Initialized values" << endl; //imprime el mensaje
    for (int i = 0; i < 5; i++) { //se usa el ciclo para imprimir los valores
        cout << *(ptr + i) << endl; //imprime el mensaje
    }
    free (ptr); //libera la memoria asignada apuntada por ptr
    return 0;
}