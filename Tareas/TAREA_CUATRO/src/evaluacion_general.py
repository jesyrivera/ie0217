#se define la clase Evaluacion
class EvaluacionGeneral:
    #constructor que inicializa la instancia de la clase con la lista
    def __init__(self, alergias_evaluadas):
        self.alergias_evaluadas = alergias_evaluadas

    #metodo que calcula la puntuacion general
    def calcular_puntuacion_general(self):
        # se crea una lista que contiene instancias que contienen valores distintos a None
        alergias_con_valor = [alergia for alergia in self.alergias_evaluadas if alergia.valor_asociado is not None]
        # calcula la puntuacion general
        puntuacion_general = sum([alergia.valor_asociado for alergia in alergias_con_valor])
        #devuelve el resultado
        return puntuacion_general

    # metodo que muestra los resultados generales
    def mostrar_resultados_generales(self):
        #variable que contiene el calculo de la puntuacion general
        puntuacion_general = self.calcular_puntuacion_general()
        #imprime el mensaje y valor
        print(f"Puntuacion general: {puntuacion_general}")

        #se crea una lista de alergias existentes, valores distintos a 'None'
        alergias_conocidas = [
            alergia #esto se va a incluir en la lista nueva
            #ciclo for va a iterar sobre cada elemento en la lista alergias_evaluadas
            for alergia in self.alergias_evaluadas 
            #verifica que valor asociado y nombre de alergia sea diferente a 'None', si cumple entonces se agrega a alergias conocidas
            if alergia.valor_asociado is not None and alergia.nombre_alergia is not None
        ]

        #si existen alergias conocidas
        if alergias_conocidas:
            #imprime el mensaje
            print("\nAlergias evaluadas:")
            #ciclo for que itera sobre cada instancia en la lista
            for alergia in alergias_conocidas:
                #imprime los datos
                print(f"{alergia.nombre_alergia} ({alergia.valor_asociado})")

        #se crea la lista
        nombres_desconocidos = [
            alergia.nombre_alergia #es lo que se agrega a la lista
            #ciclo for que itera sobre cada instancia en la lista alergias_evaluadas
            for alergia in self.alergias_evaluadas
            #solo se agregan si su valor asociado es 'None' o cero
            if alergia.valor_asociado is None or alergia.valor_asociado == 0
        ]

        #se crea una nueva lista
        valores_desconocidos = [
            #es lo que se agrega a la lista
            alergia.valor_asociado 
            #ciclo for que itera sobre cada instancia en la lista alergias_evaluadas
            for alergia in self.alergias_evaluadas 
            #se agregan los valores asociados que el nombre sea 'None' o ""
            if alergia.nombre_alergia is None or alergia.nombre_alergia == ""
        ]

        #verifica si la lista tiene valores desconocidos
        if nombres_desconocidos:
            #imprime el mensaje
            print("\nResultado de nombres de alergias desconocidas:")
            #ciclo for que itera sobre cada nombre en la lista
            for nombre in nombres_desconocidos:
                #imprime el nombre
                print(f"{nombre}")
        #verifica si la lista tiene valores desconocidos
        if valores_desconocidos:
            #imprime el mensaje
            print("\nResultado de valores desconocidos:")
            #ciclo for que itera sobre cada valor en la lista
            for valor in valores_desconocidos:
                #imprime el valor
                print(f"{valor}")

        #calcula la puntuacion conocida
        puntuacion_conocida = sum([
            alergia.valor_asociado
            #ciclo for que itera sobre cada instancia de la lista
            for alergia in alergias_conocidas
            #se incluyen valores diferentes a 'None'
            if alergia.valor_asociado is not None
        ])

        #calcula la puntuacion desconocida
        puntuacion_desconocida = puntuacion_general - puntuacion_conocida

        #verifica si una variable tiene un valor diferente de cero
        if puntuacion_conocida or puntuacion_desconocida:
            #se calcula el promedio conocido, la longitud de la lista debe de ser mayor a cero, se divide la puntuacion
            #conocida entre la longitud de la lista, si no es asi entonces es cero
            if len(alergias_conocidas) > 0:
                promedio_conocido = puntuacion_conocida / len(alergias_conocidas)
            else:
                promedio_conocido = 0

            #se crea una lista
            alergias_desconocidas = [
                #se itera sobre cada elemento de alergia sobre la lista alergias_evaluadas
                alergia for alergia in self.alergias_evaluadas
                #el elemento alergia se incluye en la lista si nombre_alergia es 'None'
                #y el valor asociado es cero
                if alergia.nombre_alergia is None or alergia.valor_asociado == 0
            ]

            # se calcula la longitud de la lista (numero de alergias desconocidas)
            longitud_alergias_desconocidas = len(alergias_desconocidas)

            #si la longitud es mayor a cero se hace la division
            if longitud_alergias_desconocidas > 0:
                promedio_desconocido = puntuacion_desconocida / longitud_alergias_desconocidas
            else:
                promedio_desconocido = 0

            #imprime el mensaje y los valores
            print(f"\nPromedio de alergias conocidas: {promedio_conocido}")
            print(f"Promedio de alergias desconocidas: {promedio_desconocido}")
        else:
            print("\nNo hay alergias para mostrar resultados.")