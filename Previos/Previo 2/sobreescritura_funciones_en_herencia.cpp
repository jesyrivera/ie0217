#include <iostream>
using namespace std;

class Base { //se define la clase
    public: //los miembros son accesibles desde afuera de la clase
        void print() {
            cout << "Base Function" << endl; //se imprime el mensaje
        }
};

class Derived : public Base { //se define la clase Derived que hereda publicamente la clase Base
    public: //los miembros son accesibles desde afuera de la clase
        void print() {
            cout << "Derived Function" << endl; //se imprime el mensaje
        }
};

int main() {
    //se crean dos objetos de la clase Derived
    Derived derived1, derived2;
    derived1.print(); //se imprime el mensaje

    derived2.Base::print();//imprime el mensaje de la clase Base

    return 0;
}