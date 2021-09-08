#
VIEW := View
CONTROLLER := Controller
MODEL := Model

all: programa
programa: claseA classB classC view main
	g++ -o Ejecutable ClassA.o ClassB.o ClassC.o View.o Main.o
classC: ${MODEL}/ClassC.cpp ${MODEL}/ClassB.h ${MODEL}/ClassA.h
	g++ -c ${MODEL}/ClassC.cpp
classB: ${MODEL}/ClassB.cpp ${MODEL}/ClassB.h ${MODEL}/ClassA.h
	g++ -c ${MODEL}/ClassB.cpp
claseA: ${MODEL}/ClassA.cpp ${MODEL}/ClassA.h
	g++ -c ${MODEL}/ClassA.cpp
view: ${VIEW}/View.cpp ${VIEW}/View.h ${MODEL}/ClassA.h ${MODEL}/ClassB.h ${MODEL}/ClassC.h
	g++ -c ${VIEW}/View.cpp
main: Main.cpp ${VIEW}/View.h 
	g++ -c Main.cpp
delete: #comando para borrar los .o
	@echo "limpio los archivos intermediosd de las carpetas ..."+ ${MODEL} + ${VIEW}
	del *.o, del *.exe