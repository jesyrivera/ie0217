#se define la clase
class Person:
    #se define el metodo para inicializar los atributos
    def __init__(self, name, age):
        self.name = name
        self.age = age
    #se define el metodo para imprimir la informacion
    def display_info(self):
        #imprime el nombre y la edad
        print(f"Name: {self.name}\
            \nAge: {self.age}\n")
        