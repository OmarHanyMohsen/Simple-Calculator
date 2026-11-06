CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11
SRC = src/main.c
TARGET = calculator

all: $(TARGET)

$(TARGET): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
		rm -f $(TARGET) *.exe *.o
