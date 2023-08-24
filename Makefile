
CC=g++
CFLAGS=-g -Wall -std=c++14
SRC=src
SRCS=$(wildcard $(SRC)/*.cpp)
OBJ=obj
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))
BINDIR=bin
BIN = $(BINDIR)/main
BOOST_ROOT=/home/lundberg/coding/libs/boost/1.83.0

INCLUDE=-Iinclude -I$(BOOST_ROOT)/include

LDFLAGS=

LDLIBS=-L$(BOOST_ROOT)/lib -lstdc++ -lboost_system -l:libboost_program_options.a

all:$(BIN)

release: CFLAGS=-Wall -O2 -DNDEBUG
release: clean
release: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $@

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	$(RM) -r $(BINDIR)/* $(OBJ)/*