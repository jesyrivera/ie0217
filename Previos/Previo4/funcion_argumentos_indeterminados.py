#se declara la funcion que recibe una cantidad indeterminada de argumentos
def find_sum(*numbers):
    #se declara una variable y se inicializa
    result = 0
    
    #loop for
    for num in numbers:
        result = result + num
    #imprime el mensaje y el resultado
    print("Sum = ", result)

#llama a la funcion con 3 argumentos
find_sum(1, 2, 3)

#llama a la funcion con dos argumentos
find_sum(4, 9)