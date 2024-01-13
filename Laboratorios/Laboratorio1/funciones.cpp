#include "funciones.hpp"

void mostrarMenu(){
    cout << "\n--- Menu ---\n";
    cout << "1. Agregar empleados\n";
    cout << "2. Listar empleados\n";
    cout << "3. Eliminar empleados\n";
    cout << "4. Salir \n";
}

void procesarOpcion(Empleado empleados[], int& numEmpleados){
    int opcion;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion){
    case 1: //Agregar empleado
        agregarEmpleado(empleados, numEmpleados);
        break;
    case 2: //Lista empleados
        listarEmpleados(empleados, numEmpleados);
        break;
    case 3: //Eliminar empleado
        eliminarEmpleado(empleados, numEmpleados);
        break;
    case 4: //Salir
        cout << "Saliendo del programa....\n";
        exit(0);
    default:
    cout << "Opcion no valida. Intente de nuevo";
        break;
    }
}

void agregarEmpleado(Empleado empleados[], int& numEmpleados){
    if (numEmpleados < MAX_EMPLEADOS){
        Empleado nuevoEmpleado; //crea una nueva variable
        nuevoEmpleado.id = numEmpleados + 1;

        cout << "Ingrese el nombre del empleado: ";
        cin >> nuevoEmpleado.nombre;

        cout << "Ingrese el salario del empleado: ";
        cin >> nuevoEmpleado.salario;

        empleados[numEmpleados++] = nuevoEmpleado; //nuevoEmpleado se guarda en el arreglo, ++ para aumentarlo en 1
        cout << "Empleado agregado con exito\n";
    }
    else{
        cout << "No se puede agregar mas, limite alcanzado.\n";
    }
}

void listarEmpleados(const Empleado empleados[], int& numEmpleados) {
    cout << "--- Lista de empleados ---\n";

    for (int i = 0; i < numEmpleados; ++i){
        cout << "ID: " << empleados[i].id << ", Nombre: " << empleados[i].nombre << ", Salario: " << empleados[i].salario << "\n";
    }
}

void eliminarEmpleado(Empleado empleados[], int& numEmpleados){
    int idEliminar;

    cout << "Ingrese el ID a eliminar: ";
    cin >> idEliminar;

    for (int i = 0; i < numEmpleados; ++i){
        if (empleados[i].id == idEliminar){
            for (int j = i; j < numEmpleados-1; ++j){
                empleados[j] = empleados[j+1];
            }
            --numEmpleados;
            cout << "Empleado eliminado con exito.\n";
            return;
        }
    }
}