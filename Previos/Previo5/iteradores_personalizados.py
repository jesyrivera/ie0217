# se define a la clase
class PowTwo:
    # constructor de la clase, inicializa los tributos
    def __init__(self, max=0):
        self.max = max
    # devuelve el propio objeto iterador
    def __iter__(self):
        self.n = 0
        return self
    # devuelve el siguiente elemento de la secuencia
    def __next__(self):
        # se verifica la condicion
        if self.n <= self.max:
            # variable almacena el resultado
            result = 2 ** self.n
            # aumenta el elemento
            self.n += 1
            #devuelve el resultado
            return result
        # si no se cumple
        else:
            # se eleva el error
            raise StopIteration