#se declara la variable y se inicializa
total = 0

#se le pide al usuario ingresar un numero int
number = int(input('Enter a number: '))

#ciclo while que agrega numeros hasta que el numero sea cero
while number != 0:
    total += number #total + total = number
    
    #pide al usuario ingresar un numero int
    number = int(input('Enter a number: '))

#imprime la variable total
print('total = ', total)