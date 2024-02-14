# Ruta al directorio donde se encuentran los archivos fuentes
SRC_DIR = scr\cars_analysis

# Regla por defecto: ejecutar el programa completo
all: run

# Regla para ejecutar el programa completo
run:
	python $(SRC_DIR)\main.py

# Regla para limpiar archivos generados
clean:
	del /s /q $(SRC_DIR)\__pycache__\* $(SRC_DIR)\*.pyc

# Regla para descargar el conjunto de datos y configurar el directorio .kaggle
setup:
	mkdir %USERPROFILE%\.kaggle
	echo "{\"username\":\"jesyrivera\",\"key\":\"6c56f63739d5db2b760ce2b9d8261109\"}" > %USERPROFILE%\.kaggle\kaggle.json

# Regla para instalar los paquetes
install:
	pip install -r requirements.txt

# Regla para crear la estructura del paquete y mover los archivos correspondientes
setup_package:
	copy paq.txt $(SRC_DIR)

# Regla para descargar el conjunto de datos y moverlo al directorio correcto dentro del paquete
download_data:
	python $(SRC_DIR)\analisis.py