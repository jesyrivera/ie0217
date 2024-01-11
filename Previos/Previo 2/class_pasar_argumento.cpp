#include <iostream>
using namespace std;

class Molde { //se define la clase llamada Molde
    public: //nivel de acceso de los miembros de la clase, son accesibles desde fuera de la clase
        //se declaran los atributos
        double largo;
        double ancho;
        double alto;
        //se define el constructor de la clase, se inicia con los atributos y los valores proporcionados
        Molde(double largo_p, double ancho_p, double alto_p) : largo(largo_p), ancho(ancho_p), alto(alto) {}

};

int main () {
    Molde pared(10.0, 20.0, 35.0); //se crea un objeto pared de la clase Molde y esos son los argumentos del constructor

    cout << pared.largo << endl; //imprime el valor del atributo largo

    pared.largo = 20.0; //se le asigna un valor nuevo al atributo largo
    cout << pared.largo << endl; //imprime el nuevo valor del atributo largo
    pared.ancho = 13.2;//le da un valor al atributo
    pared.alto = 23.4;//le da un valor al atributo

    return 0;
}