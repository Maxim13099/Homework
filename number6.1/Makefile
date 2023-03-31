all: main.o help.o help.o
	g++ main.o help.o -o all
main.o : main.cpp
	g++ -c main.cpp
help.o : help.cpp
	g++ -c help.cpp
clean :
	rm -rf *.o a.out

