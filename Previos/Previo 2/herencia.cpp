#include <iostream>
using namespace std;

class Animal { //se define la clase Animal
    public://los miembros son accesibles desde afuera de la clase
        void eat () { //declara la funcion
            cout << "I can eat!" << endl; //imprime un mensaje
        }

        void sleep() { //declara la funcion
            cout << "I can sleep!" << endl;//imprime el mensaje
        }
};

class Dog : public Animal { //se define la clase Dog que hereda publicamente la clase Animal
    public: //los miembros son accesibles desde afuera de la clase
        void bark() { //declara la funcion
            cout << "I can bark! Woof woof!!"  << endl; //imprime mensaje
        }
};

int main() {
    Dog dog1; //crea un objeto de la clase Dog

    dog1.eat(); //llama a la funcion
    dog1.sleep(); //llama a la funcion

    dog1.bark(); //llama a la funcion
    
    return 0;
}