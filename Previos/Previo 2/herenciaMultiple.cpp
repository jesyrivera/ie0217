#include <iostream>
using namespace std;

class Mammal { //se define la clase Mammal
    public: //los miembros son accesibles desde afuera de la clase
        Mammal() { //constructor de la clase
            cout << "Mamals can give direct birth"<< endl; //imprime el mensaje
        }
};

class WingedAnimal { //se define la clase WingedAnimal
    public: //los miembros son accesibles desde afuera de la clase
        WingedAnimal() { //constructor de la clase
            cout << "Winged animal can flap" << endl; //se imprime el mensaje
            }
};

class Bat : public Mammal, public WingedAnimal{}; //la clase Bat hereda publicamente la clase Mammal y WingedAnimal

int main () {
    Bat b1; //crea objeto b1 de la clase Bat
    return 0;
}