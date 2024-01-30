#importa la clase Alergia del archivo alergia
from alergia import Alergia

#se define la clase
class EvaluacionEspecifica:
    #constructor de clase
    def __init__(self):
        #inicializa con una lista vacia que almacena las alergias que ingrese el usuario
        self.alergias_usuario = []

    # se define el metodo para evaluar alergias
    def evaluar_alergias(self, puntuacion):
        #inicializa con una lista vacia que almacena las alergias evaluadas
        alergias_evaluadas = []
        #ciclo for que itera sobre todas las alergias existentes y las que ingreso el usuario
        for alergia in Alergia.obtener_alergias() + self.alergias_usuario:
            #verifica si la puntuacion es divisible por el valor asociado
            if puntuacion % alergia.valor_asociado == 0:
                #agrega la alergia a la lista de alergias evaluadas
                alergias_evaluadas.append(alergia)
        #actualiza la lista de alergias que ingresa el usuario con las alergias evaluadas
        self.alergias_usuario = alergias_evaluadas
        #devuelve la lista de alergias evaluadas
        return alergias_evaluadas

    #define el metodo para imprimir los resultados
    def imprimir_resultados(self, puntuacion):
        #imprime los mensajes
        print(f"Puntuacion General: {puntuacion}")
        print("\nAlergias:")
        #el ciclo for itera sobre las alergias que ingreso el usuario
        for alergia in self.alergias_usuario:
            #calcula la puntuacion la divide entre el valor asociado
            cantidad_evaluada = puntuacion // alergia.valor_asociado
            #imprime los datos
            print(f"{alergia.nombre_alergia}: {cantidad_evaluada}")
