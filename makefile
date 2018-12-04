#

#
#MAKEFILE FOR hpd
#

# update 03 dec 2018
#	preparing to expand program 
#created 20 sep 2012


CC=gcc
CFLAGS=-Wall -O
SRC1=hpd.c
OBJ1=$(SRC1:.c=.o)

P1=hpd


#all:  $(P1) 
#	@echo created programs $(P1)  ...


	
#$(P1): $(SRC1)
#	$(CC) $(CFLAGS) -o $@ $<


#kinda lazy at moment 
build:
	gcc -Wall -g -o hpd hpd.c
	@echo -
	@echo created program $(P1)  ...
	@echo -
	
clean:
	rm $(P1)


