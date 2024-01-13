#include <iostream>
using namespace std;

void func1(int numVal) { //se define la funcion que toma un parametro
    cout << "Valor recibido: " << numVal << endl; //imprime el mensaje y el valor recibido
}

void func2(int &numRef){ //se define la funcion que toma un parametro por referncia
    cout << "Valor de referencia: " << numRef << endl; //imprime el mensaje y el valor de referencia
}

int main() {
    int num = 5; //se declara la variable que inicia en 5

    func1(num); //se llama la funcion parando la variable por valor
    func2(num); //se llama la funcion parando la variable por referencia

    return 0;
}