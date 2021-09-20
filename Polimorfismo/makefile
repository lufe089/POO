#
VIEW := View
CONTROLLER := Controller
MODEL := Model

all: programa
programa: persona Colaborador Estudiante Universidad view main
	g++ -o Ejecutable Persona.o Colaborador.o Estudiante.o  Universidad.o View.o Main.o
Universidad: ${MODEL}/Universidad.cpp ${MODEL}/Universidad.h ${MODEL}/Persona.h
	g++ -c ${MODEL}/Universidad.cpp
Estudiante: ${MODEL}/Estudiante.cpp ${MODEL}/Persona.h
	g++ -c ${MODEL}/Estudiante.cpp
Colaborador: ${MODEL}/Colaborador.cpp ${MODEL}/Persona.h
	g++ -c ${MODEL}/Colaborador.cpp
persona: ${MODEL}/Persona.cpp ${MODEL}/Persona.h
	g++ -c ${MODEL}/Persona.cpp
view: ${VIEW}/View.cpp ${VIEW}/View.h ${MODEL}/Universidad.h
	g++ -c ${VIEW}/View.cpp
main: Main.cpp ${VIEW}/View.h 
	g++ -c Main.cpp
delete: #comando para borrar los .o
	@echo "limpio los archivos intermediosd de las carpetas ..."+ ${MODEL} + ${VIEW}
	del *.o, del *.exe