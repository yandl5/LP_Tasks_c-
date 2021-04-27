#include "ataque.h"
ataque::ataque(int valor)
{
	ValorAtaque=valor;
}
ataque::~ataque(){}
void ataque::realizarDano(int bloqueio)
{
	ValorDano=(ValorAtaque*2)-bloqueio;
	if(ValorDano<0)
		ValorDano=0;
}
int ataque::getValorAtaque()
{
	return ValorAtaque;
}
int ataque::getValorDano()
{
	return ValorDano;
}
void ataque::setValorAtaque(int x)
{
	ValorAtaque=x;
}