#include <iostream>
using namespace std;

void swap(int *a, int *b) { //la funcion intercambia los valores de dos variables usando punteros
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int array[], int size){ //funcion que imprime los elementos de un arreglo
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertionSort(int array[], int size) { //funcion que ordena un arreglo usando insercion para ordenarlo
    for (int step = 1; step < size; step ++) {
        int key = array[step];
        int j = step - 1;
        
        while(key < array[j] && j >= 0){
            array[j +1] = array[j];
            --j;
        }

        array[j + 1] = key;
    }
}

int main() {
    int data[] = {9, 5, 1, 4, 3}; //inicia un arreglo
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size); //ordena el arreglo
    cout << "Sorted array in Acsending Order:\n"; //imprime el mensaje
    printArray(data, size); //imprime el arreglo ordenado
}