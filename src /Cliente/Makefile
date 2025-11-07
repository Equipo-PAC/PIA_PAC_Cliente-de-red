# Compilador y opciones
CXX = g++
CXXFLAGS = -std=c++11 -g -Wall
TARGET = cliente

# Archivos a ejcutar 
SOURCES = Cliente.cpp Conexion.cpp Manejo-Errores.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Convierte y relaciona los archivos acompilar en objetos (por cada arcvhio .cpp se crea un .o [objeto])
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS) #Enlaza el .cpp con el .o para crear el ejecutable

%.o: %.cpp #cualquier archivo .o tiene un archivo .cpp que le corresponde
	$(CXX) $(CXXFLAGS) -c $< -o $@ #el "$<" representa el .cpp y el "$@" representa el .o y el -c es para compilar los archivos

# limpiamos los archivos .o y el ejecutable para compilar 
clean:
	rm -f $(OBJECTS) $(TARGET) 

run: $(TARGET)  #se asegura de que el .cpp este actualizado  y lueo lo ejecuta
	./$(TARGET)


.PHONY: clean run 
