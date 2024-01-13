#include <iostream>

int main () {
    //se declaran las variables
    char oper;
    float num1, num2;

    std:: cout << "Enter an operator (+, -, *, /): "; //se imprime el mensaje
    std:: cin >> oper;//la persona ingresa un operador
    std:: cout << "Enter two numbers : " << std::endl; //se imprime el mensaje
    std:: cin >> num1 >> num2;//la persona ingresa dos numeros

    switch (oper) { //se usa switch para realizar las operaciones
        case '=': //si es suma entonces suma los dos numeros
            //imprime los dos numeros con el operador y el resultado
            std:: cout << num1 << " + " << num2 << " = " << num1 + num2;
            break; //rompe el ciclo
        
        case '-'://si es resta, resta los dos numeros
            //imprime los dos numeros con el operador y el resultado
            std:: cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;//rompe el ciclo

        case '*': //si es * multiplica los dos numeros
            //imprime los dos numeros con el operador y el resultado
            std:: cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;//cierra el ciclo

        case '/': //si es division, divide los dos numeros
            //imprime los dos numeros con el operador y el resultado
            std:: cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;//rompe el ciclo
        
        default: //se ejecuta cuando lo que ingresa la persona no coincide con los casos de arriba
            std::cout << "Error! The operator is not correct"; //se imprime el mensaje
            break;//se rompe el ciclo
    }

    return 0;

}