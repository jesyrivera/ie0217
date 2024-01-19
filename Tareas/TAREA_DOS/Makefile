# Definimos el objetivo que va a ser el programa de salida
EXECUTABLE = materiales.exe

# Compilador de C++
CXX = g++

# Banderas de compilacion, son las opciones
CXXFLAGS = -Wall -std=c++11

# Nombres de todos los archivos fuentes
SOURCES = main.cpp grupo1.cpp grupo2.cpp materialPrecio.cpp ordenamiento.cpp

# Nombre de los archivos objetos generados a partir de los SOURCES
OBJECTS = $(SOURCES:.cpp=.o)

#Patrones, crean reglas para los archivos .exe y la dependencia son los .cpp
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Regla principal que va a construir y a ejecutar
all: build run

# Regla para limpiar los archivos que se generaron
.PHONY: all clean
clean:
    del $(EXECUTABLE) $(OBJECTS)

# Regla para construir, va a compilar los OBJECTS y los relaciona con el EXECUTABLE
build: $(OBJECTS)
    $(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)

# Regla que ejecuta el programa
run:
    ./$(EXECUTABLE) 0 20
