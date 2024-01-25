#define a la clse
class Bike:
    #atributos
    name = ""
    gear = 0
#crea un objeto de la clase
bike1 = Bike()
#accede a los atributos y les da un nuevo valor
bike1.gear = 11
bike1.name = "mountain bike"
#imprime la clase
print(f"Name: {bike1.name}, Gears: {bike1.gear}")