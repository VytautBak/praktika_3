

.PHONY: fibonacci dalumo_skaiciuokle clean install uninstall

all: fibonacci dalumo_skaiciuokle

fibonacci:
	$(MAKE) -C src/$@

dalumo_skaiciuokle:
	$(MAKE) -C src/$@

clean:
	$(MAKE) -C src/dalumo_skaiciuokle clean
	$(MAKE) -C src/fibonacci clean

install: fibonacci
	$(MAKE) -C src/dalumo_skaiciuokle install
	$(MAKE) -C src/fibonacci install

uninstall:
	$(MAKE) -C src/dalumo_skaiciuokle uninstall
	$(MAKE) -C src/fibonacci uninstall

