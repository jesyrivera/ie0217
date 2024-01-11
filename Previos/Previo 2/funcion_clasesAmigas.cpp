#include <iostream>
using namespace std;

class Distance { //define la clase Distance
    private: //los miembros son accesibles solo desde adentro de la clase
        int meter;

        friend int addFive(Distance); //permite a la funcion addFive que pueda acceder a los miembros privados

    public: //los miembros son accesibles desde afuera de la clase
        Distance() : meter(0){} //constructor de la clase que inicia con el atributo con el valor 0
};

int addFive(Distance d){ //toma un objeto de la clase como parametro
    d.meter += 5; //le suma 5 al atributo
    return d.meter; //devuelve el resultado
}

int main() {
    Distance D; //crea un objeto llamado D de la clase
    cout << "Distance: " << addFive(D); //imprime la distancia luego de realizar la funcion
    return 0;
}