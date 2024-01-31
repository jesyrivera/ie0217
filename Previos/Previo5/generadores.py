# un generador es una funcion que devuelve un iterador
# se usa yield en lugar de return

# se define la funcion
# n es el argumento
# antes del yield es el statement
def my_generator(n):
    # inicializa el contador
    value = 0
    
    # ciclo hasta que el valor sea menor a n
    while value < n:
        # devuelve el valor
        yield value
        
        # se aumenta el contador
        value += 1