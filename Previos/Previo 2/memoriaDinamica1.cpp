#include <iostream>
using namespace std;

class Student {//se define la clase Student
    private: //los miembros son accesibles solo desde adentro de la clase 
        int age;
    
    public: //los miembros son accesibles desde afuera de la clase
        Student() : age(12) {} //constructor de la clase que inicia la variable en 12

    void getAge() {
        cout << "Age = " << endl; //imprime el mensaje
    }
};

int main() {
    Student* ptr = new Student(); //se crea un objeto ptr de la clase Student

    ptr->getAge(); //se llama a getAge del objeto apuntado por ptr

    delete ptr; //libera la memoria del puntero

    return 0;
}