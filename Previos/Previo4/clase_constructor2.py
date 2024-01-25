#se define la clase
class Point (object):
    #constructor __new__
    def __new__(cls,*args,**kwargs):
        #imprime el mensaje
        print("From new")
        #imprime la clase actual
        print(cls)
        #imprime los argumentso posicionales
        print(args)
        #impirme los argumentos de la palabra clave
        print(kwargs)
        #se crea el objeto y lo devuelve
        obj = super().__new__(cls)
        return obj
    #constructor funcion
    def __init__(self,x = 0, y = 0):
        #imprime el mensaje
        print("From init")
        #inicializa 'x' 'y'
        self.x = x
        self.y = y