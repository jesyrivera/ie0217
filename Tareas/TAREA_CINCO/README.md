# TAREA 5

# Instrucciiones de ejecucion

El programa se puede correr utilizando el comando 'make run', va a compilar los archivos '.py' que estan en la carpeta 'src'. Tambien, se puede el comando 'make' y va a funcionar de igual manera, va a ejecutar el programa. 

Para eliminar el archivo csv que se genero, se utiliza el comando 'make clean'.


# Parte Teorica


## Iteradores

### 1. ¿Que es un iterador en Python y cual es su proposito?

Es un metodo que itera/recorre en colecciones de datos como listas, tuplas, entre otros. Su propocito es recorrer elementos en esa coleccion y devolver elementos.

### 2. Explica la diferencia entre un iterable y un iterador.

La diferencia entre un iterador y un iterable es que el iterador implementa el metodo '__next__()' y el iterable implementa el metodo '__iter__()'. [1]


## Excepciones

### 1. Define que es una excepcion en Python.

En Python, las excepciones manejan un evento (error) que interrumpio la ejecucion del programa.

### 2. ¿Cual es el proposito de la clausula *try...except* en el manejo de excepciones?

El proposito de la clausula es manejar los errores que se generen, entonces, el bloque 'try' es el que ejecuta el codigo donde puede que se presente un error, si se presenta un error entonces pasa al bloque 'except' donde se maneja ese evento.

### 3. Explica la diferencia entre las clausulas 'except' y 'finally' en el manejo de excepciones.

El bloque 'except'se ejecuta cuando ocurre un error, mientras que, el bloque 'finally' se ejecuta siempre.


## Generadores

### 1. ¿Que es un generador en Python y cual es su ventaja sobre las listas tradicionales?

Es una funcion que devuelve un iterador que genera una secuencia de valores durante las iteraciones. La ventaja que tienen los iteradores es que son eficaces porque permiten crear secuencias grandes sin que haya que almacenar los elementos en la memoria de una vez.

### 2. Explica como se puede crear un generador usando la funcion yield.

Se crea utilizando la palabra 'def' el nombre del generador, en lugar de 'return' se utiliza 'yield'

### 3. ¿Cuando es mas apropiado usar generadores en lugar de listas?

Es mas apropiado usar generadores cuando se va a trabajar con conjuntos de datos extensos, ademas, como son datos extensos, se evita tener que almacenarlos en la memoria de una vez.


## Pandas

### 1. ¿Cual es la diferencia entre una Serie y un DataFrame en Pandas?

Una serie es unidimensional (una columna), mientras que un DataFrame es bidimensional.

### 2. Explica como manejar valores nulos o faltantes en un DataFrame.

Hay un metodo que devuelve un DataFrame si las celdas estan vacias, es el metodo 'isnull()'. Tambien, el metodo 'sum()' que se uiliza para obtener el numero de celdas vacias. [2]

### 3. ¿Cual es la diferencia entre loc y iloc en Pandas?

Ambos son utilizados para acceder a datos. El metodo 'loc' emplea etiquetas como nombres de filas o columnas, mientras que, 'iloc' se usa para indices de elementos. [3]


### Referencias

[^1] : https://recursospython.com/guias-y-manuales/iteradores-iterables-y-la-funcion-next/#:~:text=As%C3%AD%2C%20para%20dar%20una%20primera,bajo%20son%20conocidos%20como%20m%C3%A9todos

[^2] : https://www.analyticslane.com/2021/08/12/pandas-contar-los-valores-nulos-en-dataframe/

[^3] : https://www.analyticslane.com/2023/02/06/diferencias-entre-loc-e-iloc-en-pandas/



# Parte Practica

## Interpretacion de resultados

Se puede observar que en el año 2015 se tuvo el numero mas alto en el total de Carga Aerea, mientras que en el 2013 fue en el que se tuvo la menor carga aerea en comparacion a todos los demas años, pero muy similar al 2006. Tambien, se puede ver que luego de un año muy alto de carga aerea se presenta una baja significativa, como es despues del año 2015 y 2018. Todo esto se debe a cambios en la demanda de carga en ciertos años, que puede ser causado a temas economicos, guerras, entre otros.

Estos datos se pueden implementar para planificar la logistica de las cargas o para analizar la tendencia en el mercado y la efectividad de la empresa. Esto podria ser beneficioso para hacer predicciones o tomar decisiones mas adecuadas con ayuda de patrones e informacion.