#se declara una variable y se le asigna un valor
number = 0

#si el numero es mayor a 0 se cumple la condicion para imprimir ese mensaje
if number > 0:
    print('Positive number')

#si no cumple con la primera condicion pero el numero es igual a 0 se cumple la condicion para imprimir ese mensaje
elif number ==0:
    print('Zero')

#si el numero no cumple con las condiciones de arriba se imprime ese mensaje
else:
    print("Negative number")

#no tiene una condicon entonces siempre se va a imprimir
print('This statement is always executed')