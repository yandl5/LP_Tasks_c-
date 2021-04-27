#Makefile for "lab03" C++ application
#Created by Yan Carlos 12/05/2018
PROG =	q02
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++14 -I/usr/q02/include/src
LDFLAGS = -L/usr/q02/lib-lmylib
OBJS = movimentacao.o conta.o banco.o main.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
movimentacao.o	:	movimentacao.h
	$(CC) $(CPPFLAGS) -c movimentacao.cpp
conta.o	:	conta.h
	$(CC) $(CPPFLAGS) -c conta.cpp
banco.o	:	banco.h
	$(CC) $(CPPFLAGS) -c banco.cpp
main.o	:
	$(CC) $(CPPFLAGS) -c main.cpp
clean:
	rm -f core $(PROG) $(OBJS)
