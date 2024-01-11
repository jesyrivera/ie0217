#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    float *ptr, *new_ptr; //se declaran dos punteros
    ptr = (float*) malloc(5 * sizeof(float)); //se usa malloc para asignar memoria para 5 elementos
                                            //y se le asigna la direccion a ptr
    if (ptr == NULL) { //se verifica si se asigno la memoria
        cout << "Memory Allocation Failed"; //imprime el mensaje
        exit(1);
    }

    for (int i = 0; i < 5; i++) { //se llena el bloque de memoria con los valores del ciclo
        ptr[i] = i * 1.5;
    }

    //se usa realloc para cambiar el tama;o del bloque de memoria apuntado por el apuntero
    new_ptr = (float*) realloc(ptr, 10 * sizeof(float)); //se le aumenta a 10 elementos, la direccion se asigna a new_ptr
    
    if (new_ptr == NULL) { //se verifica si el aumento de memoria ocurrio
        cout << "Memory Re-allocation Failed"; //imprime el mensaje
        exit(1);
    }

   for (int i = 5; i < 10; i++) { //se llenan los elementos con el aumento
        new_ptr[i] = i * 2.5;
    } 
    cout << "Printing Values"<< endl; //imprime cada elemento de la memmoria

    for (int i = 0; i < 10; i++) {
        cout << new_ptr[i] << endl; //se imprime cada elemento del bloque de memoria aumentado
    }
    free (new_ptr); //libera la memoria asignada

    return 0;
}