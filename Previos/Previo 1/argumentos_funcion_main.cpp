#include <iostream>
using namespace std;

int main (int argc, char* argv[]) { //recibe dos argumentos
    //arg es el numero total de argumentos
    //argv es un arreglo de cadenas que contiene argumentos
    cout << "Numero de argumentos: " << argc << endl; //imprime el mensaje y el numero total de argumentos
    cout << "Nombre del programa: " << argv[0] << endl; //imprime el mensaje y el primer argumento

    if (argc > 1) { //verifica si hay argumentos mas de uno, si hay entonces continua
        cout << "Argumentos adicionales: " << endl; //imprime el mensaje
        for (int i = 1; i < argc; ++i) { //empieza el ciclo
            cout << "argv[" << i << "]: " << argv[i] << endl; //imprime cada argumento comenzando desde el segundo argumento hasta el ultimo
        }
    }
    return 0;
}