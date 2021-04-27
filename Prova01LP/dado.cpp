#include <random>
#include "dado.h"
dado::dado(int Valor):rd(), gen(rd()), dis(1, Valor)
{
	valor_dado=std::round(dis(gen));
}
int dado::Jogar()
{
	valor_dado = std::round(dis(gen));
	return valor_dado;	
}
int dado::getValor()
{
	return valor_dado;
}