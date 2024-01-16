# Lista de nombres de archivos fuente
SOURCES := main.cpp funciones_juego.cpp

# Nombre del archivo de salida ejecutable
EXECUTABLE := adivina.x

# Compilador de C++
CXX = g++

# Opciones de compilacion
CXXFLAGS = -Wall -std=c+11

# Archivos objeto
OBJECTS = $(SOURCES: .cpp=.exe)

# Objetivo predeterminado usando all
all: build run

.PHONY: all clean

# limpia el directorio de archivos compilados y conserva solo el codigo fuente
clean: 
	rm -f *.o $(EXECUTABLE)

# Regla para construir el programa
build: 
	$(CXX) $(CXXFLAGS) $(EXECUTABLE) $(SOURCES)

# Regla para ejecutar el programa
run:
	./$(EXECUTABLE) 0 20

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla de compilacion
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

