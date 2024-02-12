# TAREA_SEIS

# Instrucciones de ejecucion




# Parte Teorica (30 pts)
## Preguntas Teoricas

## Regresion:
1. ¿Que es la regresion lineal y como se diferencia de la regresion no lineal?

La regresion lineal es una tecnica que analiza datos y predice el valor de datos desconocidos. [1] Se establece una relacion lineal entre la variable independiente y la dependiente, la relacion es en linea recta. Mientras que la regresion no lineal en lugar de ser en linea recta, es una curva.

2. ¿Que son los coeficientes de regresion y que informacion proporcionan sobre la relacion entre las variables?

Los coeficientes son los valores que multiplican a la variable independiente en una ecuacion de regresion, los coeficientes representan el grado y tipo de relacion entre la variable dependidiente e independiente. [2]

3. ¿Que es el error cuadratico medio (MSE) y como se utiliza para evaluar la precision de un modelo de regresion?

El error cuadratico medio es una metrica que se utiliza para calcula el promedio de los errores cuadrados entre las predicciones y los valores reales. Para hacer esto, primero se realizan las predicciones del modelo, luego se calcula el error cuadratico con esos valores y los reales. 

4. ¿Cual es la diferencia entre regresion simple y regresion multiple y cuando se utiliza cada una?

En la regresion simple, se establece una relacion entre una variable independiente y una variable dependiente, entonces se utiliza cuando existe una relacion directa, mientras que, la regresion multiple establece una relacion entre una variable dependiente y multiples varialbes independientes, se utiliza cuando se tienen distintas relaciones.

## Clustering:
1. ¿Que es el clustering y cual es su objetivo principal en el analisis de datos?

Es una tecnica de aprendizaje que se utiliza para dividir un conjunto de datos en grupos dependiendo de la similitud que exista entre los elementos. Lo que hace es buscar patrones y estructuras para agruparlos.

2. Describa brevemente los algoritmos K-Means y DBSCAN y como funcionan.

El algoritmo K-Means es un metodo de agrupacion que tiene como objetivo el de dividir el conjunto de datos en k grupos basandose en las similitudes que tengan. Se selecciona de manera random k puntos centrales (centroides) iniciales (clusters), luego, a cada punto de datos se le asigna el cluster mas cercano, despues, se recalcula el centroide de cada cluster como el promedio de todos los puntos que fueron asignados a ese cluster, porteriormente, se obtienen k clusters con centroides representativos.

El algoritmo DBSCAN no requiere que se especifique el numero de clusters previamente, este puede identificarlos de formas y tamanos arbitrarios, se basa en la densidad de los puntos, puede descubrir clusters de formas irregulares, puede manejar puntos de ruido.

3. ¿Que es la inercia en el contexto del clustering y como se utiliza para evaluar la calidad de un agrupamiento?

La inercia es el punto medio de todos los puntos del cluster, es decir, es la suma de las distancias al cuadrado de cada punto del cluster al centroide. Primero se asignan los puntos a cada cluster y luego se calcula la distancia que existe entre cada punto y el centroide de su cluster. Se suman las distancias al cuadrado. [3]

4. ¿Que son los centroides y como se utilizan en el algoritmo K-Means?

Los centroides son puntos representativos de cada cluster. Se utiliza el algoritmo K-Means para asignar cada punto de datos entrante a uno de los clusteres. El algoritmo a la hora de procesar los datos de prueba, comienza inicializando los centroides, cuando los centroides se etabilizan entonces el algoritmo deja de generar y refinar los clusters. [4]

5. Escriba la diferencia entre datos estructurados y no estructurados para analisis de datos.

Los datos estructurados son datos que tienen un modelo predefinido, entonces esto los hace faciles de analizar y comprender, se puede observar la estructura, pueden facilitar la recuperacion y la utilizacion de los datos, ya sea, por una persona o un programa. Generalmente los datos se almacenan en bases de datos relacionales. [5]

Por otra parte, los datos no estrucutrados son datos que no han sido procesados y que estan almacenados en su estructura original. [5]

## Paquetes en Python ( init .py):

1. ¿Que es un paquete en Python y como se diferencia de un modulo?

Un paquete en Python es una carpeta que tiene varios modulos, mientras que, el modulo es un archivo de Python, contiene objetos y estos pueden ser accedidos desde otro archivo. [6]

2. ¿Cual es la funcion del archivo __init__.py dentro de un paquete de Python?

Contiene esa funcion para que Python entienda que es un paquete y no una carpeta. [6]

3. ¿Como se importa un modulo o funcion desde un paquete en Python?

Se escribe de las siguientes formas:

- import paquete.modulo

- from paquete import modulo

- from paquete.modulo import funcion

4. ¿Que es la variable __all__ en el archivo __init__.py y cual es su proposito?

El archivo __init__.py es usado para indicar que un directorio es un paquete de Python. Mientras que, la variable '__all__' cuando se encuentra dento del archivo mencionado anteriormente; es una lista de nombres de modulos que van a ser importados al momento de escribir 'from paquete import *' [7]

5. ¿Cual es la ventaja de organizar el codigo en paquetes y modulos en Python?

La ventaja que tienen es que se puede organizar grandes codigos. [6]


## Python HTTP y Servicios Web (API):

1. ¿Que es una API y cual es su funcion en el contexto de los servicios web?

Una Interfaz de Programacion de Aplicaciones (API) es un conjunto de reglas y definiciones que permite que aplicaciones se comuniquen por medio de la web. Por tanto, permite que las aplicaciones puedan solicitar y compartir datos.

2. ¿Cual es la diferencia entre una API RESTful y una API SOAP?

La diferencia reside en que una API SOAP tiene un enfoque altamente estructurado y el formato que utiliza es el de datos XML, al contrario, una API RESTful es mas flexible y las aplicaciones pueden utilizar multiples formados de datos. [8]

3. Describa los pasos basicos para consumir una API utilizando Python.

- Primero se accede al sitio de la API: se debe de registrar para recivir una llave que habilita el acceso [9]

- Se crea un ambiente virtual: usando el modo 'virtualenv'. Se puede instalar de la siguiente manera 'pip install virtualenv', se escribe el comando 'nombre/Scripts/Activate', se desactiva usando el comando 'deactive' [9]

- Se crea el proyecto [9]

- se utiliza el modulo requests: Se instala con el comando 'pip install requests', en el archivo se escribe 'import requests' [9]

- Se almacena la URL en una variable [9]

- Se escribe 'request.get(variable_URL)' [9]

- Se escribe una condicion 'if request.status_code == 200:' [9]

- Se accede a la informacion de manera individual [9]


4. ¿Que es la autenticacion de API y por que es importante?

Para conectarse a una API se necesita autenticacion, esto se solicita para que el servidor de la API no acepte solicitudes de fuentes desconocidas o ilegitimas. [10]

5. ¿Cual es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes a una API y HTTP?

'GET' se utiliza para obtener datos

'POST' se utiliza para enviar datos

'PUT' se usa para actualizar datos

'DELETE' es para eliminar datos


### Referencias

[^1] : https://aws.amazon.com/es/what-is/linear-regression/#:~:text=La%20regresi%C3%B3n%20lineal%20es%20una,independiente%20como%20una%20ecuaci%C3%B3n%20lineal.

[^2] : https://support.esri.com/es-es/gis-dictionary/regression-coefficient

[^3] : https://medium.com/aprendizaje-no-supervisado/clustering-cee49ad0061f

[^4] : https://learn.microsoft.com/es-es/azure/machine-learning/component-reference/k-means-clustering?view=azureml-api-2

[^5] : https://dgcloud.com.br/es/datos-estructurados-y-no-estructurados-5-diferencias-principales/

[^6] : https://tutorial.recursospython.com/modulos-y-paquetes/

[^7] : https://docs.python.org/es/3/tutorial/modules.html

[^8] : https://aws.amazon.com/es/compare/the-difference-between-soap-rest/

[^9] : https://community.listopro.com/conecta-apis-con-python/

[^10] : https://www.cloudflare.com/es-es/learning/security/api/what-is-api-security/
