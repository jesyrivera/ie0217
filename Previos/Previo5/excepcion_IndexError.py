# bloque que puede causar error
try:
    # crea una lista
    even_numbers = [2,4,6,8]
    # imprime el elemento 5 de la lista y esta fuera de rango
    print(even_numbers[5])
# bloque que maneja la excepcion
except:
    # imprime el error
    print("Index Out of Bound")