all: compilar
compilar: propiedad propietario propiedadxPropietario administracion main
	g++ -o Salida Propietario.o Propiedad.o PropiedadxPropietario.o Administracion.o Main.o
propietario: Propietario.cpp Propietario.h Propiedad.h
	g++ -c Propietario.cpp
propiedad: Propiedad.cpp Propiedad.h
	g++ -c Propiedad.cpp
propiedadxPropietario: PropiedadxPropietario.cpp Propiedad.h Propietario.h
	g++ -c PropiedadxPropietario.cpp
administracion: Propietario.h Propiedad.h PropiedadxPropietario.h Administracion.cpp Administracion.h 
	g++ -c Administracion.cpp
main: Main.cpp Propietario.h
	g++ -c main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o