CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

matmulexec: main.o mathmul.o
	$(CC) -o matmulexec main.o mathmul.o $(LDFLAGS)

 mathmul.o: mathmul.c
	$(CC) -c $(CCFLAGS) mathmul.c

main.o: main.c
	$(CC) -c $(CCFLAGS) main.c

clean:
	rm -f matmulexec *.o