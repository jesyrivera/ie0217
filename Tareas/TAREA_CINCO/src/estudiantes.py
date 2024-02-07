# se importa la biblioteca
import numpy as np


# se define a la funcion
def generar_datos():
    # se crea una lista vacia
    datos = []
    # ciclo for que itera 5 veces en cada estudiante
    for i in range(1, 6):
        # genera un arreglo numpy con 5 materias
        notas = np.random.randint(60, 100, size=5)  # Generar 5 notas aleatorias por estudiante
        # se agrega los datos a una tupla
        datos.append(("Estudiante " + str(i), notas))  # Agregar el nombre del estudiante y sus notas a la lista
    # devuelva la lista
    return datos


# se define la funcion
def calcular_promedio(datos):
    # usa la funcion np.mean para calcular el promedio de las notas
    promedio_estudiante = np.mean(datos, axis=1)
    # usa la funcion np.mean para calcular el promedio por materia
    promedio_materia = np.mean(datos, axis=0)
    # devuelve los resultados
    return promedio_estudiante, promedio_materia


# se define la funcion
def obtener_nota_alta(datos):
    #se usa la funcion np.max para obtener la nota mas alta por estudiante
    nota_alta_por_estudiante = np.max(datos, axis=1)
    # devuelve un arreglo con los resultados
    return nota_alta_por_estudiante


# se define la funcion
def calcular_suma_total(datos):
    # usa la funcion np.sum para sumar los valores de cada materia
    suma_total_materia= np.sum(datos, axis=0)
    # devuelve un arreglo con los resultados
    return suma_total_materia