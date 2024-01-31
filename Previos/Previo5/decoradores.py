# se define a la funcion
def make_pretty(func):
    # se define a la funcion
    def inner():
        # imprime el mensaje
        print(" I got decorated")
        func()
    #retorna la funcion interna
    return inner
# decorada mediante el decorador make_pretty
@make_pretty
def ordinary():  # se define la funcion
    # imprime el mensaje
    print("I am ordinary")

# llama a la funcion
ordinary()