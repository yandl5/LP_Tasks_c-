#Makefile for "lab04" C++ application
#Created by Yan Carlos 28/05/2018
PROG =	q2
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11 -I/usr/q1/include/src
LDFLAGS = -L/usr/q2/lib-lmylib
OBJS = polonesa.o main.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
polonesa.o	:	polonesa.h
	$(CC) $(CPPFLAGS) -c polonesa.cpp
main.o	:	pilha.h
	$(CC) $(CPPFLAGS) -c main.cpp
clean:
	rm -f core $(PROG) $(OBJS)
