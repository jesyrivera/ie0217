# se define la clase para hacer una excepcion personalizada, hereda de Exception
class InvalidAgeException(Exception):
    pass
# se define la variable
number = 18
# bloque donde puede provocar error
try:
    # solicita un numero
    input_num = int(input("Enter a number: "))
    # verifica si se cumple la condicion
    if input_num < number:
        # se levanta la excepcion
        raise InvalidAgeException
    # si no se cumple
    else:
        # imprime el mensaje
        print("Eligible to Vote")
# bloque que maneja el error
except:
    # imprime el mensaje
    print("Exception occurred: Invalid Age")