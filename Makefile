CFLAGS = -g 
PROJ = main

all: data.o io.o moves.o main

main: main.o 
	gcc $(CLFAGS) $(PROJ).o data.o io.o moves.o -o $(PROJ)

main.o: main.c io.h data.h moves.h
	gcc $(CFLAGS) -c $(PROJ).c -o $(PROJ).o

io.o: io.c
	gcc $(CFLAGS) -c io.c -o io.o

moves.o: moves.c
	gcc $(CFLAGS) -c moves.c -o moves.o

data.o: data.c
	gcc $(CFLAGS) -c data.c -o data.o

.PHONY: clean run

clean:
	rm *.o
	rm $(PROJ)

run: all
	./$(PROJ)

memcheck: all
	valgrind -v ./$(PROJ)