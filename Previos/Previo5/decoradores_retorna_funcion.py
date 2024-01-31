# se define la funcion
def greeting(name):
    # funcion interna
    def hello():
        # devuelve el mensaje
        return "Hello, " + name + "!"
    # devuelve la funcion
    return hello

# llama a la funcion
greet = greeting("Atlantis")
# imprime el mensaje
print(greet())