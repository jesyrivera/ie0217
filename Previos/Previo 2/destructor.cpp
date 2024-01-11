#include <iostream>
#include <fstream>
using namespace std;

class Archivo { //se define la clase archivo
    private: //los miembros son accesibles solo desde adentro de la clase 
        fstream archivo;
    
    public: //los miembros son accesibles desde afuera de la clase
        Archivo(string nombre_archivo){ //se define el constructor de la clase archivo, 
                                        //recibe de parametro el nombre de un archivo
            archivo.open(nombre_archivo, ios::in | ios::out | ios::app); //abre el archivo
            if (!archivo.is_open()) { //si no se pudo abrir imprime el mensaje de abajo
                cout << "No se pudo abrir el archivo " << nombre_archivo << endl;
            }
        }

        ~Archivo() { //cierra el archivo al finalizar
            if (archivo.is_open()) {
                archivo.close();
            }
        }
};

int main() {
    Archivo mi_archivo("datos.txt"); //crea un objeto de la clase y le suministra el nombre del archivo

    cout << "Ejecucion terminada" << endl; //imprime el mensaje

    return 0;
}