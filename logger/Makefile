

.PHONY: lib src clean install uninstall

all: lib src

lib:
	$(MAKE) -C $@

src: lib
	$(MAKE) -C $@

clean:
	$(MAKE) -C lib clean
	$(MAKE) -C src clean

install: lib src
	$(MAKE) -C lib install
	$(MAKE) -C src install

uninstall:
	$(MAKE) -C lib uninstall
	$(MAKE) -C src uninstall

