

.PHONY: random_generator clean install uninstall

all: random_generator 

random_generator:
	$(MAKE) -C src/$@

clean:
	$(MAKE) -C src/random_generator clean

install: random_generator
	$(MAKE) -C src/random_generator install

uninstall:
	$(MAKE) -C src/random_generator uninstall

