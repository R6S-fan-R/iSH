# コンパイラ設定
CC := gcc
CFLAGS := -Wall -Wextra -g -std=c11 -O0

# カレントディレクトリの main.c をターゲットに
SRC := $(CURDIR)/main.c
TARGET := $(CURDIR)/main

# デフォルトターゲット
all: $(TARGET)

# ビルドルール
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# clean
.PHONY: clean
clean:
	rm -f $(TARGET)











