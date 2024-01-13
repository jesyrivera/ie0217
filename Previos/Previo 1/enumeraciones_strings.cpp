#include <iostream>
using namespace std;

//se define la enumeracion llamada week
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
//cada dia se asocia con un numero y empieza desde el numero 0, entonces llega al 6

int main () {
    week today; //se declara una variable today de la enumeracion week
    today = Wednesday; //la variable today recibe el valor de Wednesday, o sea el tercer dia, numero 2
    cout << "Day " << today+1; //se imprime el mensaje, el dia actual = 1, o sea el numero 3
    return 0;
}