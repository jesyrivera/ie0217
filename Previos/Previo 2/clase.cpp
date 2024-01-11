#include <iostream>
using namespace std;

class Molde { //se define la clase llamada Molde
    public: //nivel de acceso de los miembros de la clase, son accesibles desde fuera de la clase
    //se declaran los atributos
        double largo;
        double ancho;
        double alto;

    Molde() {//tiene el mismo nombre que la clase, es el constructor de la clase, es una funcion que se va a ejecutar cuando instanciemos esta clase
        cout << "Instanciando Molde" << endl; //imprime el mensaje
        //se le asigna un valor a los atributos
        largo = 15;
        ancho = 12;
        alto = 21;
    }
};

int main() {
    Molde pared; //se ejecuta el constructor de primero, es el iniciador
    
    //pared.largo -> nombre de la instancia.nombre del atributo 
    cout << pared.largo << endl; //se imprime el valor inicial del miembro 'largo' de la clase
    pared.largo = 20.0; //se modifica el valor del miembro largo de la clase
    
    cout << pared.largo << endl; //se imprime el nuevo valor del miembro 'largo'
    pared.ancho = 13.2;//se accede al miembro ancho de la clase, nombre de la instancia.nombre del atributo 
    pared.alto = 23.4; //se accede al miembro alto de la clase, nombre de la instancia.nombre del atributo 

    return 0;
}