#include <iostream>

int main () {
    std::cout << "Hola Mundo, estudiantes de IE0217!\n"; //imprime el mensaje

    int var1 = 0; //se declara la variable que inicia en 0
    int var2; //se declara la variable

    var2 = (var1 ==3) ? 15 : 27; //si var es igual a 3 se le asigna de valor 15, si no lo es se le asigna el valor 27

    std::cout << "var2: \n"<< var2 << ""; //se imprime el mensaje y el valor de var2
    return 0;
}