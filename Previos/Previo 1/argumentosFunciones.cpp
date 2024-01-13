#include <iostream>
using namespace std;

int main (int argc, char* argv[]) { //recibe dos parametros
    //argc es el numero total de argumentos
    //argv es un arreglo de caracteres que contiene argumentos
    cout << "argc: " << argc << endl; //imprime el mensaje y el numero total de argumentos
    cout << "argv[0]: " << argv[0] << endl; //imprime el mensaje y el primer argumento
    cout << "argv[1]: " << argv[1] << endl; //imprime el mensaje y el segundo argumento
    cout << "argv[2]: " << argv[2] << endl; //imprime el mensaje y el tercer argumento
    cout << "argv[3]: " << argv[3] << endl; ///imprime el mensaje y el cuarto argumento

    return 0;
}