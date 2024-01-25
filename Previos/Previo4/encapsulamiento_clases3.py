#se define la clase
class Person:
    #constructor funcion
    def __init__(self, name, age):
        #se asigna el nombre como argumento al atributo
        self.__name = name #encapsulamiento privado 
        self.age = age #encapsulamiento privado