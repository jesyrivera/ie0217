#no se puede sumar un string con un integer por eso se usa la conversion explicita
#se declaran las variables y se inicializan
num_string = '12'
num_integer = 23

#se imprime el tipo de dato de num_string antes de la conversion
print("Data type of num_string before Type Casting: ", type(num_string))

#conversion explicita
num_string = int(num_string)

#se imprime el tipo de dato de num_string despues de la conversion
print("Data type of num_string after Type Casting: ", type(num_string))

#ya los puedo sumar
num_sum = num_integer + num_string

#imprime el numero de conversion
print("Sum: ", num_sum)