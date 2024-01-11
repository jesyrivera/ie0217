#include <iostream>
using namespace std;

class Base {//se define la clase Base
    public: //los miembros son accesibles desde afuera de la clase
        void print () {
            cout << "Base Function" << endl;//se imprime el mensaje
        }
};

class Derived : public Base { //se define la clase Derived que hereda publicamente la clase Base
    public: //los miembros son accesibles desde afuera de la clase
        void print () {
            cout << "Derived Function" << endl; //se imprime el mensaje
        }
};

int main() {
    Derived derived1; //se crea un objeto derived1 de la clase
    derived1.print(); //se llama a print()

    return 0;
}