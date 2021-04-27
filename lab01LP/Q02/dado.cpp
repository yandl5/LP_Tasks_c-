#include "dado.h"
#include <random>
dado::dado():rd(), gen(rd()), dis(1, ValorMaximo){}
dado::~dado(){}
//Sorteio do valor.
void dado::jogar_dados()
{
	valor_dado= std::round(dis(gen));
}
int dado::getValorDado()
{
	return valor_dado;
}
