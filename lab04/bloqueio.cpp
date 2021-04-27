#include "bloqueio.h"
bloqueio::bloqueio(int armFisica,int armRunica)
{
	armaduraRunica=armRunica;
	armaduraFisica=armFisica;
}
bloqueio::~bloqueio(){}
int bloqueio::getArmaduraRunica()
{
	return armaduraRunica;
}
int bloqueio::getArmaduraFisica()
{
	return armaduraFisica;
}
void bloqueio::setArmaduraRunica(int x)
{
	armaduraRunica=x;
}
void bloqueio::setArmaduraFisica(int y)
{
	armaduraFisica=y;
}