#include "MotoCoche.hpp"

MotoCoche::MotoCoche(int velocidad, int numPuertas, bool tieneCasco) : Coche(velocidad, numPuertas), Moto(velocidad, tieneCasco){
    cout << "Instanciadno un MotoCoche" << endl;
}