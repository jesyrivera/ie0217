# Instrucciones de ejecucion

El programa se puede correr utilizando el comando 'make run', se empieza a compilar los archivos '.py' que estan en la carpeta 'src'. Igualmente, se puede primero compilar utilizando el comando 'make', luego se utiliza el comando 'make run' para correr el programa. 

Para eliminar los archivos que se generaron, se utiliza el comando 'make clean'. Con este comando sse eliminan los archivos '.pyc' que se generaron y el ejecutable.


# Parte Teorica (15 pts)

### 1. Explique la diferencia entre una lista y una tupla en Python.

Una lista es un tipo de datos que contiene una coleccion de elementos, que puede ser modificada, se le pueden agregar o eliminar elementos, se usan para tipos de datos similares. La tupa tambien es un tipo de dato que contiene una coleccion de elementos pero son inmutables, son para tipos de datos diferentes y se itera mas rapido en las tuplas.

### 2. ¿Que es la sobrecarga de operadores en Python y como se implementa?

La sobrecarga de operadores permite crear codigo donde se usan los operadores para hacer compaciones y operaciones entre objetos. Para sobrecargar operadors se hace uso de metodos especiales en la clase, son los metodos que empiezan y terminan con guion bajo, luego se crean objetos de la clase, se sobrecarga el operador (+, -, *, /, etc.) utilizando los objetos. [1]

### 3. Explique el concepto de "alcanzabilidad”(scope) de una variable en Python.

Es el alcance de una variable, donde se ecuntra la variable que puede ser referenciada o modificada. Existen dos tipos de alcances, local y global, las variables locales solo existen dentro de una funcion y solo se puede acceder a ellas desde ahi, las variables globales son accesibles en todo el programa y existen fuera de cualquier funcion.

### 4. ¿Que es un decorador en Python y cual es su funcion principal?

Es una funcion que se utiliza para extender la funcionalidad de una fucion, es util cuando se quiere usar la misma funcion en varios casos y se quiere ampliar de manera individual. [2]

### 5. ¿Como se gestionan las excepciones en Python? Proporcione ejemplos de uso de bloques try, except y finally.

'try' es el bloque con las sentencias que se quiere ejecutar, deja de ejecutarse si hay errores en la ejecucion. 'except' es el bloque que se ejecuta luego de que el bloque 'try' se detuviera por un error, contiene sentencias que generalmente puede indicar que fue lo que salio mal en el bloque 'try'. Mientras que, el bloque 'finally' siempre se ejecuta. [3]

try:
    var1 = int(input("ingrese un numero: "))
    var2 = int(input("ingrese un segundo numero: "))
    resultado = var1 / var2
    print("el resultado de la division es:", resultado)

except ZeroDivisionError:
    print("el denominador no puede ser cero")

finally:
    print("el primer numero es el numerador ", var1, "el segundo el denominador ", var2)

### 6. ¿Que son los generadores en Python y para que se utilizan?

Son funciones que devuelven un numero de elementso iterables, uno por uno. Se utilizan para crear iteradores. Cuando una iteracion sobre un conjunto comienza la instruccion, se ejecuta el generador, este devuelve su ejecucion al ciclo for, genera tantos valores como se desee. [4]

### 7. Explique la diferencia entre init y call en clases de Python.

'init' se utiliza para inicializar los atributos de una instancia creada, mientras que, 'call' se utiliza para que una instacia sea llamada como una funcion.

### 8. ¿Como se organizan los modulos y paquetes en Python? ¿Que es init .py?

Los modulos son ficheros que contienen definiciones y declaraciones. El nombre de archivo es el nombre del modulo, seguido de '.py'. Las definiciones de un modulo pueden ser importadas y utilizadas en otros modulos. Los paquetes son directorios que contienen distintos modulos usando nombres de modulos con puntos. El '_ _init_ _.py' es un archivo en un paquete que se ejecuta cuando el paquete es importado. [5]

### 9. Explique la diferencia entre metodos append() e extend() en listas de Python.

'append()' se utiliza para agregar un elemento al final de la lista, y 'extend()' se utiliza para agregar los elementos de otra lista.

### 10. ¿Cual es la diferencia entre un metodo de clase y un metodo estatico en Python?

Los metodos de clase si pertenecen a la clase, pueden acceder a los atributos y metodos. Los metodos estaticos no le pertenecen a la clase, no pueden acceder a atributos ni metodos que contenga la clase.[6]

### 11. Hable sobre las diferencias entre herencia simple y herencia multiple en Python.

En la herencia simple, una clase hereda de una sola clase base. En la clase herencia multiple, es cuando una clase puede heredar de varais o multiples clases base.

### 12. ¿Como se manejan los errores de importacion de modulos en Python?

Al importar un modulo por primera vez, se busca el modulo y si no se encuentra entonces se se genera un 'ModuloNotFoundError'(es una subclase de 'ImportError'). Los cargadores de modulos proporcionan la ejecucion del modul, si el cargador no puede ejecutarse entonces se genera un 'ImportError', se manejan utilizando try-except y son capturadas por excepciones 'ImportError'. [7]

### 13. ¿Cual es la diferencia entre una clase y un objeto en Python?

En las clase se definen atributos y metodos, mientras que los objetos son instancias de una clase, se crean a partir de una clase y hereda los atributos y metodos de una clase.

### 14. Hable sobre la diferencia entre una clase abstracta y una interfaz en Python.

Una clase abstracta es una plantilla para una clase y esta clase se puede utilizar para crear una subclase con mismos atributos y metodos. Las clases abstractas se utilizan tambien para crear una intefaz para sus subclases. [8]

### 15. Explique el concepto de sobreescritura de metodos en Python y como se realiza.

La sobreescritura de metodos permite a una subclase proporcionar una implementacion de metodos con el mismo nombre que una clase superior pero con distinto comportamiento, entonces, cuando se implementa procesos a una subclase se esta sobreescribiendo metodos. [9]


# Parte Practica 2 (15 pts)

Al ejecutar la funcion evaluar_alergias, se puede observar que el tiempo de ejecucion es muy bueno, porque lo que tarda es muy poco, entonces no esta consumiendo muchos recursos en cuanto a tiempo. El perfilado de tiempo muestra que la mayor parte del tiempo se va en la funcion evaluar_alergias. Reflexionando sobre la eficiencia, en el programa se usaron listas pero una posible opcion mas eficiente seria el uso de diccionarios.

Igualmente, al ejecutar la opcion 4 del menu que muestra los resultados generales, el tiempo que tarda en dar los resultados es bastante reducido entonces pareciera que en cuanto a tiempo es eficiente, de igual forma, tal vez utilizar diccionarios pudo reducir el codigo y resultar en una reduccion de tiempo en ejecucion. Tambien, en esta parte se imprimen mas datos, por tanto, va a durar mas tiempo que la ejecucion donde se evaluan las alergias.



[^1] : https://medium.com/@LuisMBaezCo/overloading-sobrecargar-operadores-en-python-5d7a75e2bfdf#:~:text=La%20sobrecarga%20de%20operadores%20(Overloading,hacer%20comparaciones%20y%20operaciones%20entre

[^2] : https://www.ionos.es/digitalguide/paginas-web/desarrollo-web/python-decorators/

[^3] : https://www.freecodecamp.org/espanol/news/sentencias-try-y-except-de-python-como-menejar-excepciones-en-python/

[^4] : https://www.learnpython.org/es/Generators#:~:text=Los%20Generadres%20son%20usados%20para,la%20vez%2C%20de%20forma%20especial.

[^5] : https://docs.python.org/es/3/tutorial/modules.html

[^6] : https://pywombat.com/articles/tipos-metodos-python#:~:text=Ver%C3%A1s%2C%20este%20tipo%20de%20m%C3%A9todos,clase%20ni%20a%20sus%20m%C3%A9todos.

[^7] : https://docs.python.org/es/3/reference/import.html

[^8] : https://aprendeinformaticas.com/clase-abstracta-en-python/

[^9] : https://www.programadornovato.com/sobreescritura-de-metodos-override-en-python/