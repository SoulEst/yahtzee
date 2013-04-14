# Compiler used to compile the program
CC=gcc

# Flags passed to the compiler when compiling
CFLAGS=-Wall -W -pedantic

# The default recipe for make
all:
	$(CC) $(CFLAGS) yahtzee.c functions.c -o yahtzee
