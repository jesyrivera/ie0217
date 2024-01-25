#se define la clase
class Point:
    #constructor de funcion
    def __init__(self, x=0, y=0):
        #atributos
        self.x =x
        self.y = y
    #metodo para representar el objeto como string
    def __str__(self):
        return "({0},{1})".format(self.x, self.y)
    #metodo para sumar dos objetos de la clase
    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y
        #devuelve un nuevo objeto con la suma
        return Point(x, y)
#cra dos objetos de la clase
p1 = Point(1, 2)
p2 = Point(2, 3)

#imprime la suma de los dos objetos
print(p1+p2)