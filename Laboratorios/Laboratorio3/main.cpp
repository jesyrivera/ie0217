#include "Agenda.hpp"

int main() {
    //Objetos de la clase contacto
    Contacto<std::string> contacto1("Juanito Mora", "27681234", "dj.juanito@gmail.com");
    Contacto<std::string> contacto2("William Walker", "865488997", "willywalk@outlok.com");
    Contacto<std::string> contacto3("Juan Santamaria", "22315689", "adiosmezon@gmail.com");

    //crear un objeto agenda
    Agenda<std::string> agenda;

    try{
        agenda.agregarContacto(contacto1);
        agenda.agregarContacto(contacto2);
        agenda.agregarContacto(contacto3);
    }
    catch (const std::exception& e){
        std::cerr << "Error al agregar contacto: " << e.what() << std::endl;
    }

    //Mostrar contactos
    std::cout << "Contactos en la agenda: " << std::endl;
    agenda.mostrarContactos();

    //Eliminar un contacto
    try{
        agenda.eliminarContacto("865488997");
    } catch (const std::exception& e) {
        std::cerr << "Error al eliminar contacto: " <<e.what() << std::endl;
    }

    //Mostrar contactos
    std::cout << "Contactos en la agenda: " << std::endl;
    agenda.mostrarContactos();

    //buscar contacto
    std::string patron = "Juan";
    std::list<Contacto<std::string>> resultados = agenda.buscarContactos(patron);

    // Mostrar los resultados
    std::cout << "Resultados de la búsqueda para '" << patron << "':" << std::endl;
    for (std::list<Contacto<std::string>>::const_iterator it = resultados.begin(); it != resultados.end(); ++it) {
        const Contacto<std::string>& resultado = *it;
        std::cout << "Nombre: " << resultado.getNombre()
                  << " Telefono: " << resultado.getTelefono()
                  << " Email: " << resultado.getEmail() << std::endl;
    }

    return 0;
}