#include "Contacto.hpp"

//se define el constructor que recibe tres parametros
template <typename T>
Contacto<T>::Contacto(T nombre, T telefono, T email) : nombre(nombre), telefono(telefono), email(email){}
//atributo(argumento que recibe el constructor)

//obtiene el nombre del contacto
template <typename T>
T Contacto<T>::getNombre() const {
    return nombre;
}

//obtiene el numero
template <typename T>
T Contacto<T>::getTelefono() const {
    return telefono;
}

//obtiene el email
template <typename T>
T Contacto<T>::getEmail() const {
    return email;
}