# bloque que corre algo que puede provocar una excepcion
try:
    # se definen variables locales
    numerator = 10
    denominator = 0
    # variable que almacena el resultado de la division
    result = numerator / denominator
    # imprime el resultado
    print(result)
except:# si existe un error
    # imprime el mensaje
    print("Error: Denominator cannot be 0")
# siempre se imprime
finally:
    # imprime el mensaje
    print("This is finally block")