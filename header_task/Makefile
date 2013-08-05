##

CC=g++

all : main.cpp test.o test.h
	$(CC) main.cpp test.o test.h -o main.bin

test.o :
	$(CC) -c test.cpp -o test.o

clean:
	rm main.bin *.o

