# Parte Practica

###Instrucciones de ejecucion

En * *SOURCES* * se escribe la lista de nombres de archivos fuentes del programa, en este caso incluye dos archivos

En el * *EXECUTABLE* * se indica el nombre del archivo ejecutable que se debe de generar.

Luego siguen los compiladores y las opciones de compilacion, en el caso de * *CXX* * este establece el compilador que se va a utilizar, va ser el g++, luego con * *CXXFLAGS* * este define las opciones de compilacion, como activar todas las advertencias y especificar el estandar de C++.

En los archivos objeto, se define la lista de archivos objeto, esto se generaran a partir de los archivos fuentes. La extencion .cpp se va a cambiar por .exe.

Se escribio los objetivos, como en el caso de all y .PHONY, se especifica el objetivo que es la combinacion de las reglas build y run para el objetivo all, para el objetivo .PHONY siempre deben de ejecutarse.

Se define la regla para eliminar los archivos compilados y el ejecutable, lo unico que queda es el codigo fuente.

Se define la regla para construir el programa, * *build* * especifica un objetivo para compilar el programa. Utiliza el compilador $(CXX) con las opciones de compilación $(CXXFLAGS), el nombre del ejecutable $(EXECUTABLE) y la lista de archivos fuente $(SOURCES).

Se define run, que es la regla para ejecutar el programa con los argumentos 0 y 20.

Se definen las reglas de compilacion: '$(EXECUTABLE)' se usa para definir la regla que compile el ejecutable usando los archivos objeto especificados en objects.

# Parte Teorica

### 1. Cuál es la principal diferencia entre C y C++?

La principal diferencia es que C++ está orientado a la * *programacion orientada a objetos* *, mientras que C es un lenguaje más simple que se centra en funciones y estructuras de datos.

### 2. Cuales son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que serıa mas optimo utilizar un lenguaje compilado y otras en las que serıa mas adecuado un lenguaje interpretado

La diferencia entre estos dos es que cada uno procesa y ejecuta el codigo fuente de diferente manera. El ***compilador*** convierte todo el código fuente en código ejecutable en un solo paso antes de ejecutar el programa. El ***interprete*** procesa el código fuente línea por línea durante la ejecución del programa.

El lenguaje compilado suele ser más rapido pero el lenguaje interprete suele ser más flexible. Si se prefiere un programa que corra con rapidez, lo mejor sería utilizar un compilador.
El lenguaje interprete al ser más flexible, sería más indicado para un programa que luego necesite cambios, agregar o borrar aspectos.[1]

### 3. Explique que es un linker en el contexto de un lenguaje de programacion compilado. ¿Cual es su funcion principal y por que es esencial en el proceso de compilacion?

El linker ocurre luego de que se terminó la fase de compilación, una vez que el programa fuente fue traducido a código máquina para poder ser ejecutado.

El linker tiene la funcion de incorporar el código máquina de las funciones que provienen de las librerías utilizadas en el programa. También, tiene la tarea de llevar a cabo el proceso de enlazar los codigo fuente, generando un sólo programa ejecutable en formato .exe. Estas librerías son una compilación de código previamente programado y traducido a código máquina. [2]

### 4. Describa las diferencias clave entre los tipos de datos derivados y primarios en C++.

Los tipos datos primarios en C++ son los que están definidos dentro del lenguaje, pueden usarse para almacenar caranteres o como variables numéricas. Entre los datos primarios se encuentran: **int**, **char**, **float**, **double**, **void**, **bool**, etc. Sobre estos datos se le pueden aplicar una serie de operadores. [3]

Los tipos datos derivados en C++ son los que se forman a partir de los tipos de datos primitivos. Entre los ejemplos de tipos de datos derivados están: **funciones**, **arreglos**, **punteros**, **referencias**.

### 5. Defina que significa inicializar y declarar una variable.

Inicializar es asignarle un valor en el que debe de empezar una varible al declararla, es decir, se * *establece un valor inicial* * para esa variable, de esta forma, la variable inicia en ese valor predeterminado que se le asignó con la aplicación de un inicializador. [4]

Declarar una variable es indicarle al sistema que existe esta variable en el programa, se le especifica el nombre, tipo de variable, clase de almacenamiento y el tipo de datos de la variable. [5]


### 6. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?

La sobrecarga de funciones en C++ es la capacidad de definir más de una función con el mismo nombre en un mismo ámbito, pero con diferentes parámetros. Se puede tener múltiples funciones con el mismo nombre pero cada una acepta parámetros distintos.

Esto le permite a la persona adaptar las funciones a direntes tipo de datos o argumentos. Puede utilizar el mismo nombre y el compilador escogerá la función indicada de acuerdo al contecto de los argumentos proporcionados. [6]

### 7. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real

El puntero es una variable que almacena una dirección de memoria. Se le puede decir al puntero que donde está apuntado guarde un valor. [7]


Un ejemplo podría ser que tenga un mapa del país y que quiero la dirección de un restaurante en específico, para no tener que buscar ese restaurante, puedo usar un puntero para que apunte a la ubicación de ese restaurante.

### 8. ¿Una variable global almacena el valor original de una operacion en una funcion o una copia? Explique su respuesta. Explique por que se elige usar variables globales en lugar de locales en ciertos contextos.

Una variable global almacena el valor original de una operación en una función si la operacion se realiza directamente sobre esta variable, esto se debe a que, las variables globales tienen un espacio de memoria reservado desde que se ejecuta el programa hasta que finaliza, dado que, las variables globales puede ser accedidas desde cualquier parte del programa y conservan su valor a lo largo de la ejecución del programa. [8]

Si la variable global es tomada como parámetro de la función y sobre esta se realiza una operación dentro de una función, el valor original de la variable cambia.

El uso de variables globales no es tan recomendado, dado que, puede ser dificiles de rastrear. Es mejor utilizar variables locales porque esto ayuda a que se pueda entender mejor el código. [9]

Igualmente, como son accesibles desde cualquier parte del programa, son utilizadas para cuando se necesite compartir infomación entre diferentes funciones, también, como su valor persiste durante la ejecución del programa, puede ser útil cuando se quiera que una información persista.

### 9. Investigue y explique tres metodos comunes de la biblioteca string en C++.

Un método común es la búsqueda de subcadenas, lo que hace es buscar la primera vez que aparece la subcadena dentro de la cadena original, luego devuelve la posición en la que se encuentra.

Otro método es que permite obtener y modificar el tamaño de un string, como en el caso de arreglos, se debe de conocer el tamaño de estos, entonces si se usa ´length´ o ´size´ para que devuelva la longitud del arreglo o cadena.

El tercer método es ´empty´ nos indica si el objeto string está vacío o no, devolviendo true si está vacía o false en caso de que contenga datos. [10]

### 10. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?

La diferencia es que do_while se ejecuta una vez, luego se verifica la condición, dependiendo de si la condición es true continua, si es false se detiene, pero al menos se ejecutó una vez. Mientras que, para que ocurra el ciclo while, se debe de verificar la condición para que se ejecute.

### 11. ¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta.

En las estructuras se almacena miembros pero no funciones, no es permitido, pero puede almacenar punteros a funciones.

Sí, se puede encapsular en **miembros privados** y **miembros públicos**, esto permite controlar el acceso de los miembros de la estructura, para hacer esto se utiliza las palabras ´public´, ´privated o ´protected´ dentro de la estructura, luego se escriben los miembros.

### 12. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.

Dividir el código en archivos permite que cada archivo tenga un propósito espefícico en la estructura del código y se pueda organizar mejor dicho código.

El propósito de los archivos **Header** (.hpp) es que contiene las declaraciones de las clases, las funciones prototipo y las variables, entonces lo que hace es proporcionar las funciones y clases que se van a implementar en los archivos fuente. También, se incluyen restricciones como definir variables si no están definidas utilizando ´define´ para que no se agreguen varias veces en un único archivo .cpp. [11]

El propósito de los archivos **fuente** de código (.cpp) es el de contener la implementación de las funciones y clases que fueron declaradas en el archivo header(.hpp), donde se escribe el código como tal.

En el caso de los archivos **main.cpp**, tiene el propósito de llamar a las funciones e inicializar las varaibles.

### 13. Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza.

El Type Casting es la ***conversión*** de un tipo de dato a otro. Tiene como utilidad el de manipular los diferentes datos de un programa, si se necesita que el programa devuelva un diferente tipo de dato, se utiliza el type casting.

Puedo utilizar type casting cuando necesite hacer al conversion de tipos numéricos, se puede hacer de manera implicita:
float a = 8.0;
int b = int

De igual forma, puede realizarse de manera explicita:
float a = 2.25;
int a = (int)a;

### 14. ¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto.

La sentencia ´goto´ no es recomentable porque pude interferir con la secuencia normal de proceso, dado que, **goto** hace que el programa pueda saltar a cualquier parte de un programa, lo que provoca que sea difícil de entender la lógica del programa. Para evitar esto se puede utilizar en su lugar sentencias break y continue.

### 15. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.

Las variables se *almacenan en la memoria de la computadora*, la duración va a depender de si es variable local o global.

En el caso de *variables locales*, estas son declaradas dentro de un bloque de código dentro de una función y la variable existe únicamente dentro de este bloque, cuando se ejecuta ese bloque empieza la variable y termina cuando se finaliza ese bloque. Se almacenan en el stack.

En el caso de las *variables globales*, su duración es a lo largo de todo el programa, dado que, se mantienen completamente durante el programa, debido a que, son declaradas fuera de la función, entonces se almacenan en una ubicación fila que el compilador escoja. [12]

### 16. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?

En el caso de pasar un ***parámetro por valor***, la función recibe solo una copia del valor que se le asignó a la variable, en este caso, no puede ser modificada. Mientras que, ***pasar parámetros por referencia*** lo que hace es pasar la posición de memoria donde se almacenó la varaible, entonces en este caso la función puede conocer el valor de la variable y puede modificarla. [13]

***Pasar parámetros por punteros*** es parecido al de referencia, pero lo que hace es pasar la dirección de memoria guardada en el puntero.

### 17. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.

El puntero apunta a la primera posición de memoria del arreglo inicialmente. Para que se pueda acceder a todos los datos de ese arreglo por medio del puntero, se pude utilizar un ciclo ´for´ para iterar entre los elementos del arreglo.

### 18. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.

Los punteros dobles se usan para que el primer puntero almacene la dirección de las variables y el otro puntero es para almacenar la dirección del primer puntero. [14]

Los punteros dobles pueden servir para las situaciones donde se necesite modificar la dirección de memoria de un puntero, para cambiar o aplicarle una operación a una variable, ya que, el segundo puntero está ligado al primer puntero y el primer puntero está ligado a una variable. También pueden utilizarse para convertirlos en matrices dinámicas. [15]

### 19. ¿Cuál es la diferencia entre un break y un continue en los bucles de C++?

El ´break´ se usa para salirse de un bucle, normalmente esto pasa luego de que pasa una condición, entonces se cumple la condición y se sale de un bucle. En cuanto al ´continue´, este se usa para que siga con la siguiente parte del bucle.

### 20. ¿Para qué se utiliza la directiva #ifndef?

El ´#indef´ se usa para comprobar la existencia de identificadores definidos. Le indican al compilador que partes del programa debe compilar bajo diferentes condiciones. [16]

Si el identificador ya existe, se omite lo demás. Y si no existe entonces sigue con lo demás para definir el identificador.

### 21. ¿Qué es el puntero this en C++?

Es un puntero al que solo se puede acceder dentro de las funciones del miembro no estáticas de un tipo como clases, estructuras, etc. Este puntero lo que hace es que cuando se llama a un método de una clase, el compilador pasa el puntero ´this´ como argumento oculto al método. En el método, ´this´ apunta al objeto en el que se está ejecutando el método. La dirección del objeto está disponible desde el método como puntero ´this´. [17]

### 22. ¿Qué es un puntero nullptr?

Representa un puntero nulo. [18] 

### 23. ¿Cuál es la diferencia entre un arreglo y una lista en C++?

Un arreglo es una estructura de datos estática que almacena elementos del mismo tipo, lo hace de manera secuencial en la memoria, es decir, uno seguido del otro. La longitud del arreglo se asigna en el momento que fue declaado y no se puede cambiar cuando se ejecute. Al contrario, las listas son estructuras de datos dinámica que puden cambiar de longitud durante la ejecucción del programa. [19]

### 24. ¿Qué es una función prototipo?

Se declara una función antes de ser completada, lo que permite que el compilador la conozca de manera anticipada, antes de ser definida, antes de escribir el código que le diga que debe hacer.

### 25. ¿Investigue qué es un memory leak?

Es un error o problema en programación que sucede cuando un programa usa de manera ineficiente la memoria que fue asignada, ya que, esta no fue liberada, entonces existe una pérdida de recursos. Es cuando la memoria asignada dinámicamente no se puede liberar y no regresa al sistema, entonces pierde control sobre dicha memoria. [20]


# Parte Automatización - Makefile
## Parte teórica

### 1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?

En los makefile se utilizan esas variables para indicar configuraciones y opciones sobre la compilación de un programa, son las reglas implécitad que realiza el compilador.
CC es utilizada para indicar el compilador default
CFLAGS opciones que se pasan al compilador
CXXFLAGS contiene opciones adicionales para el compilador
LDFLAGS son opciones adicionales que se le dan al compilador cuando invocan el linker [21]

### 2. ¿De qué se compone una regla en un Makefile?

Se compone de una ***etiqueta*** que se refiere al nombre de archivo usualmente, es el archivo que se desea actualizar con esta regla. Luego, se compone de una ***dependencia*** que es un archivo que deben de estar presente antes de que la regla se ejectute. Por último, se compone de un ***comando*** que son las acciones que se ejecutan si la regla está activa, se puede ejecutar varios comandos. [22]

### 3. Defina qué es un target y cómo se relaciona con sus prerequisitos.

El target es el archivo de saliga que se desea que el programa construta, son los archivos a los que se quiere llegar. Los prerequisitos son los archivos que deben de estar antes de que el target se pueda generar. [23]

### 4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?

En algunos targets, se presenta un registro que almacena las banderas para el resultado de una operación.
´-c´ establece si hay un acarreo
´-o´ señal que indica que se ha excedido [24]

### 5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?

En un makefile las variables se definen usando el formato: nombre_variable = lista de palabras.

Para hacer referencia a una variable dentro del makefile, se utiliza $ de la forma: $(nombre_variable).

Las variables tienen la utilidad de facilitar la escritura y no tener que repetir las mismas palabras en líneas distintas. [25]

### 6. ¿Qué utilidad tiene un @ en un Makefile?

Sirve para suprimir la salida del comando. [26]

### 7. ¿Para qué se utiliza .PHONY en un Makefile?

Sirve para declarar objetivos que no representa el nombre de un archivo, es una designación para ejecutar comandos con una solicitud explícita. Se utilizan para evitar que existan conflictos con archivos que tengan el mismo nombre o para que tenga un mejor rendimiento. [27]


[^1] : https://www.freecodecamp.org/espanol/news/lenguajes-compilados-vs-interpretados/

[^2] : https://www.uhu.es/04004/material/Transparencias3.pdf

[^3] : https://ocw.bib.upct.es/pluginfile.php/7811/mod_resource/content/1/019_064_capitulo%202_TIPOS%20DE%20DATOS%20Y%20VARIABLES%20EN%20C.pdf

[^4] : https://learn.microsoft.com/es-es/cpp/c-language/initialization?view=msvc-170

[^5] : https://learn.microsoft.com/es-es/cpp/c-language/simple-variable-declarations?view=msvc-170

[^6] : https://learn.microsoft.com/es-es/cpp/cpp/function-overloading?view=msvc-170

[^7] : https://lenguajedeprogramacion.com/programacion-c/que-es-un-puntero-usos/#:~:text=Un%20puntero%20no%20es%20m%C3%A1s,valor%2C%20por%20ejemplo%20un%20n%C3%BAmero.

[^8] : https://www.fdi.ucm.es/profesor/rhermida/FC_practica4.pdf

[^9] https://ccia.ugr.es/~jfv/ed1/c/cdrom/cap6/cap62.html

[^10] : https://julioecheverri.wordpress.com/2014/07/23/el-tipo-string-y-sus-metodos-mas-importantes-en-c/

[^11] : https://learn.microsoft.com/es-es/cpp/cpp/header-files-cpp?view=msvc-170

[^12] : https://www.guru99.com/es/local-vs-global-variable.html

[^13] : https://www.oma.org.ar/omanet/cym98/valorref.htm#:~:text=Por%20referencia%20significa%20que%20se,puede%20modificarla%20de%20cualquier%20manera.

[^14] : https://sdimos.com/curso/c/c-puntero-a-puntero-puntero-doble/

[^15] : https://www.ezavalar.com/2016/06/apuntadores-dobles.html

[^16] : https://platzi.com/tutoriales/1740-lenguaje-c-2019/9015-directivas-pre-procesador/#:~:text=Las%20directivas%20%23if%2C%20%23ifdef,debe%20compilar%20bajo%20distintas%20condiciones.&text=Indicara%20el%20mensaje%20de%20error,en%20la%20que%20suceda%20realmente.

[^17] : https://learn.microsoft.com/es-es/cpp/cpp/this-pointer?view=msvc-170

[^18] : https://learn.microsoft.com/es-es/cpp/extensions/nullptr-cpp-component-extensions?view=msvc-170

[^19] : https://repositorio-uapa.cuaieed.unam.mx/repositorio/moodle/pluginfile.php/1469/mod_resource/content/1/contenido/index.html

[^20] : https://es.parasoft.com/blog/finding-memory-leaks-in-c-or-c/

[^21] : https://www.gnu.org/software/make/manual/html_node/Implicit-Variables.html

[^22] : https://www.fing.edu.uy/tecnoinf/maldonado/cursos/eda/material/otros/instructivo_make.pdf 

[^23] : https://es.linux-console.net/?p=750

[^24] : https://gcc.gnu.org/onlinedocs/gcc-6.3.0/gcc/Extended-Asm.html#Extended-Asm 

[^25] : https://www.fing.edu.uy/tecnoinf/maldonado/cursos/eda/material/otros/instructivo_make.pdf

[^26] : https://blog.desdelinux.net/que-es-un-archivo-makefile-y-como-funciona-dentro-de-linux/

[^27] : https://ftp.gnu.org/old-gnu/Manuals/make-3.79.1/html_node/make_34.html#:~:text=A%20phony%20target%20is%20one,name%2C%20and%20to%20improve%20performance.