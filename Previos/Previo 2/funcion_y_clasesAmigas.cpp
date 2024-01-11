#include <iostream>
using namespace std;

class ClassB; //se declara de manera anticipada

class ClassA{ //se define la clase A
    public: //los miembros son accesibles desde afuera de la clase
        ClassA() : numA(12){} //constructor de la clase A que inicia el atributo con el valor 12
    
    private: //los miembros son accesibles solo desde adentro de la clase
        int numA;
        friend int add(ClassA, ClassB); //permite que la funcion acceda a los miembros privados de la clase A
};

class ClassB{ //se define la clase B
    public: //los miembros son accesibles desde afuera de la clase
        ClassB() : numB(1){} //constructor de la clase B que inicia el atributo con el numero 1
    
    private: //los miembros son accesibles solo desde adentro de la clase
        int numB;
        friend int add(ClassA, ClassB); //permite la funcion pueda acceder a los miembros privados de la clase B
};

int add(ClassA objectA, ClassB objectB){ //toma un objeto de la clase A y otro de la clase B como parametos
    return (objectA.numA + objectB.numB); //suma sus atributos
}

int main() {
    ClassA objectA; //crea un objeto de la clase A
    ClassB objectB; //crea un objeto de la clase B
    cout << "Sum: " << add(objectA, objectB); //imprime la suma de los atributos
    return 0;
}