CC = g++
FLAGS = -g -Wall -Wextra -Wunused-variable -Wuninitialized

all: Main.cc
	$(CC) $(FLAGS) -o Main Main.cc
	./Main

clean:
	rm -f Main *.o

run:
	./Main

dbg:
	gdb -q ./Main