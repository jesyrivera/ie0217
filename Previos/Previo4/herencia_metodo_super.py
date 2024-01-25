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
    def eat(self):
        #llama al metodo eat() usando super()
        super().eat()
        #imprime el mensaje
        print("I like to eat bones")

#crea un objeto de subclase
labrador = Dog()
#accede al metodo
labrador.eat()