

.PHONY: lib reader writer_1 writer_2 clean

all: lib reader writer_1 writer_2

lib:
	$(MAKE) -C $@

src: lib
	$(MAKE) -C src/$@	

clean:
	$(MAKE) -C lib clean
	$(MAKE) -C src clean
install: lib
	$(MAKE) -C lib install

