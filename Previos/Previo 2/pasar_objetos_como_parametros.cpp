#include <iostream>
using namespace std;

class Student { //se define la clase Student
    public: //los miembros son accesibles desde afuera de la clase
        double marks; //calificaciones

        Student(double m) { //constructor de la clase que inicia las calificaciones
            marks = m;
        }
};

void calculateAverage (Student s1, Student s2) { //se declara la funcion que toma dos objetos de la clase
    double average = (s1.marks + s2.marks)/2; //calcula el promedio de las notas

    cout << "Average Marks = " << average << endl; //imprime el mensaje y nota
}

int main() {
    Student student1(88.0), student2(56.0); //se crean dos objetos de la clase con notas 

    calculateAverage(student1, student2); //llama la funcion

    return 0;
}