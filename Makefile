

.PHONY: logger writer install uninstall

all: logger writer

logger:
	$(MAKE) -C $@

writers:
	$(MAKE) -C $@

clean:
	$(MAKE) -C writer clean
	$(MAKE) -C logger clean

install: logger writer
	$(MAKE) -C writer install
	$(MAKE) -C logger install

uninstall:
	$(MAKE) -C writer uninstall
	$(MAKE) -C logger uninstall
