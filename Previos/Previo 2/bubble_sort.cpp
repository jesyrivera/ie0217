#include <iostream>
using namespace std;

//se define la funcion llamada bubbleSort, lo que hace es ordenar el bubble para ordenar un arreglo de enteros y es en orden ascendente
void bubbleSort(int array[], int size) {
    for (int step = 0; step < size; ++step) { //inicia un ciclo que recorre el arreglo
        for (int i = 0; i < size - step; ++i) {
            //verifica en el arreglo si el valor actual es mayor que el siguiente, si lo es entonces intercambia los valores
            if (array[i] > array [i + 1]){ 
                int temp = array [i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) { //esta funcion imprime los valores del arreglo
    for (int i = 0; i < size; ++i){
        cout << " " << array[i];
    }
    cout << "\n";
}

int main() {
    int data[] = {-2, 45, 0, 11, -9}; //inicia con un arreglo llamado data que tiene esos valores
    
    int size = sizeof(data) / sizeof(data[0]); //calcula el tama;o del arreglo

    bubbleSort(data, size); //se ordena el arreglo

    cout << "Sorted Array in Ascending Order:\n"; //se imprime el mensaje
    printArray(data, size); //se imprime los valores en orden del arreglo
}