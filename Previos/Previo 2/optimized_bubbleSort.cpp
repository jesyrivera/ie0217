#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) { //se define la funcion que aplica el ordenamiento bubble
    for (int step = 0; step < (size-1); ++step) { //el ciclo controla el recorrido sobre el arreglo
        int swapped = 0;
         for (int i = 0; i < (size-step-1); ++i){//el ciclo compara
                                                //intercambia si el elemento actual es mayor que el que sigue
            if (array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i = 1];
                array[i + 1] = temp;

                swapped = 1; //la variable se establece en 1 se se hace un swap
            }
         }
        if (swapped == 0) //si no se ha hecho ningun swap, el arreglo esta ordenado y se sale del ciclo
            break;
    }
}

void printArray(int array[], int size) { //se define la funcion para imprimir los valores de un arreglo
    for (int i = 0; i < size; ++i) {
        cout << " " << array[i];
    }
    cout << "\n";
}

int main() {
    int data[] = {-2, 45, 0, 11, -9}; //se declara un arreglo que inicia con esos valores

    int size = sizeof(data) / sizeof(data[0]); //obtiene el tama;o del arreglo con esa division

    bubbleSort(data, size); //ordena el arreglo

    cout << "Sorted Array in Ascending Order:\n"; //imprime el mensaje
    printArray(data, size); //imprime el arreglo ordenado
}