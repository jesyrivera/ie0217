#include <iostream>
using namespace std;

class Animal { //define la clase animal
    public: //los miembros son accesibles desde afuera de la clase
        void info() { //se declara la funcion
            cout << "I am an animal" << endl; //imprime el mensaje
            }
};

class Dog : public Animal { //se define la clase Dog que hereda publicamente la clase Animal
    public: //los miembros son accesibles desde afuera de la clase
         void bark() { //se declara la funcion
            cout << "I am a Dog. Woof woof" << endl; //imprime el mensaje
            }
};

class Cat : public Animal { //se define la clase Cat que hereda publicamente la clase Animal
    public: //los miembros son accesibles desde afuera de la clase
         void meow() {  //se declara la funcion
            cout << "I am a Cat. Meow" << endl; //imprime el mensaje
            }
};

int main () {
    Dog dog1; //crea un objeto dog1 de la clase Dog
    cout << "Dog Class: " << endl; //imprime el mensaje
    dog1.info(); //llama la funcion
    dog1.bark(); //llama la funcion

    Cat cat1; //crea un objeto cat1 de la clase Cat
    cout << "\nCat Class: " << endl; //imprime el mensaje
    cat1.info(); //llama la funcion
    cat1.meow();//llama la funcion

    return 0;
}