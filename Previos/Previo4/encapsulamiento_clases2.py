#se define la clase
class Person:
    #constructor funcion
    def __init__(self, name, age):
        #se asigna el nombre como argumento al atributo
        self._name = name #encapsulamiento protected
        self._age = age #encapsulamiento protected