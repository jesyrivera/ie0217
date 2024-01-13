#include <iostream>
#include "archivo_encabezado_declaracion.hpp" //llama al archivo
using namespace std;

int main () {
    //declara las variables
    int num1 = 5;
    int num2 = 3;
    int result = sum(num1, num2); //la variable es el resultado de la suma

    //imprime el mensaje, los valores y el resultado
    cout << "El resultado de la suma de " << num1 << " y " << num2 << " es " << result << endl;

    return 0;
}