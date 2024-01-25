#se declara la variable global
num = 33
#se declara una funcion externa
def outer_function():
    #se crea una variable y se inicializa
    num = 20
    #se declara una funcion interna
    def inner_function():
        #leer y modificar variable global
        num = 25
    #se imprime el mensaje y la variable global antes de ser modificada
    print("Before calling inner_function(): ", num)
    #llama a la funcion interna para que corra
    inner_function()
    #imprime el mensaje y la variable global modificada
    print("After calling inner_funcion(): ", num)

#imprime el mensaje y la variable
print("Before outer", num)

#se llama a la funcion externa
outer_function()

#se imprime el mensaje y la variable
print("Outside both function: ", num)