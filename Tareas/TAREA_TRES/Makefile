# Definimos el objetivo que va a ser el programa de salida
EXECUTABLE_MATRICES = matrices.exe
EXECUTABLE_CORREO = correo.exe

# Compilador de C++
CXX = g++

# Banderas de compilacion, son las opciones
CXXFLAGS = -Wall -std=c++11

# Nombres de todos los archivos fuentes para matrices
SOURCES_MATRICES = main.cpp matriz.cpp operacionesBasicas.cpp operacionCompleja.cpp imprimirMatrices.cpp

# Nombres de todos los archivos fuentes para correo
SOURCES_CORREO = maincorreo.cpp correo.cpp

# Nombre de los archivos objetos generados a partir de los SOURCES para matrices
OBJECTS_MATRICES = $(SOURCES_MATRICES:.cpp=.o)

# Nombre de los archivos objetos generados a partir de los SOURCES para correo
OBJECTS_CORREO = $(SOURCES_CORREO:.cpp=.o)

# Regla principal que va a construir y a ejecutar ambos programas
all: build_matrices build_correo run_matrices run_correo

# Regla para limpiar los archivos que se generaron
.PHONY: all clean
clean:
	del $(EXECUTABLE_MATRICES) $(OBJECTS_MATRICES)
	del $(EXECUTABLE_CORREO) $(OBJECTS_CORREO)

# Regla para construir el programa de matrices
build_matrices: $(OBJECTS_MATRICES)
	$(CXX) $(CXXFLAGS) $(OBJECTS_MATRICES) -o $(EXECUTABLE_MATRICES)

# Regla para construir el programa de correo
build_correo: $(OBJECTS_CORREO)
	$(CXX) $(CXXFLAGS) $(OBJECTS_CORREO) -o $(EXECUTABLE_CORREO)

# Regla que ejecuta el programa de matrices
run_matrices:
	$(EXECUTABLE_MATRICES)

# Regla que ejecuta el programa de correo
run_correo:
	$(EXECUTABLE_CORREO)