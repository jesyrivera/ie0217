#include <iostream>
using namespace std;

int main () {

    int num_array[] = {1,2,3,4,5,6,7,8,9,10}; //se declara e inicia un arreglo con esos valores

    for (int n : num_array) { //inicia un ciclo que repite sobre cada elemento del arreglo
        cout << n << " "; //imprime el valor de n
    }
    
    return 0;
}