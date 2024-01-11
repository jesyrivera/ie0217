#include <iostream>
using namespace std;

class A { //define la funcion
    public: //los miembros son accesibles desde afuera de la clase
        void display() { //llama la funcion
            cout << "Base class content"; //imprime el mensaje
        }
};

class B : public A {}; //la clase B hereda publicamente la clase A

class C : public B{}; //la clase C hereda publicamente la clase B

int main() {
    C obj; //crea un objeto llamado obj de la clase C
    obj.display(); //llama la funcion
    return 0;
}