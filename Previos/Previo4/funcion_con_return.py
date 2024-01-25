#se declara una funcion con un argumento
def find_square(num):
    #se crea una variable que es el resultado de la suma
    result = num * num
    #devuelve el resultado
    return result

#llama a la funcion
square = find_square(3)

#imprime el mensaje y la raiz
print('Square:', square)