#include <iostream>
using namespace std;

enum suit{ //se declara una enumeracion con cuatro elementos que se le asignaron valores
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card; //variable toma valores de la enumeracion, se usa para almacenarlos

int main() {
    card = club; //se le asigna un valor de la enumeracion a la variable card
    cout << "Size of enum variable " << sizeof(card) << " bytes."; //imprime el mensaje y el tamano de la variable card en bytes
    return 0;
}