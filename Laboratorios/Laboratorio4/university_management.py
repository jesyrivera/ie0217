#se importan las clases Student, Teacher y Course desde los archivos en los que se encuentran
from student import Student
from teacher import Teacher
from course import Course

#crea dos instancias de la clase Student con la informacion que recibe
student1 = Student("Esteban", 43, "B30754")
student2 = Student("Maria", 28, "B35149")

#crea dos instancias de la clase Techer con la informacion que recibe
teacher1 = Teacher("Jorge Romero", 65, "123456")
teacher2 = Teacher("Luis Diego Marin", 61, "55555")

#crea dos instancias de la clase Course con la informacion que recibe
course1 = Course("IE0217", "DSA")
course2 = Course("IE0323", "CD1")

#se invoca el metodo enroll_course a la instacia student1, que matricula al estudiante en el curso
student1.enroll_course(course1.course_code)
student1.enroll_course(course2.course_code)

#se invoca el metodo assign_course a la instacia teacher1 que le asigna el curso al profesor
teacher1.assign_course(course1.course_code)
#se invoca el metodo assign_course a la instacia teacher1 que le asigna el curso al profesor
teacher2.assign_course(course2.course_code)

#se invoca el metodo display_info a la instacia student1 para que muestre la informacion del estudiante
student1.display_info()

#se invoca el metodo display_info a la instacia teacher1 para que muestre la informacion del profesor
teacher1.display_info()

#se invoca el metodo display a la instacia course1 para que muestre la informacion del curso
course1.display()