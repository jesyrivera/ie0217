#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <iostream>
#include <list> //lista para guardar elementos
#include <algorithm>
#include <stdexcept>
#include "Contacto.hpp"
using namespace std;

//se declara la clase
template <typename T>
class Agenda{
    public:
        //metodo de funciones para agregar contacto, eliminarlo, buscarlo y mostrarlo
        void agregarContacto(const Contacto<T>& contacto);
        void eliminarContacto(const T& telefono);
        void mostrarContactos() const;
        std::list<Contacto<T>> Agenda<T>::buscarContactos(const std::string& patron) const;

    private:
        //almacena los contactos
        std::list<Contacto <T>> contactos; //contactos es el nombre del atributo de la clase
        
};

#endif