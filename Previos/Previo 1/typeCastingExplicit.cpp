#include <iostream>
using namespace std;

int main () {
    double num_double = 3.56; //se declara la variable e inicia en 3.56
    cout << "num_double = " << num_double << endl; //se imprime el mensaje y el valor

    //se declaran la variable num_int1 y se hace la conversion de la variable num_double a int_ a int
    int num_int1 = (int)num_double; //le coloco en parentesis el tipo de dato al que lo quiero convertir
    cout << "num_int1 = " << num_int1 << endl; //se imprime el mensaje y el valor

    //se declara una variable num_int2 y se hace la conversion de num_double a int
    int num_int2 = int(num_double);
    cout << "num_int2 = " << num_int2 << endl; //se imprime el mensaje y el valor

    return 0;
}