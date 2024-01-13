#include <iostream>
using namespace std;

int g; //se declara una variable global

int main ( ){
    //se declaran dos variables locales
    int a, b;

    //se le asignan valores a las variables locales
    a = 10;
    b = 20;
    g = a + b; //el valor de la suma de las variables locales se le asigna a g

    cout << g; //se imprime el valor de la variable global g

    return 0;

}