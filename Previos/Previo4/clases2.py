#define la clase
class Employee:
    #define el atributo
    employee_id = 0

# crea dos objetos de la clase
employee1 = Employee()
employee2 = Employee()

#accede a los atributos usando employee1
employee1.employeeID = 1001
#imprime el trabajador
print(f"Employee ID: {employee1.employeeID}")

#accede a los atributos usando employee2
employee2.employeeID = 1002
#imprime el trabajador
print(f"Employee ID: {employee2.employeeID}")