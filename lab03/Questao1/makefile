#Makefile for "lab03" C++ application
#Created by Yan Carlos 12/05/2018
PROG =	q01
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++14 -I/usr/q01/include/src
LDFLAGS = -L/usr/q01/lib-lmylib
OBJS = produto.o fruta.o roupa.o bebida.o main.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
bebida.o	:	bebida.h
	$(CC) $(CPPFLAGS) -c bebida.cpp
roupa.o	:	roupa.h
	$(CC) $(CPPFLAGS) -c roupa.cpp
fruta.o	:	fruta.h
	$(CC) $(CPPFLAGS) -c fruta.cpp
produto.o	:	produto.h
	$(CC) $(CPPFLAGS) -c produto.cpp
main.o	:
	$(CC) $(CPPFLAGS) -c main.cpp
clean:
	rm -f core $(PROG) $(OBJS)
