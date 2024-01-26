from person import Person
#se hereda la clase Peson en la clase Teacher
class Teacher(Person):
    #metodo para inicializar los atributos
    def __init__(self, name, age, employee_id):
        #se llama al metodo de la clase Person usando super
        super().__init__(name, age)
        #se inicializa el atributo y se le asigna el valor employee_id
        self.employee_id = employee_id
        #se inicializa el atributo como una lista vacia
        self.courses_taught = []
    
    #metodo para agregar un curso a la lista
    def assign_course(self, course):
        self.courses_taught.append(course)
    
    #metodo para mostrar la infomacion
    def display_info(self):
        #llama al metodo para mostrar informacion de la clase Person usando super
        super().display_info()
        #imprime la informacion
        print(f"Employee Id: {self.employee_id}\
            \nCourses taught: {', '.join(self.courses_taught)}\n")