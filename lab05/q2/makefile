#Makefile for "lab05" C++ application
#Created by Yan Carlos 28/05/2018
PROG =	print
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11 -I/usr/print/include/src
LDFLAGS = -L/usr/print/lib-lmylib
OBJS = main.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
main.o	:
	$(CC) $(CPPFLAGS) -c main.cpp
clean:
	rm -f core $(PROG) $(OBJS)
