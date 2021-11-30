CC:=gcc
LIB:=liblogger.so
SRC:=$(wildcard *.c)
OBJ:=$(SRC:.c=.o)

PREFIX?=/usr

.PHONY: all clean install uninstall

all: $(LIB)

$(LIB): $(OBJ)
	$(CC) $(CFLAGS) -fpic -shared -o $@ $^

clean:
	$(RM) $(LIB) $(OBJ)

install: $(LIB)
	install -d $(PREFIX)/lib
	install -d $(PREFIX)/include
	install -m 644 $(LIB) $(PREFIX)/lib/$(LIB) 
	install -m 644 logger.h $(PREFIX)/include/logger.h

uninstall:
	$(RM) $(PREFIX)/lib/$(LIB)
	$(RM) $(PREFIX)/include/logger.h
