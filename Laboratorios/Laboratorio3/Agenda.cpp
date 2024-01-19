#include "Agenda.hpp"

template <typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto){
    typename list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == contacto.getTelefono()) {
            throw invalid_argument("Ya existe un contacto con ese numero");
        }
    }
    // Se agrega el contacto
    contactos.push_back(contacto);
}

template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono){
    typename list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == telefono) {
            contactos.erase(it);
            return;
        }
    }
    throw out_of_range("No se encuentra un contacto con ese numero");
}

template<typename T>
void Agenda<T>::mostrarContactos() const{
    typename list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); ++it) {
        cout << "Nombre: " << it->getNombre()
             << " Telefono: " << it->getTelefono()
             << " Email: " << it->getEmail() << endl;
    }
}

template <typename T>
std::list<Contacto<T>> Agenda<T>::buscarContactos(const std::string& patron) const {
    std::list<Contacto<T>> resultados;

    std::string::size_type pos;
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); ++it) {
        pos = it->getNombre().find(patron);
        if (pos != std::string::npos) {
            resultados.push_back(*it);
        }
        else{
            pos = it->getEmail().find(patron);
            if (pos != std::string::npos) {
                resultados.push_back(*it);
            }
        }
    }
    return resultados;
}