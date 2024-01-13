#include <iostream>
using namespace std;

#define BOOK_ID_MAX 10 //se define la variable con un valor de 10

enum { //se declara una enum
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX
} casas_t; //se crea una variable que puede almacenar los valores

int main () {
    //imprime el mensaje y los valores
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

    cout << "La cantidad de casas en el condominio es: " << CASA_MAX << endl;

    return 0;
}