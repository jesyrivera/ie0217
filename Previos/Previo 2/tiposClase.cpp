#include <iostream>
using namespace std;

class Animal {//se define la clase Animal
    public: //los miembros son accesibles desde afuera de la clase
        void setEdad(int age) {
            edad = age;
        }
        int getEdad() {
            return edad;
        }
    
    protected:  //solo es accesible dento de la propia clase Animal
        string nombre;

    private: //los miembros son accesibles solo desde adentro de la clase 
        int edad;
};

class Perro : public Animal { //se define la clase Perro que hereda publicamente la clase Animal
    public: //los miembros son accesibles desde afuera de la clase
         void setNombre(string n) {
            nombre = n;
         }
        string getNombre() {
            return nombre;
        }
};

int main() {
    Perro miPerro; //se crea el objeto miPerro
    //se le establece valores
    miPerro.setNombre("Toby");
    miPerro.setEdad(3);

    cout << "Mi perro se llama " << miPerro.getNombre() << endl; //imprime el mensaje y el valor
    cout << "y tiene " << miPerro.getEdad() << "years" << endl; //imprime el mensaje y el valor

    return 0;
}
        