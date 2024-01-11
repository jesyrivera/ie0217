#include "Coche.hpp"
#include <iostream>
using namespace std;

Coche::Coche(int velocidad, int numPuertas) : Vehiculo(velocidad), numPuertas(numPuertas) {}

void Coche::abrirPuertas(){

    cout << "Abriendo las " << numPuertas << " puertas del coche" << endl;
}