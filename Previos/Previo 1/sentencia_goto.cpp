#include <iostream>
using namespace std;

int main() {
    //se declaran las variables
    float num, average, sum = 0.0;     
    int i, n;

    cout << "Maximum number of inputs: "; //imprime el mensaje
    cin >> n; //toma la entrada de la persona y almacena la variable n

    for (i = 1; i <= n; ++i){ //inicia el ciclo que le pide a la persona que ingrese n numeros
        cout << "Enter n" << i << ": ";
        cin >> num; //toma la entrada de la persona y almacena la variable num

        if (num < 0.0) {//si el numero es negarivo, se salta a jump y no se suma a sum
            goto jump;
        }
        sum =+num;
    }
jump:
    average = sum / (i -1); //se calcula el promedio
    cout << "\nAverage = " << average; //se imprime el promedio en la pantalla
    return 0;
}