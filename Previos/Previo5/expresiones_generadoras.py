# se crea un objeto generador
squares_generator = (i * i for i in range(5))

# iterador sobre el generador
for i in squares_generator:
    # imprime los valores
    print(i)