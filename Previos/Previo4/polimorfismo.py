#se define la clase
class Polygon:
    #metodo render
    def render(self):
        #imprime el mensaje
        print("rendering polygon...")
#se define la clase Square que hereda la clase Polygon
class Square(Polygon):
    #metodo render
    def render(self):
        #imprime el mensaje
        print("rendering square...")
#se define la clase Circle que hereda la clase Polygon
class Circle(Polygon):
    #metodo render
    def render(self):
        #imprime el mensaje
        print("rendering circle...")

#crea un objeto del cuadrado
s1 = Square()
#se llama al metodo render de la clase Square
s1.render()

#crea un objeto del circulo
c1 = Circle()
#se llama al metodo render de la clase Circle
c1.render()