#ifndef JOGADOR
#define JOGADOR
#include "dado.h"
#include <iostream>
#include <string>
class jogador
{
private: 
	std::string nome;
	int pontuacao;
	int pontuacaoRodada;
	static int PontuacaoMaxima;
public:
	jogador();
	std::string getNome();
	int getPontuacao();
	int getPontuacaoRodada();
	int jogarDado();
	void passarVez();
	friend std::ostream& operator<<(std::ostream &o,jogador const t);
	friend std::istream& operator>>(std::istream &i,jogador &t);	
};


#endif
