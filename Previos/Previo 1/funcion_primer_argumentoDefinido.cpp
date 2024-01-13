#include <iostream>
using namespace std;

//el prototipo de funciones permite que el programa conozca la funcion antes de ejecutarla
//el programa va a saber el nombre de la funcion
void temp(int = 10, float = 8.8); //funcion prototipo que toma dos parametros

int main() {
    temp(6); //se llama a la funcion con un argumento, el otro argumento es el valor que se le asigno en el prototipo
    return 0;
}

void temp(int i, float f){ //se define la funcion prototipo que fue llamada en el main
    //imprime el mensaje y los valores de los parametros
    cout << "El numero entero es: " << i << endl; //va a imprimir el numero 6
    cout << "El numero flotante es: " << f << endl;
}