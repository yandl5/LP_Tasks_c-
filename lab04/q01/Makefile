#Makefile for "lab04" C++ application
#Created by Yan Carlos 28/05/2018
PROG =	q1
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11 -I/usr/q1/include/src
LDFLAGS = -L/usr/q1/lib-lmylib
OBJS = palindrome.o main.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
palindrome.o	:	palindrome.h
	$(CC) $(CPPFLAGS) -c palindrome.cpp
main.o	:	pilha.h
	$(CC) $(CPPFLAGS) -c main.cpp
clean:
	rm -f core $(PROG) $(OBJS)
