#se declara la funcion con dos argumentos
def add_numbers(a = 7, b = 8):
    #variable que es el resultado de la suma
    sum = a + b
    
    #imprime el mensaje y el resultado
    print('Sum:', sum)

#llama a la funcion con dos argumentos
add_numbers(2, 3)

#llama a la funcion con un argumento
add_numbers(a = 2)

#llama a la funcion sin argumentos
add_numbers()