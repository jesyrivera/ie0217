# cuando se sale del bloque se cierra el archivo
# se abre el archivo en formato lectura
with open("test.txt", "r") as file1:
    # lee el archivo
    read_content = file1.read()
    # imprime la informacion del archivo
    print(read_content)