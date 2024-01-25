#se define una lista
my_list = [1, 5, 4, 6, 8, 11, 3, 12]

#variable que guarda los numeros pares de la lista
new_list = list(filter(lambda x: (x%2 == 0), my_list))

#imprime la nueva lista con valores pares
print(new_list)