//conversion de un tipo a otro
#include <iostream>
using namespace std;

int main () {
    int num_int = 9; //se declara la variable e inicia en 9

    double num_double; //se declara la variable

    //se hace la conversion de int a double
    num_double = num_int; //al num_double le asigno el valor que tenia el num_int

    cout << "num_int = " << num_int << endl; //se imprime el mensaje y el valor
    cout << "num_double = " << num_double << endl; //se imprime el mensaje y el valor
}