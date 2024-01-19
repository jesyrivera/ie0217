# Tarea 2

## Instrucciones de ejecucion

El *Makefile* va a indicar un conjunto de reldas y objetivos, se va a ejecutar usando el comando 'make all'. Primero define el nombre del programa ejecutable, lo hace utilizando la palabra 'EXECUTABLE'. Despues, se indica en el 'CXX' el compilador con el que se va a trabajar, seguido de las opciones de compilacion con el 'CXXFLAGS' que tambien va a proporcionar las adevertencias.

Se le indica los archivos fuente del programa por medio 'SOURCES', con 'OBJECTS' se le indica que los archivos objeto van a utilizar la extencion '.cpp.

Asimismo, los patrones van a definir una regla que compila archivos '.cpp' para que se generen los archivos objeto. Aqui se van a utilizar las banderas de compilacion.

Ademas, se define la regla para eliminar el ejecutable y los archivos objeto que se generaron cuando se compilo el programa, se utliza la palabra 'clean'. Se ejecuta por medio del comando 'make clean'.

Tambien, se definen las reglas all que depende de 'build' y 'run' lo que hace es compilar el programa y luego se ejecuta. La regla 'build' tiene el objetivo de compilar los archivos objeto y el 'run' ejecuta el programa y va a utilizar argumentos entre 0 y 20.

Luego, se utilizan los comandos para compilar los archivos objeto y vincularlos con el ejecutable, aqui se utiliza el compilador g++, las opciones de compilacion y los archivos objeto que se generaron. Finalmente, utilizando el comando 'make clean' se elimina el ejecutable y los archivos objeto generados.



# Parte Teorica (20 pts)

## Conceptos Fundamentales: 

### 1. Define que es la programacion orientada a objetos y explica sus principios fundamentales.

La *programacion orientada a objetos* es un paradigma en la programacion, lo que hace es estructurar el diseño sofware alrededor de objetos, entonces, el codigo se ordena de manera que los datos y las funciones esten dentro de clases. Un objeto se conforma de atributos que representan sus datos.

Los principios fundamentales son los siguientes:
**Encapsulacion**: La implementacion y el estado de un objeto se mantienen de manera privada dentro de una clase, solo se puede acceder desde adentro, pero pueden llamar funciones o metodos publicos. Resulta en mayor proteccion al programa y que no haya una corrupcion de datos.

**Abstraccion**: Los objetos muestran solo los detalles necesarios que son relevantes para el uso de otros objetos, ocultando el codigo de implementacion que no es esencial. Facilita a los desarrolladors realizar cambios y extensiones de manera facil.

**Herencia**: Permite establecer relaciones y subclases entre objetos, asi se puede reutilizar la logica mientras se mantiene una jerarquia unica. Reduce el tiempo de desarrollo y hay una mayor precision.

**Polimorfismo**: los objetos tienen la capacidad de cambiar su forma de acuerdo al contexto. Reduce la duplicacion de codigo. [1]

### 2. Herencia: Explica el concepto de herencia en programacion orientada a objetos y proporciona un ejemplo practico.

En la *programacion orientada a objetos* se puede relacionar objetos entre si por medio de relaciones y subclases, de esta manera, pueden acelerar el proceso de desarrollo y asi obtienen un desarrollo de software mas rapido y preciso. [1]

Un ejemplo seria que en una escuela se quiera llevar un registro de funcionarios y estudiantes, la clase funcionarios que contiene los atributos nombre, edad y puesto, pueden ser heredados a la clase Estudiante.

class Funcionarios{
public:
    Funcionarios(string nombre, int edad, string puesto) : nombre(nombre), edad(edad), puesto(puesto){}
    void informacion(){
        cout << "Nombre: << nombre << ", Edad: " << edad << ", Puesto: " << puesto << endl;
    }
}
class Estudiante : public Funcionarios{};


### 3. Encapsulamiento: ¿Que es el encapsulamiento en OOP y por que es importante? Proporciona ejemplos de como se implementa en C++.

Es la ocultacion de atributos o detalles internos de un objeto y la restriccion a ciertos datos del objeto, se implementa por medio de tres tipos de modificadors de acceso en C++:

*public*: los miembros son publicos y se pueden acceder desde cualquier parte del programa

*private*: los miembros son privados y solo se pueden acceder desde la clase y estan ocultos al exterior.

*protected*: los miembros estan protegidos pero son accesibles desde clases derivadas.

El *encapsulamiento* es importante porque consigue garantizar la integridad de los datos, ya que, el usuario no puede modificar directamente al os atributos. [2]

class Carro{
public:
    void conducir(){
        cout << "Ha empezado a conducir";
        inspeccion();
    }
protected:
    void inspeccion(){
        cout << "Ha realizado la inspeccion del vehiculo";
    }
private:
    int velocidad;
};

class Moto : public Carro{
    void conducir(){
        cout <<"El vehiculo va en movimiento";
    }
};

### 4. Polimorfismo: Describe el polimorfismo y proporciona ejemplos de polimorfismo de tipo y polimorfismo de operador en C++.

Se refiere a la capacidad de manejar diferentes clases que fueron heredadas de una clase base. [3]

class Figura {
protected:
    string tipo;

public:
    Figura(string& tipo) : tipo(tipo) {}

    void mostrarTipo() {
        cout << "La figura es: " << tipo;
    }
};
class Rectangulo : public Figura {
public:
    Rectangulo() : Figura("Rectangulo") {}
};
class Triangulo : public Figura {
public:
    Triangulo() : Figura("Triangulo") {}
};

polimorfismo de operador

class Interseccion {
private:
    int x, y;

public:
    Interseccion(int x, int y) : x(x), y(y) {}

    Intersecciones operator+(Interseccion& nuevaInterseccion) {
        return Interseccion(x + nuevaInterseccion.x, y + nuevaInterseccion.y);
    }

    void mostrarInterseccion() {
        cout << "X: " << x << ", Y: " << y;
    }
};

### 5. Abstraccion: ¿Como se relaciona la abstraccion con la programacion orientada a objetos? Proporciona ejemplos de como aplicar la abstraccion en un contexto de programacion.

Es la capacidad de representar conceptos por medio de clases y objetos, oculta los detalles internos y expone solo la informacion esencial. [4]

class Persona{
private:
    string nombre;
    int edad;
public:
    //metodo para darle valores a los miembros privados
    void datos(string nuevoNombre, int nuevaEdad){
        nombre = nuevoNombre;
        edad = nuevaEdad;
    }
    void informacion(){
        cout << "Nombre: " << nombre;
        cout << "Edad: " << edad;
    }
}

### 6. Clases y Objetos: Diferencia entre una clase y un objeto en programacion orientada a objetos. Proporciona un ejemplo de cada uno.

Los *objetos* se crean a partir de las clases y la *clase* es un molde para crear objetos. En la clase se definen las propiedades que objetos comparten. Los objetos tienen sus propios valores para los atributos. [5]

**Clase**

class Persona{
public:
    Persona(string nombre, int edad) : nombre(nombre), edad(edad){}
    void informacion(){
        cout << "Nombre: << nombre << ", Edad: " << edad << endl;
    }
};

**Objeto**

persona1 = Persona("Juan", 2)

### 7. Metodos Virtuales: Explica la importancia de los metodos virtuales en C++ y como se utilizan en la implementacion de polimorfismo.

Los *metodos virtuales* permiten que las clases derivadas proporcionen su propia implementacion de un metodo definido en la clase base.

La implementacion del polimorfismo con los metodos virtuales se logra por medio de memoria dinamica para acceder a objetos de clases derivas. [6]

### 8. Constructores y Destructores: ¿Cual es el proposito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.

Los *constructores* se utilizan para inicializar atributos, asignar valores iniciales y memoria al objeto. Los *destructores* pueden ser utilizados para limpiar y liberar memoria del objeto. [7]

**Constructor**

class Casa{
public:
    //constructor
    Casa(){
        cout << "Se ha construido la casa de dos pisos";
    }
};

**destructor**

class Casa{
public:
    //destructor
    Casa(){
        cout << "Se ha destruido la casa de dos pisos";
    }
};

### 9. Sobrecarga de Operadores: Explica que es la sobrecarga de operadores y proporciona un ejemplo de como se implementa en C++.

La *sobrecarga de operadores* en C++ permite a los programadores especificar el funcionamiento de los operadores al interatuar con objetos de clases personalizadas. Permite el uso de operadores como +,-,*,/, en relacion con objetos de una clase, los programadores pueden definir los resultados de esas operaciones.

class Altura{
private:
    int valor;
public:
    Altura(int x) : valor(x){}
    int calcularAltura() {
        return valor;
    }
    Altura operator+(int crecimiento){
        return Altura(valor + crecimiento);
    }
};

### 10. Templates: Describe el concepto de templates en C++. ¿En que situaciones serıa util utilizar templates?

Se refiere a una caracteristica que tiene el lenguaje que permite crear codigos genericos que pueden trabajar con distintos tipos de datos y estructuras de datos.

Pueden ser utiles cuando se quiere definir funciones/clases que puedan trabajar con diferentes tipos de datos sin tener que escribirlas varias veces con ese tipo de dato. Una unica funcion para cualquier tipo de dato que se quiera utilizar.

### 11. ¿Que es la memoria dinamica en C++ y cuando se utiliza comunmente?

La *memoria dinamica* es un espacio de almacenamiento que fue asignado durante la ejecucion, este espacio tambien puede ser liberado. [8]

Se utiliza comunmente cuando se requiere gestionar la memoria, ya sea, que no se conoce el tamano de los datos cuando se esta compilando.

### 12. Explique la diferencia entre new y malloc en C++. ¿Cuando deberıa utilizar uno sobre el otro?

'malloc' es una funcion estandar para asignar un bloque de memoria en el heap. Mientras que 'new' es un operador que se usa tambien para asignar memoria dinamica,que no necesita el tamano del operador. [9]

Cuando se quiera asignar memoria sin inicializarla se deberia de utilizar malloc, en los demas casos new porque es mas eficiente.


### 13. ¿Que es una fuga de memoria (memory leak) y como puede evitarse en programas en C++?

Una *fuga de memoria* es cuando se asigno un espacio de memoria dinamica a un programa durante su ejecucion pero no fue liberado, entonces este espacio asignado ya no puede ser utilizado.

Se puede evitar si se asigna y se libera el espacio de manera automatica. [10]

### 14. Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.

Los *punteros inteligentes* son usados para asegurar que los programas estan libres de memoria y que no haya perdida de memoria (memory leak). [11]

void punteroInteligente(){
    std::unique_ptr<Libro> libro1(new Libro(L"El principito"));
    Libro1->leerLibro(); 
}

### 15. ¿Cual es la diferencia entre delete y delete[] en C++? ¿En que contexto se utilizarıa cada uno?

'delete' se usa para liberar memoria dinamica que fue asignada por medio de la palabra new. Mientras que, 'delete[]' se usa para liberar memoria dinamica que se asigno con el arreglo 'new[]'. [12]

El 'delete' se usa para objetos individuales y el 'delete[]' se usa para arreglos.

### 16. ¿Que es un algoritmo de ordenamiento y por que son importantes en programacion?

Son pasos que se usan para organizar elementos de una matriz o lista en  un orden especifico. Son importantes porque facilitan la busqueda de datos cuando ya estos estan ordenados y vuelve el codigo mas facil de entender.

### 17. Explique el funcionamiento del algoritmo de ordenamiento ”Bubble Sort”. ¿Cual es su complejidad temporal en el peor caso?

En el *Bubble Sort* se compara el primer elemento con el segundo, si el primer elemento es mayor que el segundo entonces los intercambia, si no es asi, los deja como esta. Luego hace lo mismo pero comparando el segundo con el tercero y asi sucesivamente hasta llegar al final.

En el peor de los casos, es cuando el conjunto de datos sea grande porque el tiempo de ejecucion crece bastante.

### 18. Describa el algoritmo de ordenamiento ”QuickSort”. ¿Cual es su ventaja principal sobre otros algoritmos de ordenamiento?

En este algoritmo de ordenamiento, se escoge un elemento como pivote, se reorganiza la lista para que los elementos mas pequenos del pivote esten a la izquierda y los mas grandes a la derecha.

La ventaja principal es que su tiempo de ejecucion es reducido, entonces tiende a ser mas rapido que otros algoritmos de ordenamiento.

### 19. ¿Cual es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno.

La diferencia entre estos dos algoritmos de ordenamiento es que el *estable* mantiene el orden de los elementos con claves iguales en el ordenamiento. 

info = [(1,3), (2,4), (3,2), (4,5)]

El resultado va ser: [(3, 2), (1, 3), (2, 4), (4, 5)]

En el caso del algoritmo de ordenamiento *inestable* no asegura que el orden de los elementos con claves iguales se mantenga en el ordenamiento. [13]

info = [3,1,4,2,5]

El resultado va a ser:

[1, 2, 3, 4, 5]

### 20. Hable sobre el algoritmo de ordenamiento ”Merge Sort”. ¿Cual es su complejidad temporal y en que situaciones es preferible su uso?

El *Merge Sort*; al igual que el *QuickSort* usa la tecnica de divide y venceras para ordenar una lista de elementos. Lo que hace es dividir la lista a la mitad, se ordena recursivamente cada mitad y ya luego las listas se unen. Su complejidad temporal es de O(n log n) donde su tiempo es rapido y es estable. Se puede utilizar este ordenamiento con listas muy grandes. [14]


[^1] : https://www.computerweekly.com/es/definicion/Programacion-orientada-a-objetos-OOP#:~:text=La%20programaci%C3%B3n%20orientada%20a%20objetos,tiene%20atributos%20y%20comportamiento%20%C3%BAnicos.

[^2] : https://datascientest.com/es/encapsulacion-definicion-e-importancia#:~:text=La%20encapsulaci%C3%B3n%20es%20un%20mecanismo,no%20sean%20los%20servicios%20propuestos.

[^3] : https://docs.hektorprofe.net/cpp/11-clases/06-polimorfismo-clases/

[^4] : https://barcelonageeks.com/abstraccion-en-c/

[^5] : https://makeitrealcamp.gitbook.io/programacion-orientada-por-objetos-en-ruby/clases-y-objetos

[^6] : https://www.unirioja.es/cu/jearansa/0910/archivos/EIPR_Tema03.pdf

[^7] : https://www.ibm.com/docs/es/i/7.5?topic=only-overview-constructors-destructors-c

[^8] : https://codigomaldito.blogspot.com/2006/01/memoria-dinamica-new-y-delete.html

[^9] : https://askanydifference.com/es/difference-between-malloc-and-new-with-table/

[^10] : https://medium.com/@rcampos.tapia/fugas-de-memoria-memory-leaks-una-fuga-que-se-puede-controlar-be39bdf096d5

[^11] : https://learn.microsoft.com/es-es/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170

[^12] : https://copyprogramming.com/howto/delete-vs-delete-in-destructor#delete-vs-delete-in-destructor

[^13] : https://dsentidades.blogspot.com/2017/07/diferencias-entre-un-algoritmo-de.html

[^14] : https://antares.sip.ucm.es/cpareja/libroAlgoritmos/docs/libro-completo.pdf