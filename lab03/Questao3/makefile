#Makefile for "lab03" C++ application
#Created by Yan Carlos 12/05/2018
PROG =	q03
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++14 -I/usr/q03/include/src
LDFLAGS = -L/usr/q03/lib-lmylib
OBJS = movimentacao.o conta.o contaCorrente.o contaPoupanca.o banco.o main.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
movimentacao.o	:	movimentacao.h
	$(CC) $(CPPFLAGS) -c movimentacao.cpp
conta.o	:	conta.h
	$(CC) $(CPPFLAGS) -c conta.cpp
contaCorrente.o	:	contaCorrente.h
	$(CC) $(CPPFLAGS) -c contaCorrente.cpp
contaPoupanca.o	:	contaPoupanca.h
	$(CC) $(CPPFLAGS) -c contaPoupanca.cpp
banco.o	:	banco.h
	$(CC) $(CPPFLAGS) -c banco.cpp
main.o	:
	$(CC) $(CPPFLAGS) -c main.cpp
clean:
	rm -f core $(PROG) $(OBJS)
