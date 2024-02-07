# Nombre del ejecutable
TARGET = practica

# Nombre de la carpeta donde se encuentran los archivos fuente
SRC_DIR = src

# Lista de archivos Python en la carpeta src
PYTHON_FILES = $(wildcard $(SRC_DIR)/*.py)

# Regla all depende de la regla del objetivo
all: datos estudiantes

# Regla para ejecutar datos.py
datos:
	python $(SRC_DIR)/datos.py

# Regla para ejecutar main_estudiantes.py
estudiantes:
	python $(SRC_DIR)/main_estudiantes.py

# Regla para limpiar archivos generados y el ejecutable
clean:
	rm -f datos_cargo.csv

# Regla para ejecutar el programa
run: datos estudiantes