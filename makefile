
FLAGS =-Wall -g
CC = gcc #if we want to change compiler

all: connections

connections:main.o libmat.a 
	$(CC) $(FLAGS) -o connections main.o libmat.a


main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 

libmat.a:my_mat.o
	ar -rcs libmat.a my_mat.o


my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 	


.PHONY: clean
clean:
	rm -f *.o *.a *.so connections
