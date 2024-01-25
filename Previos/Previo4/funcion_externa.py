#funcion outside
def outer():
    #se declara una variable local
    message = 'local'
    
    #dentro de la funcion, una funcion interna
    def inner():
        #se declara una variable no local
        nonlocal message
        
        #le cae encima a la variable local  y se le asigna un valor
        message = 'nonlocal'
        #se imprime el mensaje y la variable
        print("inner:", message)
    #se llama a la funcion para que se ejecute
    inner()
    #imprime el mensaje y la variable
    print("outer:", message)

#se llama a la funcion externa
outer()