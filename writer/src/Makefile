CC:=gcc
BIN:=random_generator
SRC:=$(wildcard *.c)
OBJ:=$(SRC:.c=.o)
LDFLAGS:=-L../../logger/lib -llogger
CPPFLAGS:=-I../../logger/lib

PREFIX?=/usr

.PHONY: all clean install uninstall

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	$(RM) $(BIN) $(OBJ)

install: $(BIN)
	install -d $(PREFIX)/bin
	install -m 555 $(BIN) $(PREFIX)/bin/$(BIN) 

uninstall:
	$(RM) -f $(PREFIX)/bin/$(BIN)












