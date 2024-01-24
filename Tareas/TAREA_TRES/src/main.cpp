/**
 * @file main.cpp
 * @author jesyrivera
 * @brief se define la funcion main para llamar a las demas funciones
 * @version 0.1
 * @date 2024-01-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "matriz.hpp"
#include "operacionesBasicas.hpp"
#include "operacionCompleja.hpp"
#include "imprimirMatrices.hpp"

/**
 * @brief funcion main que realiza operaciones de matrices dependiendo del tipo de dato
 * 
 * @return 0
 */
int main() {
	//solicita al usuario ingresar el tipo de dato para las matrices
	cout << "ingrese el tipo de dato (int, float, complex<double>): ";
	string tipoDato;
	cin >> tipoDato;

	try {
		if (tipoDato == "int") {
			//crea matrices del tipo int
            Matriz<int> matriz1;
            cout << "ingrese los datos para la primera matriz:\n";
            matriz1.pedirDatos();

            Matriz<int> matriz2;
            cout << "ingrese los datos para la segunda matriz:\n";
            matriz2.pedirDatos();

            Matriz<int> resultado = matriz1.realizarOperacion();
            cout << "\nmatriz 1:\n";
            ImprimirMatrices<int>::imprimirMatriz(matriz1);
            cout << "\nmatriz 2:\n";
            ImprimirMatrices<int>::imprimirMatriz(matriz2);
            cout << "\nmatriz resultante:\n";
            ImprimirMatrices<int>::imprimirResultado(resultado);
        } 
        else if (tipoDato == "float") {
			//crea matrices del tipo float
            Matriz<float> matriz1;
            cout << "ingrese los datos para la primera matriz:\n";
            matriz1.pedirDatos();

            Matriz<float> matriz2;
            cout << "ingrese los datos para la segunda matriz:\n";
            matriz2.pedirDatos();

			//realiza operaciones en la matriz
            Matriz<float> resultado = matriz1.realizarOperacion();
            cout << "\nmatriz 1:\n";
            ImprimirMatrices<float>::imprimirMatriz(matriz1);
            cout << "\nmatriz 2:\n";
            ImprimirMatrices<float>::imprimirMatriz(matriz2);
            cout << "\nmatriz resultante:\n";
            ImprimirMatrices<float>::imprimirResultado(resultado);
        } 
        else if (tipoDato == "complex<double>") {
			////crea matrices del tipo double
            Matriz<complex<double>> matriz1;
            cout << "ingrese los datos de la primera matriz:\n"; 
            matriz1.pedirDatos();

            Matriz<complex<double>> matriz2;
            cout << "ingrese los datos de la segunda matriz:\n";
            matriz2.pedirDatos();

			//realiza operaciones en las matrices
            Matriz<complex<double>> resultado = matriz1.realizarOperacion();
            cout << "\nmatriz 1:\n";
            ImprimirMatrices<complex<double>>::imprimirMatriz(matriz1);
            cout << "\nmatriz 2:\n";
            ImprimirMatrices<complex<double>>::imprimirMatriz(matriz2);
            cout << "\nmatriz resultante:\n";
            ImprimirMatrices<complex<double>>::imprimirResultado(resultado);
        } 
    } 
    catch (const invalid_argument& e) {
        cerr << "error: " << e.what() << endl;
        return 1;
    }

    return 0;
}