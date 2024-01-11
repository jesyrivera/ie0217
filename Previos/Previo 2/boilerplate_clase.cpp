#include <iostream>
using namespace std;

class Molde { //se define la clase llamada Molde
public: //nivel de acceso de los miembros de la clase, son accesibles desde fuera de la clase
    //se declaran los atributos
    double largo;
    double ancho;
    double alto;

    // Constructor de la clase Molde, se ejecuta al instanciar un objeto de la clase
    Molde(){
        cout << "Esto se ejecuta en cada instanciación" << endl; //imprime el mensaje
        cout << "Iniciando un objeto de la clase Molde" << endl; //imprime el mensaje
    }

    // Método para calcular el área del molde
    double calcularArea() {
        return largo * ancho;
    }

    // Método para calcular el volumen del molde
    double calcularVolumen() {
        return largo * ancho * alto;
    }
};

int main() {
    // Instanciación de un objeto de la clase Molde llamado "pared"
    Molde pared;

    // Asignación de valores a las propiedades largo, ancho y alto de la pared
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.alto = 315.2;

    // Impresión del área y volumen calculados mediante los métodos de la clase Molde
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}
