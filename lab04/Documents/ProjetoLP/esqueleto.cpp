#include "esqueleto.h"
#include <iostream>
esqueleto::esqueleto():entidade(9000,30),ataque(5),bloqueio(1,2),esquiva(5),sorteio(6){}
esqueleto::~esqueleto(){}
int esqueleto::laminaVenenosa(int valor)
{
	int x=0;
	if(this->getMana()>=10)
	{
		x=this->realizarDano(valor);
		x=x+(this->getMana()/2);
		cout<<"O esqueleto disparou sua lâmina num corte sombrio!"<<endl;
		if(x<0)
		{
			x=5;
		}
		this->debitarMana(10);
	}
	else
	{
		x=this->realizarDano(valor);
		cout<<"O esqueleto disparou um ataque simples!"<<endl;
	}
	return x;
}
void esqueleto::veuDasSombras(int valor)
{
	int x,y;
	if(this->getMana()>=15)
	{
		x=(this->getArmaduraFisica())+2;
		y=(this->getArmaduraRunica())+2;
		this->debitarMana(15);
		this->setArmaduraRunica(y);
		this->setArmaduraFisica(x);
		cout<<"O esqueleto se cobriu de aura sombria, seus golpes causarão menos dano!"<<endl;
	}
	else
	{
		cout<<"O esqueleto disparou um ataque simples!"<<endl;
		this->realizarDano(valor);
	}
}
int esqueleto::realizarAtaque(int armFisica, int armRunica)
{
	int x=sorteio.Jogar();
	int valor=0;
	if(x==1)
	{
		valor=this->laminaVenenosa(armFisica);
		return valor;
	}
	else if(x==2)
	{
		this->veuDasSombras(armFisica);
		return valor;
	}
	else
	{
		cout<<"O esqueleto disparou um ataque simples!"<<endl;
		valor=this->realizarDano(armFisica);
		return valor;
	}
}