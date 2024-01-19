/**
 * @file grupo1.cpp
 * @author jesyrivera
 * @brief este archivo contiene las funciones definidas del Grupo 1: MaterialLectura
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "grupo1.hpp"

/**
 * @brief Constructor de la clase MaterialLectura
 * 
 * @param titulo 
 * @param grupo 
 * @param tipoMaterial 
 * @param autor 
 * @param editorial 
 * @param genero 
 * @param estado 
 * @param cantidadHojas 
 * @param precio 
 */
MaterialLectura::MaterialLectura(const string& titulo, const string& grupo, const string& tipoMaterial, const string& autor, 
                const string& editorial, const string& genero, const string& estado, int cantidadHojas, double precio)
        : titulo(titulo), grupo(grupo), tipoMaterial(tipoMaterial), autor(autor), editorial(editorial),
          genero(genero), estado(estado), cantidadHojas(cantidadHojas), precio(precio) {}

/**
 * @brief Destructor virtual de la clase MaterialLectura
 */
MaterialLectura::~MaterialLectura() { }

/**
 * @brief esta funcion muestra la informacion del material de lectura
 */
void MaterialLectura::imprimirInformacion() const{
    cout << "Título: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Género: " << genero << endl;
    cout << "Estado: " << estado << endl;
    cout << "Precio: $" << precio << endl;
}

/**
 * @brief Constructor de la clase Libro
 * 
 * @param titulo 
 * @param autor 
 * @param editorial 
 * @param genero 
 * @param estado 
 * @param cantidadHojas 
 * @param precio 
 * @param resumenContenido 
 * @param materialRelacionado 
 */
Libro::Libro(const string& titulo, const string& autor,
             const string& editorial, const string& genero,
             const string& estado, int cantidadHojas, double precio,
             const string& resumenContenido, const string& materialRelacionado)
    : MaterialLectura(titulo, "Libro", "Libro", autor, editorial, genero, estado, cantidadHojas, precio), 
    resumenContenido(resumenContenido), materialRelacionado(materialRelacionado) {}

/**
 * @brief Calcula la longitud del libro
 * Indica si es corto, mediano o largo, esto va a depender del numero de hojas que tenga
 * @return string 
 */
string Libro::longitudLibro() const {
    if (cantidadHojas <= 100) return "Corto";
    else if (cantidadHojas <= 200) return "Mediano";
    else return "Largo";
}

/**
 * @brief esta funcion muestra la informacion del libro
 */
void Libro::imprimirInformacion() const {
    MaterialLectura::imprimirInformacion();
    cout << "Editorial: " << editorial << endl;
    cout << "Resumen: " << resumenContenido << endl;
    cout << "Material Relacionado: " << materialRelacionado << endl;
    cout << "Longitud: " << longitudLibro() << endl;
}

/**
 * @brief Constructor de la clase Noticia
 * 
 * @param titulo 
 * @param autor 
 * @param editorial 
 * @param genero 
 * @param estado 
 * @param cantidadHojas 
 * @param precio 
 * @param resumenContenido 
 * @param materialRelacionado 
 */
Noticia::Noticia(const string& titulo, const string& autor,
                 const string& editorial, const string& genero,
                 const string& estado, int cantidadHojas, double precio,
                 const string& resumenContenido, const string& materialRelacionado)
    : MaterialLectura(titulo, "Noticia", "Noticia", autor, editorial, genero, estado, cantidadHojas, precio), 
      resumenContenido(resumenContenido), materialRelacionado(materialRelacionado) {}

/**
 * @brief Calcula la longitud de la noticia
 * Le indica si es corta, mediana o larga, esto va a depender de la cantidad de hojas en que se extiende
 * @return string 
 */
string Noticia::longitudNoticia() const {
    if (cantidadHojas <= 5) return "Corta";
    else if (cantidadHojas <= 10) return "Mediana";
    else return "Larga";
}

/**
 * @brief esta funcion imprime la informacion de la noticia
 */
void Noticia::imprimirInformacion() const {
    MaterialLectura::imprimirInformacion();
    cout << "Resumen: " << resumenContenido << endl;
    cout << "Material Relacionado: " << materialRelacionado << endl;
    cout << "Longitud: " << longitudNoticia() << endl;
}

/**
 * @brief Destructor de la clase BibliotecaVirtual
 * lo que hace es eliminar los materiales de lectura que se guardaron en el vector
 */
BibliotecaVirtual::~BibliotecaVirtual() {
    for (MaterialLectura* material : materiales) {
        delete material;
    }
}

/**
 * @brief esta funcion agrega material de lectura al vector de la BibliotecaVirtual
 * @param material 
 */
void BibliotecaVirtual::agregarMaterial(MaterialLectura* material) {
    materiales.push_back(material);
}

/**
 * @brief la funcion lo que hace es eliminar material de lectura del vector de la bibliotecaVirtual
 * @param indice 
 */
void BibliotecaVirtual::eliminarMaterial(int indice) {
    if (indice >= 0 && indice < materiales.size()) {
        delete materiales[indice];
        materiales.erase(materiales.begin() + indice);
    }
}

/**
 * @brief esta funcion va a imprimir los materiales de la biblioteca
 */
void BibliotecaVirtual::imprimirInformacionMateriales() const {
    for (const MaterialLectura* material : materiales) {
        material->imprimirInformacion();
    }
}