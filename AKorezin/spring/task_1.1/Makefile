all: part1

part1: main.o
	g++ main.o -o app 

part2: main1.o
	g++ main1.o -o app1

main.o: main.cpp
	g++ -c main.cpp

main1.o: main1.cpp
	g++ -c main1.cpp

clean:
	rm -rf *.o app*
