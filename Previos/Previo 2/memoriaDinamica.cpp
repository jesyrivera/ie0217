#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter total number of students: "; //imprime el mensaje
    cin >> num; //lee el valor que ingresa la persona y lo almacena en num
    float* ptr; //se declara un puntero a ptr

    ptr = new float[num]; //se reserva memoria para un arreglo de num
                        //se le asigna la direccion de memoria al puntero ptr

    cout << "Enter GPA of students" << endl; //imprime el mensaje 
    for (int i = 0; i < num; ++i) { //ciclo que recorre cada estudiante
        cout << "Student" << i + 1 << ": "; //imprime el mensaje
        cin >> *(ptr + i); //lee la nota que metio la persona y la guarda en el arreglo
    }

    cout << "\nDisplaying GPA of students"<< endl; //imprime el mensaje 
    for (int i = 0; i < num; ++i) { //ciclo que recorre cada estudiante
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl; //imprime el mensaje
    }

    delete[] ptr; //libera la memoria asignada al arreglo

    return 0;
}