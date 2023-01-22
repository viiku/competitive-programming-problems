#Creating constants so that we won't to put again and again
CC=g++
CFLAGS=-c -Wall

all: output 

output: main.o hello.o Fibonacci.o
	$(CC) main.o hello.o Fibonacci.o -o output

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

hello.o: hello.cpp
	$(CC) $(CFLAGS) hello.cpp

Fibonacci.o: Fibonacci.cpp
	$(CC) $(CFLAGS) Fibonacci.cpp

clean:
	rm -rf *.o output

