# funcion anidada que ayuda a acceder a variables de funcion externa

# se define a la funcion
def greet():
    # variable definida afuera de la funcion interna
    name = "John"
    # devuelve a la funcion
    return lambda: "Hi " + name

# llama a la funcion externa
message = greet()

# llama a la funcion interna
print(message())