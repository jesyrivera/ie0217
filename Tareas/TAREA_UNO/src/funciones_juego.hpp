#ifndef FUNCIONES_HPP /**verifica si el identificador FUNCIONES_HPP no está definido*/
#define FUNCIONES_HPP /**define el identificador*/
//!Incluye bibliotecas necesarias para escribir el codigo
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;


void mostrarMenu(); /**<Declara la funcion para mostrar el menu*/
void leerOpcion(); /**<Declara la funcion para que lea la opcion del menu*/
int numeroAleatorio(int limite); /**<Declara la funcion para que se genere un numero aleatorio dentro del intervalo*/
int verificacion(int aleatorio, int ingreso, int vidas);/**<Declara la funcion que verifica si el numero que ingreso es el correcto*/
void modoRegular(int limite, int ingreso, int vidas); /**<Declara una funcion para que la persona juegue en modo Regular*/
void modoDesafiante(int limite, int ingreso, int vidas); /**<Declara una funcion para que la persona juegue en modo Desafiante*/

#endif