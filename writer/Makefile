

.PHONY: src clean install uninstall

all: src

src:
	$(MAKE) -C $@

clean:
	$(MAKE) -C src clean

install: src
	$(MAKE) -C src install

uninstall:
	$(MAKE) -C src uninstall

