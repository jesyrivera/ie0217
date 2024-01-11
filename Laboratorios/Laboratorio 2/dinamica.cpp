#include <iostream>
using namespace std;

int variableGlobal = 10;

void funcionGlobal(){
    //data
    static int variableLocalEstatica = 5;

    //stack guarda variables locales
    int variableLocal=20;

    //imprime el valor de las variables
    cout << "Variable global: " << variableGlobal << endl;
    cout << "Variable local estatica: " << variableLocalEstatica << endl;
    cout << "Variable local: " << variableLocal << endl;
}

int main() {
    int variableLocalMain = 15; //no se necesita liberar memoria

    funcionGlobal();

    cout << "Variable local en main: " << variableLocalMain << endl;
    
    //heap
    int *variableDinamica = new int;
    *variableDinamica = 25;

    cout << "Variable dinamica: " << *variableDinamica << endl;

    delete variableDinamica; //se libera la memoria


    return 0;
}