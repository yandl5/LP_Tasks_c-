#include <iostream>
#include "dado.h"
#include "jogador.h"
#include "jogo.h"
int jogador::PontuacaoMaxima=50;
int main(int argc,char const *argv[])
{
	jogo a;
	a.Jogo();
	return 0;
}
//Linha de comando para compilação: g++ -Wall -pedantic -std=c++11 -o t -O0 dado.cpp jogador.cpp jogo.cpp main.cpp
