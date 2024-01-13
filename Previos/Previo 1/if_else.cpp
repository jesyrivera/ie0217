#include <stdio.h>

int main () {
    int number = -2; //se declara una variable que inicia en -2
    if (number > 0){//verifica si el valor de la variable es mayor a 0
        return 0;//si la condicion del if es verdadera, se continua al return 0
                //entonces el programa termina
    }
    else { //si la condicion if es falsa se ejecuta el else
        return -1; //devuelve -1
    }
}