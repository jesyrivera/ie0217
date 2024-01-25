#se define la clase
class Animal:
    #atributo y metodo
    name = ""
    #funcion
    def eat(self):
        print("i can eat")
#clase hereda Animal
class Dog(Animal):
    #nuevo metodo en subclase
    def display(self):
        #accede al nombre del atributo usando self
        print("My name is ", self.name)
#crea un objeto de subclase
labrador = Dog()
#accede a atributo de subclase y metodo
labrador.name = "Rohu"
labrador.eat()

#llama a subclase
labrador.display()