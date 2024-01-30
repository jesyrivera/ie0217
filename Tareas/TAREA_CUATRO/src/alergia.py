# Se define la clase Alergia
class Alergia:
    # atributo que va a almacenar instancias
    alergias_lista = []
    
    # constructor de la clase, se inicializa con el nombre de la alergia y valor asociado
    def __init__(self, nombre_alergia, valor_asociado):
        self.nombre_alergia = nombre_alergia
        self.valor_asociado = valor_asociado
        Alergia.alergias_lista.append(self)
 
    @classmethod #decorador que indica que el metodo pertenece a la clase
    def obtener_alergias():# se define el metodo de clase
        #retorna el atributo de la clase
        return Alergia.alergias_lista
    
    @staticmethod #decorador que indica que es un metodo estatico y que pertenece a la clase
    # no requiere de la instancia self para llamarlo
    def informacion_alergias():# define el metodo de clase
        #ordena la lista, la funcion lambda com clave de ordenamiento
        sorted_alergias = sorted(Alergia.alergias_lista, key=lambda x: x.valor_asociado)
        #el bucle for para iterar entre la lista ordenada
        for alergia in sorted_alergias:
           #imprime la informacion de cada una las alergias, accede al atributo nombre_alergia y valor_asociado de la instancia
            print(f"{alergia.nombre_alergia} ({alergia.valor_asociado})")
    
    @staticmethod#decorador que indica que es un metodo estatico y que pertenece a la clase
    # no requiere de la instancia self para llamarlo
    def info_alergia_especifica(nombre_alergia): #define el metodo de clase
        #el ciclo for va a iterar entre la lista
        for alergia in Alergia.alergias_lista:
            # compara el nombre de la alergia
            if alergia.nombre_alergia.capitalize() == nombre_alergia.capitalize():
                # imprime la informacion de la alergia encontrada
                print(f"{alergia.nombre_alergia} ({alergia.valor_asociado})")
                return
        #si no se encontro la alergia se imprime el mensaje
        print(f"No se encontro la alergia con el nombre: {nombre_alergia}")