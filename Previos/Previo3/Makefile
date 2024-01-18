#Definimos el objetivo que queremos, en este caso el programa de salida
TARGET = gestion_estudiantes.exe

#Compilador de C++
CXX = g++

#Banderas de compilacion
CXXFLAGS = -Wall -std=c++11

#Nombres de archivos fuentes
SOURCES = main.cpp estudiante.cpp

#Nombre de los archivos objetos generados a partir de los SOURCES
OBJECTS = $(SOURCES:.cpp=.exe)

#Patrones, crean reglas para los archivos .exe y la dependencia son los .cpp
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

#Regla para compilar a partir de los OBJECTS
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

#TARGET que limpia los archivos generados
clean:
	del $(TARGET) $(OBJECTS)
