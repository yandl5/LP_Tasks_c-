#include "viking.h"
viking::viking(string nome):entidade(225,80),ataque(25),bloqueio(5,3),esquiva(20), Nome(nome){}
viking::~viking(){}
int viking::balancoTemerario(int valor)
{
	if(this->getMana()>5)
	{
		cout<<"O viking arremessou seu machado na critura ignorando completamente sua defesa!"<<endl;
		this->debitarMana(5);
		return 20;
	}
	else
	{
		cout<<"O viking não tem energia para esse golpe, ele hesita e dispara um ataque normal"<<endl;
		return this->realizarDano(valor);
	}
}
int viking::furiaImplacavel(int valor)
{
	if(this->getHP()>30)
	{
		cout<<"O viking usa o peso do seu corpo sem se preocupar com nada, e causa dano ao monstro!"<<endl;
		this->debitarHP(30);
		return (this->getValorAtaque()*2);
	}
	else
		cout<<"O viking não tem forças para esse golpe, ele hesita e dispara um ataque normal"<<endl;
		return this->realizarDano(valor);
}
int viking::avancoFinal(int valor)
{
	if(this->getHP()>150)
	{
		cout<<"O viking prepara um golpe letal que mata seu alvo e consome boa parte de sua vida"<<endl;
		this->debitarHP(150);
		return valor;
	}
	else
	{
		cout<<"O viking não tem forças para esse golpe, ele hesita e dispara um ataque normal"<<endl;
		return this->realizarDano(valor);
	}

}
int viking::controleAtaque(string valor,int armFisica,int HP)
{
	int dano=0;
	if(valor=="1")
	{
		cout<<"O viking ataca com um ataque simples!"<<endl;
		dano=this->realizarDano(armFisica);
	}
	else if(valor=="2")
	{
		dano=this->balancoTemerario(armFisica);
	}
	else if(valor=="3")
	{
		dano=this->furiaImplacavel(armFisica);
	}
	else if(valor=="4")
	{
		dano=this->avancoFinal(HP);
	}
	return dano;
}