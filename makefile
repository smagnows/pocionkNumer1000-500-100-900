CC = g++ -Wall -std=c++11 -g

all: main.o pomocnicze.o
	$(CC) main.o pomocnicze.o -o jestemPolakiem.app

main.o: main.cpp
	$(CC) main.cpp -c -o main.o

pomocnicze.o: pomocnicze.cpp pomocnicze.h
	$(CC) pomocnicze.cpp -c -o pomocnicze.o

clean:
	rm -f *.o *.app
