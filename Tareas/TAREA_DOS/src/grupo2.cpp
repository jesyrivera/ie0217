/**
 * @file grupo2.cpp
 * @author jesyrivera
 * @brief archivo que contiene las funciones definidas del Grupo 2: MaterialAudiovisual
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "grupo2.hpp"

/**
 * @brief Constructor de la clase base MaterialAudiovisual
 * 
 * @param titulo 
 * @param grupo 
 * @param autor 
 * @param tipo 
 * @param genero 
 * @param duracion 
 * @param estado 
 * @param precio 
 */
MaterialAudiovisual::MaterialAudiovisual(const string& titulo, const string& grupo, const string& autor,
                                         const string& tipo, const string& genero, int duracion, const string& estado, double precio)
    : titulo(titulo), grupo(grupo), autor(autor), tipo(tipo), genero(genero), duracion(duracion), estado(estado), precio(precio) {}

/**
 * @brief destructor de la clase MaterialAudiovisual
 */
MaterialAudiovisual::~MaterialAudiovisual() {}

/**
 * @brief funcion que imprime la informacion de los materiales audiovisuales
 * 
 */
void MaterialAudiovisual::imprimirInformacion() const{
    cout << "Título: " << titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Género: " << genero << endl;
    cout << "Duración: " << duracion << " minutos (" << determinarDuracion() << ")\n";
    cout << "Estado: " << estado << endl;
    cout << "Precio: $" << precio << endl;
}

/**
 * @brief constructor de la clase Pelicula
 * 
 * @param titulo 
 * @param grupo 
 * @param autor 
 * @param genero 
 * @param duracion 
 * @param estado 
 * @param precio 
 * @param resumen 
 * @param materialRelacionado 
 */
Pelicula::Pelicula(const string& titulo, const string& grupo, const string& autor,
                   const string& genero, int duracion, const string& estado, double precio,
                   const string& resumen, const string& materialRelacionado)
    : MaterialAudiovisual(titulo, grupo, autor, "Pelicula", genero, duracion, estado, precio),
      resumen(resumen), materialRelacionado(materialRelacionado) {}

/**
 * @brief calcula lo que dura la pelicula
 * indica si es corta, mediana o larga acorde a sus minutos
 * @return string 
 */
string Pelicula::determinarDuracion() const {
    if (duracion <= 90) {
        return "Corta";
    } else if (duracion <= 150) {
        return "Mediana";
    } else {
        return "Larga";
    }
}

/**
 * @brief funcion que imprime la informacin de la pelicula
 */
void Pelicula::imprimirInformacion() const {
    MaterialAudiovisual::imprimirInformacion();
    cout << "Resumen: " << resumen << endl;
    cout << "Material Relacionado: " << materialRelacionado << endl;
}

/**
 * @brief constructor de la clase podcast
 * @param titulo 
 * @param grupo 
 * @param autor 
 * @param genero 
 * @param duracion 
 * @param estado 
 * @param precio 
 * @param resumen 
 * @param materialRelacionado 
 */
Podcast::Podcast(const string& titulo, const string& grupo, const string& autor,
                 const string& genero, int duracion, const string& estado, double precio,
                 const string& resumen, const string& materialRelacionado)
    : MaterialAudiovisual(titulo, grupo, autor, "Podcast", genero, duracion, estado, precio),
      resumen(resumen), materialRelacionado(materialRelacionado) {}

/**
 * @brief determina cuanto dura el podcast
 * va a depender de los minutos que se prolonge
 * @return string 
 */
string Podcast::determinarDuracion() const {
    if (duracion <= 30) {
        return "Corta";
    } else if (duracion <= 90) {
        return "Mediana";
    } else {
        return "Larga";
    }
}

/**
 * @brief funcion que imprime la informacion de los podcast
 */
void Podcast::imprimirInformacion() const {
    MaterialAudiovisual::imprimirInformacion();
    cout << "Resumen: " << resumen << "\n";
    cout << "Material Relacionado: " << materialRelacionado << "\n";
}

/**
 * @brief funcion que agrega un material audiovisual al vector
 * @param material 
 */
void BibliotecaVirtual::agregarMaterial(MaterialAudiovisual* material) {
    materiales.push_back(material);
}

/**
 * @brief funcion que elimina un audiovisual del vector
 * 
 * @param material 
 */
void BibliotecaVirtual::eliminarMaterial(MaterialAudiovisual* material) {
    auto it = find(materiales.begin(), materiales.end(), material);
    if (it != materiales.end()) {
        delete *it;
        materiales.erase(it);
    }
}

/**
 * @brief funcion que imprime los materiales de la biblioteca
 * 
 */
void BibliotecaVirtual::imprimirInformacion() const {
    for (const auto& material : materiales) {
        material->imprimirInformacion();
        cout << "\n";
    }
}

/**
 * @brief destructor de la biblioteca
 * borra los materiales almacenados en el vector
 */
BibliotecaVirtual::~BibliotecaVirtual() {
    for (const auto& material : materiales) {
        delete material;
    }
}