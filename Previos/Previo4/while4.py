#se declara una variable y se inicializa
num = 0

#ciclo while mientras que el numero sea menor a 10
while num < 10:
    #num = num+1
    num += 1
    
    #si el modulo del numero dividido entre dos es igual a 0
    if (num % 2) == 0:
        continue
    
    #imprime el numero
    print(num)