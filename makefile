all :
	cd programme/ && $(MAKE)
	cd rapport/ && $(MAKE)

prg :
	cd programme/ && $(MAKE) prg

tests :
	cd programme/ && $(MAKE) tests

doc :
	cd programme/ && $(MAKE) doc
	
rapport :
	cd rapport/ && $(MAKE) rapport

clean :
	cd programme/ && $(MAKE) clean
	cd rapport/ && $(MAKE) clean
