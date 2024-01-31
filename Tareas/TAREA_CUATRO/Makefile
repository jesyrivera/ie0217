# Nombre del ejecutable
TARGET = menu

# Nombre de la carpeta donde se encuentran los archivos fuente
SRC_DIR = src

# Lista de archivos Python en la carpeta src
PYTHON_FILES = $(wildcard $(SRC_DIR)/*.py)

# Regla all depende de la regla del objetivo
all: $(TARGET)

# Regla para crear el ejecutable
$(TARGET): $(PYTHON_FILES)
	python3 -m compileall -b $(SRC_DIR)
	chmod +x $(SRC_DIR)/$(TARGET).py

# Regla para limpiar archivos pyc y el ejecutable
clean:
	rm -rf $(SRC_DIR)/*.pyc $(TARGET)

# Regla para ejecutar el programa
run: $(TARGET)
	python3 $(SRC_DIR)/$(TARGET).py