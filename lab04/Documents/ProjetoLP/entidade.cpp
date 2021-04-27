#include "entidade.h"
entidade::entidade(int hp,int mana):HP(hp),Mana(mana){}
entidade::~entidade(){}
int entidade::getHP()
{
	return HP;
}
int entidade::getMana()
{
	return Mana;
}
void entidade::debitarHP(int valor)
{
	if(HP>valor)
		HP=HP-valor;
	else
		HP=0;
}
void entidade::debitarMana(int valor)
{
	if(Mana>valor)
		Mana=Mana-valor;
	else
		Mana=0;
}