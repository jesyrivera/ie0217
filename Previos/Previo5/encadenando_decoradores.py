# se define la funcion
def star(func):
    # se define la funcion interna
    def inner(*args, **kwargs):
        # imprime 15 asteriscos
        print("*" * 15)
        func(*args, **kwargs)
        #imprime 15 asteriscos
        print("*" * 15)
    # devuelve la funcion interna
    return inner

#se define la funcion
def percent(func):
    # se define la funcion interna
    def inner(*args, **kwargs):
        # imprime 15 porcentajes
        print("%" * 15)
        func(*args, **kwargs)
        #imprime 15 porcentajes
        print("%" * 15)
    # devuelve la funcion interna
    return inner

# decoradores
@star
@percent
def printer(msg):  # se define la funcion
    # imprime el mensaje
    print(msg)

#llama a la funcion
printer("Hello")