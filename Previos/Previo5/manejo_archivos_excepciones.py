# bloque que puede generar un error
try:
    # se abre el archivo
    file1 = open("test.txt", "r")
    # se lee el archivo
    read_content = file1.read()
    # imprima el contenido del mensaje
    print(read_content)
# se asegura de que se cierre el archivo
finally:
    # cierra el archivo
    file1.close()