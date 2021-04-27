#ifndef JOGO
#define JOGO
#include "jogador.h"
#include "dado.h"
#include <vector>
class jogo
{
private:
	std::vector<jogador> jogadores;
public:
	jogo();
	void addJogador();
	void jogar();
	void elegerGanhador();
	void zerar();
};
#endif