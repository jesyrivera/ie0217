#include <iostream>

int count; //se declara una variable global
extern void write_extern(); //la funcion declarada se encuentra en un archivo externo

main() {
    count = 5; //se le da un valor 5 a la variable global
    write_extern(); //llama a la funcion
}