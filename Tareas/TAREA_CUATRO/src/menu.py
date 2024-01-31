#importa clases y funciones desde sus respectivos archivos
from alergia import Alergia
from evaluacion_especifica import EvaluacionEspecifica
from tipos_alergias import TiposAlergias
from evaluacion_general import EvaluacionGeneral
from archivo import leer_archivo
from tiempo_ejecucion import medicion_tiempo

#define la funcion que imprime el menu principal
def menu_principal():
    print("\nMenu PRINCIPAL")
    print("1. Ingresar alergias y valores asociados")
    print("2. Mostrar informacion de alergias")
    print("3. Evaluar puntuacion de alergias")
    print("4. Mostrar resultados generales")
    print("5. Salir")

#se define a la funcion main
def main():
    # se lee el archivo usando la funcion y se obtiene una listaa de alergias
    alergias_lista = leer_archivo("Alergias.txt")
    #se crea una instancia de la clase EvaluacionEspecifica
    evaluacion_especifica = EvaluacionEspecifica()
    #se crea una instancia de la clase TiposAlergias
    tipos_alergias = TiposAlergias()

    # el ciclo for itera sobre cada elemento de la lista
    for nombre_alergia, valor_asociado in alergias_lista:
        Alergia(nombre_alergia, valor_asociado)

    while True: #ciclo infinito
        menu_principal() #se lllama a la funcion de menu
        #se solicita que ingrese un numero del menu
        opcion = input("\nIngrese el numero de la opcion que deseada del menu: ")

        if opcion == '1':
            #se llama al metodo ingresar_alergia de la instancia tipos_alergias
            tipos_alergias.ingresar_alergia()
        elif opcion == '2':
            #se llama al metodo que imprime la informacion de alergias de la instancia tipos_alergias
            Alergia.informacion_alergias()
        elif opcion == '3':
            try:
                #se le solicita al usuario ingresar un numero
                puntuacion_usuario = int(input("\nIngrese la puntuacion de alergia: "))
                #se obtiene la alergia del usuario
                alergias_usuario = tipos_alergias.obtener_alergias_usuario()
                #evaluacion_especifica.alergias_usuario = evaluacion_especifica.evaluar_alergias(puntuacion_usuario, alergias_usuario)
                #se mide el tiempo de ejecucion
                medicion_tiempo(evaluacion_especifica.evaluar_alergias, puntuacion_usuario)
                #se imprimen los resultados
                evaluacion_especifica.imprimir_resultados(puntuacion_usuario)
            except ValueError:
                #se imprime el mensaje, si no se ingreso numeros
                print("Opcion no valida, ingrese NUMEROS")
        elif opcion == '4':
            #se obtienen las alergias del usuario, las alergias sin puntuacion y valores sin alergia
            alergias_usuario = tipos_alergias.obtener_alergias_usuario()
            alergias_sin_puntuacion = tipos_alergias.obtener_alergias_sin_puntuacion()
            valores_sin_alergia = tipos_alergias.obtener_valores_sin_alergia()
            #se crea una instancia de la clase EvaluacionGeneral
            evaluacion_general = EvaluacionGeneral(alergias_usuario + alergias_sin_puntuacion + valores_sin_alergia)
            #se mide el tiempo de ejecucion
            medicion_tiempo(evaluacion_general.mostrar_resultados_generales)
        elif opcion == '5':
            #se imprime el mensaje
            print("Ha salido del programa.")
            break #se rompe el ciclo y se sale del programa
        else:
            #se imprime el mensaje si no se ingreso un numero
            print("Opcion no valida, ingrese una opcion del menu")

#verifica si se esta ejecutando directamente, entonces name es igual a main
if __name__ == "__main__":
    #se llama a la funcion
    main()