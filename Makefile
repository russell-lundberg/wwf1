
CC=g++
CFLAGS=-g -Wall
SRC=src
SRCS=$(wildcard $(SRC)/*.cpp)
OBJ=obj
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))
BINDIR=bin
BIN = $(BINDIR)/main
INCLUDE=-Iinclude

all:$(BIN)

release: CFLAGS=-Wall -O2 -DNDEBUG
release: clean
release: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	$(RM) -r $(BINDIR)/* $(OBJ)/*