# se importa la biblioteca
import numpy as np
# se importa el archivo estudiantes
import estudiantes

# funcion main
def main():
    # llama a la funcion generar datos (notas y estudiantes)
    datos = estudiantes.generar_datos()
    # se crea un arreglo del tipo numpy con las notas de los estudiantes
    # aqui se itera sobre la lista datos y convierte las notas de estudiantes en un arreglo
    notas_array = np.array([estudiante[1] for estudiante in datos])
    # operaciones usando NumPy
    # calcula el promedio de las notas de cada estudiante
    promedio_estudiante = np.mean(notas_array, axis=1)
    # se calcula el promedio por materia
    promedio_materia = np.mean(notas_array, axis=0)
    # se busca la nota mas alta de cada estudiante
    nota_alta_por_estudiante = np.max(notas_array, axis=1)
    # se calcula la suma total de notas de materia
    suma_total_materia = np.sum(notas_array, axis=0)
    
    # imprimir la informacion
    # se imprime la informacion
    print("\nDatos de notas:")
    # ciclo for que itera sobre la lsita datos
    for estudiante, notas in datos:
        # se imprime cada estudiante con sus notas
        print(estudiante + ":", notas)
    # se imprime el mensaje y los datos
    print("\nPromedio por estudiante:\n", promedio_estudiante)
    print("\nPromedio por materia:\n", promedio_materia)
    print("\nNota mas alta por estudiante:\n", nota_alta_por_estudiante)
    print("\nSuma total de notas por materia:\n", suma_total_materia)


# el codigo dentro del main() se ejecuta
if __name__ == "__main__":
    main()