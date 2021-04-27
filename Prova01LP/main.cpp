#include "dado.h"
#include "jogador.h"
#include "jogo.h"
#include <random>
#include <iostream>
int main()
{
	jogo a;
	a.addJogador();
	a.jogar();
	a.elegerGanhador();

	return 0;
}