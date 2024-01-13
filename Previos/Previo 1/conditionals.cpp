#include <iostream>

int main () {
    int num; //declara la variable sum

    std::cout << "Enter an integer: "; //imprime el mensaje
    std::cin >> num; //se guarda el numero que ingrese la pesona en la variable

    if (num != 0) { //se inicia la condicion de que el numero sea diferente a 0

        if (num > 0) { //condicion de si el numero es mayor a o
            std::cout << "The number is positive." << std::endl; //se imprime el mensaje
        }
        else { //condicion en caso de que no lo sea
            std::cout << "The number is negative." << std::endl; //se imprime el mensaje
        }
    }
    else { //si no se cumple la condicion de que sea diferente a cero no se cumpla
        std::cout << "The number is 0 and it is neither positive nor negative." << std::endl; //se imprime el mensaje
    }

    std::cout << "This line is always printed." << std::endl; //se imprime le mensaje sin importar cual condicion se de

    return 0;
}