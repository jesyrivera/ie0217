/**
 * @file grupo1.hpp
 * @author jesyrivera
 * @brief este archivo header contiene las clases definidas junto a las funciones prototipo del Grupo 1: MaterialLectura
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef GRUPO1_HPP
#define GRUPO1_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/**
 * @brief se declara la clase principal MaterialLectura
 */
class MaterialLectura {
public:
    /**<Se declaran los atributos*/
    string titulo;
    string grupo;
    string tipoMaterial;
    string autor;
    string editorial;
    string genero;
    string estado;
    int cantidadHojas;
    double precio;

    /**
     * @brief Contructor de la clase MaterialLectura
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
    MaterialLectura(const string& titulo, const string& grupo, const string& tipoMaterial, const string& autor, 
                    const string& editorial, const string& genero, const string& estado, int cantidadHojas, double precio)
        : titulo(titulo), grupo(grupo), tipoMaterial(tipoMaterial), autor(autor), editorial(editorial),
          genero(genero), estado(estado), cantidadHojas(cantidadHojas), precio(precio) {}

    /**
     * @brief Destructor virtual de la clase
     * 
     */
    virtual ~MaterialLectura();
    
    /**
     * @brief funcion que va a imprimir la informacion de los materiales
    */
    virtual void imprimirInformacion() const = 0;
};

/**
 * @brief clase derivada de la clase Base
 */
class Libro : public MaterialLectura {
private:
    ///< Se declaran los atributos con visibilidad privada (solo se pueden acceder desde ahi)
    string resumenContenido;
    string materialRelacionado;

public:
    /**
     * @brief Constructor de la clase Derivada Libro
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
    Libro(const string& titulo, const string& autor, const string& editorial, const string& genero,
          const string& estado, int cantidadHojas, double precio, const string& resumenContenido, 
          const string& materialRelacionado);

    /**
     * @brief calcula la longitud del libro
     * indica si es mediano, corto, largo acorde a la cantidad de hojas que tenga
     * @return string 
     */
    string longitudLibro() const;

    /**
     * @brief funcion virtual que imprime la informacion del libro
     */
    virtual void imprimirInformacion() const;
};

/**
 * @brief Declara la clase Derivada Noticia
 */
class Noticia : public MaterialLectura {
private:
    ///< Se declaran los atributos con visibilidad privada (solo se pueden acceder desde ahi)
    string resumenContenido;
    string materialRelacionado;

public:
    /**
     * @brief Constructor de la clase derivada Noticia
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
    Noticia(const string& titulo, const string& autor,
            const string& editorial, const string& genero,
            const string& estado, int cantidadHojas, double precio,
            const string& resumenContenido, const string& materialRelacionado);

    /**
     * @brief calcula la longitud de la noticia
     * esto va a depender de la extencion de hojas de la noticia
     * @return string 
     */
    string longitudNoticia() const;

    /**
     * @brief esta funcion virtual imprime la informacion de la noticia
     */
    virtual void imprimirInformacion() const;
};

/**
 * @brief Declara a la clase BilbiotecaVirtual
 */
class BibliotecaVirtual {
private:
    vector<MaterialLectura*> materiales; /**<Vector que almacena los materiales*/

public:
    /**
     * @brief destructor de la clase BibliotecaVirtual
     * elimina los materiales que se guardaron en el vector
     */
    ~BibliotecaVirtual();
    
    /**
     * @brief funcion que agrega un material al vector
     * @param material 
     */
    void agregarMaterial(MaterialLectura* material);

    /**
     * @brief funcion que elimina un material del vector
     * @param indice 
     */
    void eliminarMaterial(int indice);

    /**
     * @brief funcion que imprime la informacion de los materiales
     */
    void imprimirInformacionMateriales() const;
};


#endif
