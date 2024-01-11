#include <iostream>
using namespace std;

void swap(int *a, int *b) { //se define la funcion que intercambia los valores apuntados
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int array[], int size){ //se define la funcion que imprime los elementos de un arreglo
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int array[], int size) { //se define la funcion que aplica el ordenamiento por seleccion
    for (int step = 0; step < size - 1; step ++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}

int main() {
    int data[] = {20, 12, 10, 15, 2}; //se declara un arreglo
    int size = sizeof(data) / sizeof(data[0]); //se calcula el tama;o del arreglo
    selectionSort(data, size);//se llama a la funcion
    cout << "Sorted array in Acsending Order:\n"; //se imrpime el mensaje
    printArray(data, size);//se imprime el arreglo ordenado
}