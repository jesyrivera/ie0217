#se importa el modulo para manejar rutas de archivos
import os
#se define a la funcion que tiene como parametro el nombre del archivo
def leer_archivo(nombre_archivo):
    #lista vacia
    alergias_lista = []
    # obtiene la ruta absoluta del directorio
    directorio_actual = os.path.dirname(os.path.abspath(__file__))
    # la ruta completa al archivo
    ruta_completa = os.path.join(directorio_actual, nombre_archivo)
    #se van a manejar excepciones
    try:
        #se abre el archivo en modo lectura, la codificacion utf-8 es para que acepte tildes
        with open(ruta_completa, 'r', encoding='utf-8') as archivo:
            #el ciclo for itera entre cada linea de la variable lineas
            for linea in archivo:
                # verifica que la linea tenga el formato Nombre (valor)
                if '(' in linea and ')' in linea:
                    # se van a manejar excepciones
                    try:
                        #el nombre de la alergia y el valor asociados estan separados por ' ('
                        nombre, valor = linea.strip().split(' (')
                        #se elimina el parentesis ')' y espacios en blanco y el valor tiene que ser int
                        valor = int(valor[:-1].strip())
                        # se crea una tupla (nombre, valor)
                        alergia = (nombre.strip(), valor)
                        #se agrega la tupla a la lista
                        alergias_lista.append(alergia)
                    #si hay un error al procesar una linea se imprime el mensaje
                    except ValueError as e:
                        print(f"\nError al procesar linea {linea.strip()} {str(e)}")
                #si la linea no tiene el formato se imprime el mensaje
                else:
                    print(f"\nError: La linea no sigue el formato esperado: {linea.strip()}")
    #si hay un error al intentar abrir el archivo se imprime el mensaje
    except FileNotFoundError:
        print(f"\nEl archivo {ruta_completa} no fue encontrado.")
    #devuelve la lista despues de leer el archivo
    return alergias_lista