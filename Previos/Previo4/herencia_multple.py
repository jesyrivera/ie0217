#se define a la clase base
class SuperClass:
    #metodo super
    def super_method(self):
        #se imprime el mensaje
        print("Super Class method called")
#define la clase derivada de la clase base
class DerivedClass1(SuperClass):
    #metodo derivado
    def derived1_method(self):
        #imprime el mensaje
        print("derived class 1 method called")

#define clase que se deriva de la clase derivada
class DerivedClass2(DerivedClass1):
    #metodo derivado
    def derived2_method(self):
        #imprime el mensaje
        print("derived class 2 method called")
		
		

#se crea un objeto de DerivedClass2
d2 = DerivedClass2()

#llama al metodo de la Super Clase
d2.super_method()

#llama al metodo de Derived class 1
d2.derived1_method()