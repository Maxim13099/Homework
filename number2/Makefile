all: main.o realize.o realize.o
	g++ main.o realize.o -o all
main.o : main.cpp
	g++ -c main.cpp
sorts.o : realize.cpp
	g++ -c realize.cpp
clean :
	rm -rf *.o a.out
