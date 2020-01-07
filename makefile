all :
	cd programme/ && $(MAKE) && $(MAKE) doc
	cd rapport/ && $(MAKE)

prg :
	cd programme/ && $(MAKE) prg

tests :
	cd programme/ && $(MAKE) tests

doc :
	cd programme/ && $(MAKE) doc

report :
	cd rapport/ && $(MAKE) report

clean :
	cd programme/ && $(MAKE) clean
	cd rapport/ && $(MAKE) clean
