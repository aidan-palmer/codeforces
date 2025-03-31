CC = g++
FLAGS = -g -Wall -Wextra -Wunused-variable -Wuninitialized

all: Main.cc
	$(CC) $(FLAGS) -o Main Main.cc
	./Main

clean:
	rm -f Main *.o

dbg:
	gdb -q --args ./Main example.txt