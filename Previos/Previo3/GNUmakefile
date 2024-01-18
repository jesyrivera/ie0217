#Nombre del objetivo del programa de salida
TARGET = gestion_biblioteca.exe

#Objeto predeterminado
all: $(TARGET)

#Compilador de C++
CXX = g++

#Banderas de compilacion
CXXFLAGS = -Wall -std=c++11

#Nombre de los archivos fuente
SOURCES = libro.cpp biblioteca.cpp biblioteca_main.cpp

#Nombre de archivos objetos que se generan a partir de los SOURCES
OBJECTS = $(SOURCES:.cpp=.exe)

#Patrones que son las reglas para compilar los archivos fuente en archivos objeto
%.exe: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

#Regla para compilar el programa a partir de los OBJECTS
$(TARGET): $(OBJECTS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

#Regla para limpiar los archivos que se generaron
.PHONY: clean
clean:
    del $(TARGET) $(OBJECTS)