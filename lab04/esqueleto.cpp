#include "esqueleto.h"
esqueleto::esqueleto():ataque(3),bloqueio(1,2),esquiva(5),HP(10),mana(30){}
esqueleto::~esqueleto(){}
int esqueleto::laminaVenenosa()
{
	int x;
	if(mana>=10){
		x=this->getDanoAtaque()+mana;
		mana=mana-10;
	}	
	return x;
}
void esqueleto::veuDasSombras()
{
	int x;
	if(mana>=7){
		x=this->getArmFisica()+(mana/2);
		this->setArmFisica(x);
		mana=mana-15;
	}
}