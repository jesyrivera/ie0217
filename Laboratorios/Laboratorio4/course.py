#sse define la clase
class Course():
    #metodo para inicializar los atributos
    def __init__(self, course_code, course_name):
        #se inicializan los atributos
        self.course_code = course_code
        self.course_name = course_name
    
    #metodo para imprimir la informacion
    def display(self):
        #imprime los datos de la clase
        print(f"Course code: {self.course_code}\
            \nCourse name: {self.course_name}\n")