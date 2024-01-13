//se definen varias funciones con el mismo nombre pero con diferentes parametros
//las dos funciones hacen lo mismo pero con diferentes tipos de parametros
#include <iostream>
using namespace std;

float absolute(float var) { //se define la funcion que toma un parametro
    if (var < 0.0) //si es menor que 0 se le asigna
        var = -var; //un numero negativo para que el resultado sea positivo 
    return var; //devuelve le valor absoluto
}

int absolute (int var) { //se define la funcion que toma un parametro
    if (var < 0) //si es menor que 0 se le asigna un numero negativo
        var = -var; //para que el resultado sea positivo
    return var; //devuelve el valor absoluto
}

int main () {
    //se imprime el mensaje y el valor absoluto
    cout << "Absolute value of -5 = " << absolute(-5) << endl;

    //se imprime el mensaje y el valor absoluto
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;
    
    return 0;
}