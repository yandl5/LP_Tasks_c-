#include "esquiva.h"
esquiva::esquiva(int valor):porcentagem(100)
{
	rateEsquiva=valor;
}
esquiva::~esquiva(){}
bool esquiva::esquivar()
{
	porcentagem.Jogar();
	if(porcentagem.getValor()<=rateEsquiva)
		return true;
	else
		return false;
}
