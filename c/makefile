CC := gcc
CFLAGS := -Wall -Wextra -g -std=c11 -O0

SRC := $(CURDIR)/main.c
TARGET := $(CURDIR)/main

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

.PHONY: clean
clean:
	rm -f $(TARGET)











