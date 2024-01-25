#se crea una lista
my_list = [1, 5, 4, 6, 8, 11, 3, 12]

#se define una varaible que multiplica cada valor
new_list = list(map(lambda x: x*2, my_list))

#imprme la lista nueva
print(new_list)