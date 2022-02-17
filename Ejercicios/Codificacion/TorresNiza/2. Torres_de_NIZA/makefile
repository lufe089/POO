all: compilar
compilar: propiedad propietario administracion main
	g++ -o Salida Propietario.o Propiedad.o Administracion.o Main.o
propietario: Propietario.cpp Propietario.h Propiedad.h
	g++ -c Propietario.cpp
propiedad: Propiedad.cpp Propiedad.h
	g++ -c Propiedad.cpp
administracion: Administracion.cpp Administracion.h Propietario.h Propiedad.h
	g++ -c Administracion.cpp
main: Main.cpp Propietario.h
	g++ -c main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o