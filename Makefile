
.PHONY: lib reader writer_1 writer_2 clean

all: lib reader writer_1 writer_2

lib:
	$(MAKE) -C $@

reader: lib
	$(MAKE) -C src/$@

writer_1: lib
	$(MAKE) -C src/$@

writer_2: lib
	$(MAKE) -C src/$@
	

clean:
	$(MAKE) -C lib clean
	$(MAKE) -C src/reader clean
	$(MAKE) -C src/writer_1 clean
	$(MAKE) -C src/writer_2 clean

