#ifndef JOGADOR
#define JOGADOR
#include "dado.h"
#include <random>
class jogador{
private:
	std::string nome;
	int pontuacao;
public:
	jogador(std::string Nome);
	int getPontuacao();
	std::string getNome();
	void rodada();
	void setZero();

};
#endif
