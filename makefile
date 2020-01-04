all :
	cd programme/ && $(MAKE)
	cd rapport/ && $(MAKE)

clean :
	cd programme/ && $(MAKE) clean
	cd rapport/ && $(MAKE) clean
