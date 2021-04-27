#Makefile for "prova01" C++ application
#Created by Yan Carlos 11/04/2018
PROG =	geometria
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11 -I/usr/geometria/include/src
LDFLAGS = -L/usr/geometria/lib-lmylib
OBJS = triangulo.o quadrado.o retangulo.o circulo.o piramide.o cubo.o paralelepipedo.o esfera.o geometria.o main.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
triangulo.o	:	triangulo.h
	$(CC) $(CPPFLAGS) -c triangulo.cpp
quadrado.o	:	quadrado.h
	$(CC) $(CPPFLAGS) -c quadrado.cpp
retangulo.o	:	retangulo.h
	$(CC) $(CPPFLAGS) -c retangulo.cpp
circulo.o	:	circulo.h
	$(CC) $(CPPFLAGS) -c circulo.cpp
piramide.o	:	piramide.h
	$(CC) $(CPPFLAGS) -c piramide.cpp
cubo.o	:	cubo.h
	$(CC) $(CPPFLAGS) -c cubo.cpp
paralelepipedo.o	:	paralelepipedo.h
	$(CC) $(CPPFLAGS) -c paralelepipedo.cpp
esfera.o	:	esfera.h
	$(CC) $(CPPFLAGS) -c esfera.cpp
geometria.o	:	geometria.h
	$(CC) $(CPPFLAGS) -c geometria.cpp
main.o	:
	$(CC) $(CPPFLAGS) -c main.cpp
clean:
	rm -f core $(PROG) $(OBJS)
