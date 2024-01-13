#include <iostream>
using namespace std;

//se declara un enum, los elementos tienen valores asignados
enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};

int main () {
    seasons s; //se declara una variable s del tipo seasons

    s = summer;//se asifna el valor de summer a s

    cout << "Summer = " << 6 << endl; //se imprime el mensaje y el numero 6 

    return 0;
}