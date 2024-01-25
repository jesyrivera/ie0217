#crea la lista
prime_numbers = [2, 3, 5]
#imprime la lista
print("List1:", prime_numbers)

#crea otra lista
even_numbers = [4, 6, 8]
#imprime la lista
print("Lista2:", even_numbers)

#une la lista
prime_numbers.extend(even_numbers)

#imprime la lista despues de unir
print("List after append:", prime_numbers)