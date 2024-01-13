#include <iostream>
using namespace std;

//el prototipo de funciones permite que el programa conozca la funcion antes de ejecutarla
//el programa va a saber el nombre de la funcion
void temp(int = 10, float = 8.8); //funcion prototipo que toma dos parametros con valores asignados

int main() {
    temp( 6, -2.3); //se llama a la funcion con argumentos definidos
    return 0;
}

void temp(int i, float f){ //se define la funcion (prototipo) llamada en el main
    //se imprime el mensaje y los valores de los parametros
    cout << "El numero entero es: " << i << endl; 
    cout << "El numero flotante es: " << f << endl;
}