import random

#imprime 
print(random.randrange(10, 20))

#crea una lista
list1 = ['a', 'b', 'c', 'd', 'e']

#obtiene randoms elementos de la lista
print(random.choice(list1))

#barajea la lista list1
random.shuffle(list1)

#imprime la lista barajeada
print(list1)

#imprime elementos randoms
print(random.random())