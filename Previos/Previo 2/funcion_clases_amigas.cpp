#include <iostream>
using namespace std;

class ClassB; //se declara la clase B anticipadamente

class ClassA{ //se define la clase A
    private: //los miembros son accesibles solo desde adentro de la clase
        int numA;
        friend class ClassB; //permite que la clase B acceda a los miembros privados de la claseA
    
    public: //los miembros son accesibles desde afuera de la clase
        ClassA() : numA(12){} //constructor de la claseA que inicia el atributo con el valor 12
};

class ClassB{ //se define la clase B
    private: //los miembros son accesibles solo desde adentro de la clase
        int numB;
    
    public: //los miembros son accesibles desde afuera de la clase
        ClassB() : numB(1){} //constructo de la claseB que inicia con el atributo con el valor 1
        int add() { //crea un objeto de la clase A y accede al atributo numA y lo suma al numB de la clase B
            ClassA objectA;
            return objectA.numA + numB;
        }
};

int main() {
    ClassB objectB; //crea el objeto de la clase B
    cout << "Sum: " << objectB.add(); //imprime la suma de los atributos utilizando add()
    return 0;
}