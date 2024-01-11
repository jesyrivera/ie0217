#include <iostream>
using namespace std;

class Base{ //se define la clase Base
    public: //los miembros son accesibles desde afuera de la clase
        virtual void print() { //declara la funcion virtual print
            cout << "Clase Base virtual" << endl; //imprime el mensaje
        }
};

class Derived : public Base { //define la clase Derived que hereda publicamente la clase Base
    public://los miembros son accesibles desde afuera de la clase
        void print() { //se aplica la funcion
            cout << "Clase Derivada" << endl; //imprime el mensaje
        }
};

int main() {
    Derived derived1; //crea un objeto de la clase derivada Derived
    Base* base1 = &derived1; //crea un puntero a la clase B que apunta a un oobjeto de la clase derivada

    base1->print(); //utilizando el puntero a la base Base llama la funcion, se implementa la clase derivada

    return 0;
}