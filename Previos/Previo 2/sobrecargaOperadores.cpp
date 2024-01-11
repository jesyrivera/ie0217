#include <iostream>
using namespace std;

class Fraccion { //se define la clase Fraccion
    int numerador, denominador;
    public: //los miembros son accesibles desde afuera de la clase
        Fraccion(int n, int d) : numerador(n), denominador(d) {} //se define el constructor

        //se sobrecarga el operador suma como metodo de la clase
        Fraccion operator+ (const Fraccion &f) {
            Fraccion resultado(//se hace una suma
                numerador * f.denominador + f.numerador * denominador,
                denominador * f.denominador
            );
            return resultado; //devuelve el resultado
        }

        void imprimir() {//imprime la fraccion
            cout << numerador << "/" << denominador << endl;
        }
};

int main () {
    //se crean dos objetos de la clase y se le dan valores iniciales
    Fraccion f1(1, 2);
    Fraccion f2(3, 4);

    Fraccion f3 = f1 + f2;

    f3.imprimir(); //se imprime el resultado de la suma

    return 0;
}