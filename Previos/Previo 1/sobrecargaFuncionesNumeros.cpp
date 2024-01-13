//se definen varias funciones con el mismo nombre pero con diferentes parametros
//las funciones hacen lo mismo pero con diferentes tipos de parametros


#include <iostream>
using namespace std;


void display(int var1, double var2) {//se define la funcion que toma dos parametros
    cout << "Integer number: " << var1; //se imprime el mensaje y el numero
    cout << " and double number: " << var2 << endl; //se imprime el mensaje y el numero
}

void display(double var) { //se define la misma funcion que toma un parametro
    cout << "Double number: " << var << endl; //se imprime el mensaje y el numero
}

void display(int var) {//se define la misma funcion que toma un parametro
    cout << "Integer number: " << var << endl; //imprime el mensaje y el numero
}

int main() {
    int a = 5;//se declara la variable
    double b = 5.5;//se declara la variable

    display(a); //se llama la funcion con el argumento a

    display(b); //se llama la funcion con el argumento b

    display(a, b); //se llama la funcion con los argumentos

    return 0;
}