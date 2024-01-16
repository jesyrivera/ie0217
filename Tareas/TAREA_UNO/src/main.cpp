#include "funciones_juego.hpp" //incluye el archivo header donde se encuentran las funciones prototipo

int main(){

    while (1){///< Bucle while infinito
        mostrarMenu(); ///< llama a la función para que imprima las opciones del menu
        leerOpcion(); ///< llama a la función que solicita y procesa la opcion ingresada por el usuario 
    }
    return 0; ///< Devuelve cero para indicar que ya termino
}