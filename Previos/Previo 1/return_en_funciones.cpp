#include <iostream>
using namespace std;

int add (int a, int b) { //se define la funcion que toma dos parametros
    return ( a + b);//devuelve la suma de los parametros
}

int main () {
    int sum; //se declara una variable para almacenar el resultado

    sum = add(100, 78); //se llama la funcion con loa argumentos y se le asigna el valor a la variable sum

    cout << "100 + 78 = " << sum << endl; //se imprime el resultado
    
    return 0;
}