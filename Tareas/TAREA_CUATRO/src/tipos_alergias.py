#importa la clase Alergia desde el archivo alergia
from alergia import Alergia

#se define la clase que hereda de la clase Alergia
class TiposAlergias(Alergia):
    #constructor que inicializa los atributos
    def __init__(self):
        self.alergias_sin_puntuacion = []#listas vacias que almacenan alergias sin valores asociados
        self.valores_sin_alergia = [] #lista vacia que almacena valores sin alergias asociadas 
        self.alergias_usuario = [] #lista vacia que almacena alergias ingresadas por el usuario

    #metodo para agregar alergias que no tienen valores asociados
    def agregar_alergia_sin_puntuacion(self, alergia):
        #se agrega a la lista
        self.alergias_sin_puntuacion.append(alergia)
    #metodo para agregar valores que no estan asociados a alergias
    def agregar_valor_sin_puntuacion(self, alergia):
        #se agrega a la lista
        self.valores_sin_alergia.append(alergia)
    
    #metodo que verifica que no existan datos duplicados en las listas de alergias
    def verificar_duplicados(self, nombre, valor): #toma tres parametros
        #ciclo for que itera sobre cada elemento de las listas
        for alergia in self.alergias_usuario + self.alergias_sin_puntuacion + self.valores_sin_alergia:
            #verifica que el nombre y el valor de la alergia son iguales a los ingresados
            if alergia.nombre_alergia == nombre and alergia.valor_asociado == valor:
                return True #si coinciden devuelve un true
        return False #si no coincide devuelve un false

    #metodo para ingresar datos
    def ingresar_alergia(self):
        nombre_ingresado = None
        valor_ingresado = None
        alergia_existente = None

        #ciclo while para el menu
        while True:
            print("\nMenu SECUNDARIO para ingresar datos")
            print("1. Ingresar el nombre de la alergia")
            print("2. Ingresar el valor asociado")
            print("3. Volver al menu principal")

            try:
                #el usuario ingresa un numero entero
                opcion = int(input("\nIngrese el numero de la opcion del menu que desea realizar: "))
            except ValueError:
                #si no ingresa un numero, se le pide de nuevo
                print("\nIngrese un NUMERO, intentelo de nuevo")
                continue

            if opcion == 1:
                #solicita ingresar el nombre de la alergia
                nombre_ingresado = input("\nIngrese el nombre de la alergia: ").capitalize()
                #si el nombre ingresado no son letras
                if not nombre_ingresado.isalpha():
                    #se imprime el mensaje donde pide un nombre valido
                        print("\nIngrese un nombre de alergia VALIDO")
                        continue #necesario para que el ciclo vuelva al inicio y el usuario pueda ingresar el dato

                # Verificar si la alergia ya existe en alergias_usuario
                alergia_existente = next((a for a in self.alergias_usuario if a.nombre_alergia == nombre_ingresado), None)

            elif opcion == 2:
                try:
                    #solicita ingresar un valor asociado entero
                    valor_ingresado = int(input("\nIngrese el valor asociado de la alergia: "))
                except ValueError:
                    #si no se ingresa un entero se imprime el mensaje
                    print("\nIngrese un NUMERO, intentelo de nuevo")
                    continue #necesario para que el ciclo vuelva al inicio y el usuario pueda ingresar el dato

            elif opcion == 3:
                break #se rompe el ciclo y se sale del menu secundario

            else:
                #si no ingresa una de esas opciones, imprime el mensaje
                print("Ingrese una opcion valida")

        # verifica si ya existe una alergia con el mismo nombre que el ingresado
        if alergia_existente:
            #se verifica que se ingresara un valor
            if valor_ingresado is not None:
                #se va a utilizar el valor asociado existente
                valor_ingresado = alergia_existente.valor_asociado
        
        else: #si no existe una alergia con ese nombre
            #se verifica que se ingrese nombre y valor
            if nombre_ingresado and valor_ingresado:
                #se crea una instancia con esos valores
                alergia = Alergia(nombre_ingresado, valor_ingresado)
                #se agregan a la lista
                self.alergias_usuario.append(alergia)
            
            elif nombre_ingresado: #si solo se ingresa el nombre de la alergia
                #se crea una instancia con el nombre y 'None' como valor
                alergia = Alergia(nombre_ingresado, None)
                #se agregan a la lista
                self.alergias_sin_puntuacion.append(alergia)
                
            elif valor_ingresado: #si solo se ingresa el valor
                #se crea una instancia con el nombre como 'None" y el valor ingresado
                alergia = Alergia(None, valor_ingresado)
                #se agrega a la lista
                self.valores_sin_alergia.append(alergia)

    #metodo para obtener la lista de las alergias ingresadas
    def obtener_alergias_usuario(self):
        #devuelve la lista
        return self.alergias_usuario
    #metodo para obtener la lista de las alergias sin valores
    def obtener_alergias_sin_puntuacion(self):
        #devuelve la lista
        return self.alergias_sin_puntuacion
    #metodo para obtener la lista de valores sin nombres de alergias
    def obtener_valores_sin_alergia(self):
        #devuelve la lista
        return self.valores_sin_alergia
    
    #metodo para imprimir los resultados
    def imprimir_resultados(self):
        #imprime el mensaje
        print("Alergias del usuario:")
        #el ciclo for va a iterar sobre cada instancia de la lista
        for alergia in self.alergias_usuario:
            #imprime los datos
            print(f"{alergia.nombre_alergia} ({alergia.valor_asociado})")
        
        #verifica si hay valores asociados en la listas de alergias sin puntuacion
        if self.alergias_sin_puntuacion:
            #imprime el mensaje
            print("\nAlergias sin valor asociado:")
            #el ciclo for itera sobre cada instancia de alergia
            for alergia in self.alergias_sin_puntuacion:
                #imprime el nombre de la alergia
                print(f"{alergia.nombre_alergia}")

        #verifica si hay valores asociados en la lista
        if self.valores_sin_alergia:
            #imprime el mensaje
            print("\nValores asociados a alergias sin nombre:")
            #el ciclo for itera sobre cada instancia de alergia en la lista
            for alergia in self.valores_sin_alergia:
                #imprime el valor asociados
                print(f"{alergia.valor_asociado}")