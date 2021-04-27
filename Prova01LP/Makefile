#Makefile for "prova01" C++ application
#Created by Yan Carlos 11/04/2018
PROG = prova01
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11 -I/usr/prova01/include
LDFLAGS = -L/usr/prova/lib-lmylib
OBJS = dado.o jogador.o jogo.o main.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
dado.o	:	dado.h
	$(CC) $(CPPFLAGS) -c dado.cpp
jogador.o	:	jogador.h
	$(CC) $(CPPFLAGS) -c jogador.cpp
jogo.o	:	jogo.h
	$(CC) $(CPPFLAGS) -c jogo.cpp
main.o	:
	$(CC) $(CPPFLAGS) -c main.cpp
clean:
	rm -f core $(PROG) $(OBJS)
