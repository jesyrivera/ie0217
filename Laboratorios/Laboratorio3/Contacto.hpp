#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>

//se define la clase Contacto
template <typename T>
class Contacto {
    public:
        //constructor de la clase contacto
        Contacto(T nombre, T telefono, T email);
        // metodos de acceso de los atributos
        T getNombre() const;
        T getTelefono() const;
        T getEmail() const;

    private:
        //atributos
        T nombre;
        T telefono;
        T email;
};

#endif