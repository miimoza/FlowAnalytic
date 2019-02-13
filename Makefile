CC=g++
CXXFLAGS=-Wall -Wextra -pedantic -std=c++17 -Iinclude
BIN=flow-analytic
SRC=src/main.cc

all:
	$(CC) $(CXXFLAGS) -o $(BIN) $(SRC)

clean:
	$(RM) flow-analytic

