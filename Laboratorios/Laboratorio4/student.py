from person import Person
#se hereda la clase Person
class Student(Person):
    #se define el metodo para inicializar los atributos
    def __init__(self, name, age, student_id):
        #llama al metodo de la clase Person usando super
        super().__init__(name, age)
        #inicia el atributo student_id
        self.student_id = student_id
        #inicializa el atributo como una lista vacia
        self.courses = []
    
    #metodo para agregar cusos a la lista del atributo
    def enroll_course(self, course):
        self.courses.append(course)
    
    #metodo para mostrar la informacion del estudiante
    def display_info(self):
        #llama el metodo display_info de la clase Person
        super().display_info()
        #imprime los datos
        print(f"Student ID: {self.student_id}\
            \nCourses: {', '.join(self.courses)}\n")