#include <iostream>
using namespace std;

int main () {
    int i = 1; //variable inicia en 1

    do { //se ejecuta por primera vez
        cout << i << " "; //imprime el valor de i
        ++i; //el valor de i aumenta en 1
    }
    while (i <= 5); //se verifica que se cumpla que la condicion sea verdadera
                    // y se repite, si no es verdadera se sale

    return 0;
}