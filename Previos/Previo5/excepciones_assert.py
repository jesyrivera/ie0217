# bloque que puede provocar error
try:
    num = int(input("Enter a number: "))
    # lo que va despues del assert tiene que ser true
    assert num % 2 == 0
# bloque maneja el error
except:
    # imprime el mensaje
    print("Not an even number")
# condicional
else:
    # variable almacena la division
    reciprocal = 1/num
    # imprime el numero
    print(reciprocal)