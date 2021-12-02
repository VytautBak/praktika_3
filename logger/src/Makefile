CC:=gcc
BIN:=logreader
SRC:=$(wildcard *.c)
OBJ:=$(SRC:.c=.o)
LDFLAGS:=-L../lib -llogger
CPPFLAGS:=-I../lib

.PHONY: all clean

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











