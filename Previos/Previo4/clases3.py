#crea una clase
class Room:
    #atributos
    length = 0.0
    breadth = 0.0
    #define el metodo para calcular el area
    def calculate_area(self):
        #imprime el area
        print("Area of Room =", self.length *  self.breadth)

#crea un objeto de la clase
study_room = Room()

#asigna valores a todos los atributos
study_room.length = 42.5
study_room.breadth = 30.8

#accede al metodo dentro de la clase
study_room.calculate_area()