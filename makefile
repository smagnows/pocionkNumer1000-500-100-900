CC = g++ -Wall -std=c++11 -g

all: main.o pasazer.o
	$(CC) main.o pasazer.o -o jestemPolakiem.app

main.o: main.cpp
	$(CC) main.cpp -c -o main.o

pasazer.o: pasazer.cpp pasazer.h
	$(CC) pasazer.cpp -c -o pasazer.o

clean:
	rm -f *.o *.app
