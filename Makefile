CC = gcc
CFLAGS = "-Werror"
SRC = main.c
SRC += pascals_triangle.c
SRC += factorial.c
SRC += combinations.c
BIN = Pascal

Pascals_triangle:
        $(CC) -o $(BIN) $(SRC) $(CFLAGS)

clean:
        rm -rf $(BIN)
