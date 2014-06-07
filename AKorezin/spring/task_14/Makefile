all: main 

main: main.o
	g++ -pthread main.o -o app 

main.o: main.cpp
	g++ -c -pthread main.cpp

clean:
	rm -rf *.o app*
