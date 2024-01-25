#se declara una variable global
message = 'Hello'

#se define una funcion
def greet():
    #se crea una variable locarl
    print('Local', message)

#se llama a la funcion
greet()

#se imprime el mensaje y la variable global
print('Globalr', message)