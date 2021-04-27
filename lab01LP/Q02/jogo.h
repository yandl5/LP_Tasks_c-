#ifndef JOGO
#define JOGO
#include "jogo.h"
#include "jogador.h"
#include <vector>

class jogo
{
private:
	std::vector <jogador> jogadores;
public:
	jogo();
	~jogo();
	int rodada();
	void addJogador();
	void eliminarPerdedores();
	void elegerGanhador();
	void procurarGanhador();
	void Jogo();
};
#endif