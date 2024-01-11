#include <iostream>
using namespace std;

class Molde { //se define la clase llamada Molde
    public: //nivel de acceso de los miembros de la clase, son accesibles desde fuera de la clase
        //se declaran los atributos
        double largo;
        double ancho;
        double alto;
        
        //tiene el mismo nombre que la clase, es el constructor de la clase, es una funcion que se va a ejecutar cuando instanciemos esta clase
        Molde(double largo_p, double ancho_p, double alto_p) : largo(largo_p), ancho(ancho_p), alto(alto) {}

    //las clases pueden tener funciones que se llaman metodo
    double calcularArea(){ //calcula el area
        return largo * ancho; //devuelve el resultado
    }

    double calcularVolumen() { //calcula el volumen
        return largo * ancho * alto; //devuelve el resultado
    }
};

int main () {
    Molde pared(10.0, 20.0, 35.0); //se crea un objeto pared de la clase Molde y esos son los argumentos del constructor

    cout << "El area es: " << pared.calcularArea() << endl; //imprime el area
    cout << "El volumen es: " << pared.calcularVolumen() << endl; //imprime el volumen
    
    return 0;
}