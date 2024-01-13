#include <iostream>
using namespace std;

int factorial(int); //funcion prototipo
 
int main(){
    int n, result; //se declaran dos variables

    cout << "Enter a non-negative number: "; //se imprime el mensaje
    cin >> n;//se lee el numero que metio la persona y se guarda en la variable n

    result = factorial(n); //se llama a la funcion(prototipo) con el valor n como argumento
    //el resultado se almacena en la variable result
    cout << "Factorial of " << n << " = " << result; //se imprime el mensaje y el resultado
    return 0;
}

int factorial(int n) { //se define la funcion
    if (n > 1) { //condicion de que si es mayor a 1, calcula el factorial del numero
        return n * factorial(n - 1);
    }
    else { //si n es 1 o menor a 1 entonces devuelve 1
        return 1;
    }
}