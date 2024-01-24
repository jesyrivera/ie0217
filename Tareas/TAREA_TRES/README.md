# Instrucciones de ejecucion

Se ejecuta con 'make all' o 'make -f Makefile'. Se van a ejecutar dos programas diferentes, uno sobre matrices y el otro de validacion de direcciones de correo.

Se definen el nombre de ejecutaables para estos dos programas, luego se especifica el compilador de C++ que se va a utilizar en 'CXX', posteriormente, en "CXXFLAGS' se establecen las banderas de compilacion, junto a warnings.

Se enlista los archivos fuente de cada programa en 'SOURCES_MATRICES' y 'SOURCES_CORREO'. Los archivos objeto generados a partir de los archivos fuente en 'OBJECTS_MATRICES' y 'OBJECTS_CORREO'.

Se definen las relas para limpiar los archivos generados con '.PHONY: all clean' y con 'clean' que es el que va a eliminar los ejecutables y archivos objeto generados.

Se definen las reglas para ejecutar cada programa con la palabra inicial 'run'.

Se definio la regla prinicpal 'all' que lo que hace es construir y ejecutar cada programa, va a depender del buil y run de cada programa.


# Parte Teorica (15 pts)

## Templates:

### 1. Definicion de Templates: Explique el concepto de templates en C++ y proporcione un ejemplo simple.

Un template es una estructura que genera un tipo o funcion durante la compilacion, se adapta a los argumentos que proporcione el usuacion para ese template. [1]

template <typename T>
T multiplicacion(T var1, T var2){
    return var1 * var2;
}

### 2. Sobrecarga de Plantillas: ¿Como se realiza la sobrecarga de funciones con plantillas en C++?

La sobrecarga de funciones con plantillas en C++ se logra utilizando una plantilla de funcion, se definen varias funciones con el mismo nombre. [2]

### 3. Plantillas de Clases: Explique como se pueden utilizar plantillas en la definicion de clases en C++.

Primero se declara una plantilla para la clase escribiendo 'template', luego dentro de los '<>' se escribe el parametro de la plantilla. Despues, se define la clase en el siguiente renglon, en la clase hay un atributo variable y un metodo de funcion que su tipo es el argumento de un template

## Excepciones:

### 4. Manejo de Excepciones: Describa los bloques try, catch y throw y como se utilizan para el manejo de excepciones en C++.

El bloque 'try' es donde se escribe el codigo que puede generar una excepcion.

El bloque 'throw' va a lanzar una excepcion cuando la detecte y luego se salta al bloque catch.

El bloque 'catch' es el que maneja las excepciones.

El manejo de excepciones en C++ es muy util porque proporcina una manera de trabajar con errores o eventos inesperados, asi el codigo va a funcionar de manera mas eficiente.

### 5. Excepciones Estandar: Nombre al menos tres excepciones estandar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrıan ser utiles.

Entre las excepciones estandar proporcionadas por C++ estan: [3]

'overflow_error' se genera cunado ocurre un desbordamiento aritmetico, esto pasa cuando el resultado de un calculo es muy grande para el tipo de dato de salida.

int suma(int num1, int num2) {
    if ((num1 > 0 && var2 > INT_MAX)) {
        throw overflow_error("Resultado con demasiados numeros");
    }
    return num1 + num2;
}

'invalid_argument' es cuando un valor de argumento no ha sido aceptado.

void dividir(int numerador, int denominador) {
    if (denominador == 0) {
        throw invalid_argument("El denominador debe de ser diferente a cero");
    }
    return numerador / denominador;
}

'runtime_error' esta excepcion es para cuando ocurren errores cuando se ejecuta el programa y no se pueden predecir facilmente.

double funcionLogaritmica(double numero) {
    if (numero <= 0.0) {
        throw runtime_error("No se puede calcular si el numero es cero o  negativo");
    }
}

### 6. Polıtica de Manejo de Excepciones: ¿Que es una polıtica de manejo de excepciones y por que es importante considerarla al disenar software?

Una politica de manejo de excepciones es el conjunto de reglas donde se define como gestionar situaciones inesperadas o errores que se pueden presentar cuando se ejecuta un programa.

Es importante porque permite manejar problemas para que el programa pueda correr y no finalice por algun error. [4]

### 7. Noexcept: Explica el proposito de la palabra clave noexcept y como se utiliza en C++.

'noexcept' es para indicar que la funcion no va a generar excepciones porque el conjunto de excepciones esta vacio. Cuando se declara una funcion noexcept, el compilador no necesita generar codigo adicional. [5]

Primero se declara una plantilla para la clase escribiendo 'template', luego dentro de los '<>' se escribe el parametro de la plantilla. Despues, se define la funcion en el siguiente renglon y se utiliza la palabra noexcept, se hace de la siguiente forma:

template <typename T>
T copy_object(const T& obj) noexcept(is_pod<T>::value) {
    T copy = obj;
    return copy;
}

## STL (Standard Template Library):


### 8. Contenedores STL: Nombre cinco contenedores diferentes de la STL y explique brevemente en que situaciones serıa apropiado usar cada uno.

Entre los contenedores de la STL estan: [6]

El contenedor 'vector' se comporta como una matriz, puede cambiar de tamano automaticamente. Es util cuando se necesita una longitud dinamica.

El contenedor 'list' es una lista doblemente enlazada que permite la insercion y eliminacion en cualquier parte del contenedor. Es apropiado para situaciones donde se necesite insertar o eliminar de manera frencuente.

El contenedor 'map' almacena clave/valor, se usa para ordenar la secuencia y asociar la clave con el valor. Entonces se puede acceder a valores por medio de una clave.

El contenedor 'set' almacena elementos en orden ascendente. Es apropiado cuando se quiere guardar los elementos de manera ordenada.

El contenedor 'stack' utiliza la semantica de que el ultimo que entra es el primero en salir, se puede utilizar cuando se necesite insertar y eliminar solo el extremo de la estructura.

### 9. Iteradores en STL: Explique el concepto de iteradores en la STL y como se utilizan para acceder a elementos en contenedores.

Son objetos parecidos a los punteros, pero representan la posicion de un elemento en un contenedor. Los iteradors se utilizan para recorrer los elementos del contenedor, para lograr esto, se crea un iterador que apunte al contenedor, de la siguiente forma: contenedor<type>::iterator itr;

Se pueden utilizar en bucles.

### 10. Algoritmos STL: Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones basicas.

El algoritmo de busqueda 'find' se utiliza para buscar un elemento en un rango.

El algoritmo de ordenamiento 'sort' es usado con el objetivo de ordenar de manera ascendente un rango especificado.

El algoritmo de manipulacion de rangos 'move' tiene la tarea de mmover elementos de un rango a otro.

### 11. Algoritmos Personalizados: ¿Como podrıa utilizar un algoritmo personalizado con la STL?

Se puede utilizar una funcion con un algoritmo, se puede utilizar de la siguiente forma: se escribe el algoritmo a utilizar seguido parentesis, dentro de ellos escribe el contenedor.posicion y luego la funcion, como se muestra a continuacion:

algoritmo (contenedor.begin(), contenedor.end(), funcion);

## Expresiones Regulares:

### 12. Definicion de Expresiones Regulares: Defina que son las expresiones regulares y proporcione un ejemplo simple.

Las expresiones regulares son patrones de busqueda y manipulacion de cadenas de texto flexibles y poderosas. 

Si quisiera encontrar palabras que empiece con "auto" usando expresiones regulares seria:

\auto\w

### 13. Caracteres Especiales: Enumere al menos tres caracteres especiales comunmente utilizados en expresiones regulares y describa sus funciones.

'?' tiene la tarea de indicar que el elemento anterior es opcional.

'^' es el que indica que el patron debe de coincidir con el primer caracter de la cadena.

'\' la barra se usa como caracter de escape, para que se interprete de manera literal.

### 14. Uso de Expresiones Regulares en C++: ¿Como se utilizan las expresiones regulares en C++? Proporciona un ejemplo.

se agrega la biblioteca '<regex>

Si quiero encontrar una palabra que contenga la letra c:

int main() {
    string text = "Oracion con ejemplo de animales como perro, conejo, gato y perico"

    regex patron("\\bc\\w*\\b");

    for (auto it = sregex_iterator(text.begin(), text.end(), patron); it != sregex_iterator(); ++it){
        cout << it->str() << endl;
    }
    return 0;
}

### 15. Validacion de Patrones: ¿Por que las expresiones regulares son utiles para la validacion de patrones en cadenas de texto?

Permiten realizar busquedas y validar patrones de manera rapida en cadenas de texto extensas, son eficientes en cuanto a tiempo de ejecucion. Son utiles para manipular grandes conjuntos de datos, puede realizar coincidencias de patrones que sigen reglas detalladas. [7]


## Referencias:

[^1] : https://learn.microsoft.com/es-es/cpp/cpp/templates-cpp?view=msvc-170

[^2] : https://learn.microsoft.com/es-es/cpp/cpp/overload-resolution-of-function-template-calls?view=msvc-170

[^3] : https://en.cppreference.com/w/cpp/error/exception

[^4] : https://docs.hektorprofe.net/cpp/13-manejo-excepciones/

[^5] : https://learn.microsoft.com/es-es/cpp/cpp/noexcept-cpp?view=msvc-170

[^6] : https://learn.microsoft.com/es-es/cpp/standard-library/stl-containers?view=msvc-170

[^7] : https://learn.microsoft.com/es-es/cpp/standard-library/regular-expressions-cpp?view=msvc-170
