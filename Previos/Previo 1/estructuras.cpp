#include <iostream>
using namespace std;

struct Person { //se define una estructura
    char name[50]; //arreglo que almacena nombres
    int age;
    float salary;
};

int main() {
    Person p1; //se declara una variable p1 de la estructura

    cout << "Enter Full name: "; //se imprime el mensaje
    cin.get(p1.name, 50); //se le pide a la pesona que escriba un nombre y se guarda en el miembro name de la estructura
    cout << "Enter age: "; //se imprime el mensaje
    cin >> p1.age; //pide la edad y se guarda en el miembro age de la estructura
    cout << "Enter salary: ";//se imprime el mensaje
    cin >> p1.salary;//pide el salario y se guarda en el miembro salary de la estructura

    cout << "\nDisplayin information." << endl;//imprime el mensaje
    cout << "Name: " << p1.age << endl; //imprime el mensaje y el nombre ingresado
    cout << "Age: " << p1.age << endl; //imprime el mensaje y el valor
    cout << "Salary: " << p1.salary; //imprime el mensaje y el valor

    return 0;
}