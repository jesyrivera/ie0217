#include <iostream>
using namespace std;

class Student { //se define la clase
    public: //los miembros son accesibles desde afuera de la clase
        double marks1, marks2;
};

Student createStudent() { //se define la funcion
    Student student; //crea un objeto de la clase
    //se establecen valores
    student.marks1 = 96.5;
    student.marks2 = 75.0;

    //se imprimen los valores
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks1 << endl;

    return student; //devuelve el objeto
}

int main() {
    Student student1; //se crea el objeto

    student1 = createStudent(); //llama la funcion

    return 0;
}