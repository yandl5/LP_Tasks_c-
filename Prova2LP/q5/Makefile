#Makefile for "Prova 2 LP" C++ application
#Created by Yan Carlos 06/06/2018
PROG =	exec
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11 -I/usr/exec/include/src
LDFLAGS = -L/usr/exec/lib-lmylib
OBJS =	main.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
main.o	:
	$(CC) $(CPPFLAGS) -c main.cpp
clean:
	rm -f core $(PROG) $(OBJS)
