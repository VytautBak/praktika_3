CC:=gcc
BIN:=writer_1
SRC:=$(wildcard *.c)
OBJ:=$(SRC:.c=.o)
LDFLAGS:=-L../../lib -llogger
CPPFLAGS:=-I../../lib

.PHONY: all clean

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	$(RM) $(BIN) $(OBJ)












