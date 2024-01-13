#include <iostream>
using namespace std;
//el prototipo de funciones permite que el programa conozca la funcion antes de ejecutarla
//el programa va a saber el nombre de la funcion
int add(int, int); //prototipo de una funcion que toma dos parametros

int main() {
    int sum; //se declara la variaable

    sum = add(100, 78); //se llama la funcion add(prototipo) con los argumentos y esto se le asigna a la variable sum
    cout << "100 + 78 = " << sum << endl; //se imprime el mensaje y el resultado

    return 0;
}

int add(int a, int b) { //se define la funcion
    return (a + b);
}