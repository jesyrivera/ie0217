# se define la funcion
def add (x, y):
    #devuelve la suma
    return x + y
# se define la funcion que tiene a una funcion como argumento
def calculate(func, x, y):
    # devuelve la funcion
    return func(x, y)
result = calculate(add, 4, 6)
# imprime el resultado
print(result)