/**
 * @file grupo2.hpp
 * @author jesyrivera
 * @brief archivo header que contiene las clases del Grupo 2: MaterialAudiovisual
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef GRUPO2_HPP
#define GRUPO2_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/**
 * @brief se declara la clase base MaterialAudiovisual
 */
class MaterialAudiovisual {
public:
    /**<Declara los atributos que se pueden acceder desde cualquier parte*/
    string titulo;
    string grupo;
    string autor;
    string tipo;
    string genero;
    int duracion;
    string estado;
    double precio;

    /**
     * @brief Constructor de la clase
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
    MaterialAudiovisual(const string& titulo, const string& grupo, const string& autor,
                        const string& tipo, const string& genero, int duracion, const string& estado, double precio)
                    : titulo(titulo), grupo(grupo), autor(autor), tipo(tipo), genero(genero),
                    duracion(duracion), estado(estado), precio(precio) {}

    /**
     * @brief destructor de la clase
     */
    virtual ~MaterialAudiovisual();

    /**
     * @brief funcion que calcula la duracion del material
     * @return string 
     */
    virtual string determinarDuracion() const = 0;

    /**
     * @brief funcion que imprime la informacion dle material
     * 
     */
    virtual void imprimirInformacion() const;
};

/**
 * @brief declara la clase derivada Pelicula
 */
class Pelicula : public MaterialAudiovisual {
public:
    Pelicula(const string& titulo, const string& grupo, const string& autor,
             const string& genero, int duracion, const string& estado, double precio,
             const string& resumen, const string& materialRelacionado);

    /**
     * @brief calcula la duracion del material
     * va a indicar si es corta, mediana, larga
     * @return string 
     */
    virtual string determinarDuracion() const;

    /**
     * @brief funcion que imprime la informacion de la pelicula
     */
    virtual void imprimirInformacion() const;

private:
    /**<Declara atributos con visibilidad privada que solo pueden ser accedidos desde adentro*/
    string resumen;
    string materialRelacionado;
};

/**
 * @brief se declara la clase derivada podcast
 */
class Podcast : public MaterialAudiovisual {
public:
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
    Podcast(const string& titulo, const string& grupo, const string& autor,
            const string& genero, int duracion, const string& estado, double precio,
            const string& resumen, const string& materialRelacionado);

    /**
     * @brief calcula la duracion del podcast
     * de acuerdo a la cantidad de minutos, es corto, mediano o largo
     * @return string 
     */
    virtual string determinarDuracion() const;
    
    /**
     * @brief funcion que imprime la informacion del material podcast
     * 
     */
    virtual void imprimirInformacion() const;

private:
    /**<Declara los atributos privados que solo se pueden acceder desde aqui*/
    string resumen;
    string materialRelacionado;
};

/**
 * @brief declara la clase que representa a la biblioteca virtual
 */
class BibliotecaVirtual {
public:
    /**
     * @brief funcion que agrega un material al vector, recibe un parametro
     * @param material 
     */
    void agregarMaterial(MaterialAudiovisual* material);

    /**
     * @brief funcion que elimina un maaterial del vector, recibe un parametro
     * @param material 
     */
    void eliminarMaterial(MaterialAudiovisual* material);

    /**
     * @brief funcion que imprime la informacion de los materiales del vector
     */
    void imprimirInformacion() const;

    /**
     * @brief destructor de la clase BibliotecaVirtual
     * elimina los materiables almacenados en el vector
     */
    ~BibliotecaVirtual();

private:
    vector<MaterialAudiovisual*> materiales; /**<Vector que almacena materiales*/
};

#endif