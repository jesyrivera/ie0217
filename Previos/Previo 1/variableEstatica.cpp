#include <iostream>
using namespace std;

void test() { //se declara la funcion test
    static int var = 0; //se declara una variable estatica e inicia en 0
    ++var; //aumenta el valor de la variable

    cout << var << endl; //imprime el valor de la variable
}

int main() {
    test();//se llama la funcion
    test();

    return 0;
}