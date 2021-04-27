#include "jogo.h"
#include "dado.h"
#include "jogador.h"
#include <iostream>
jogo::jogo(){}
//Fiz dessa forma para contemplar os nomes dados.
void jogo::addJogador()
{
	for(int i=0;i<3;i++)
	{
		if(i==0)
		{
			jogador a("Alice");
			jogadores.push_back(a);
		}
		else if(i==1)
		{
			jogador a("Bob");
			jogadores.push_back(a);
		}
		else 
		{
			jogador a("Carl");
			jogadores.push_back(a);
		}
	}	
}
//Método que chama a rodada em jogador.cpp
void jogo::jogar()
{
	for(size_t i=0;i<jogadores.size();i++)
	{
		jogadores[i].rodada();
		std::cout<<jogadores[i].getNome()<<" sua pontuação foi: "<<jogadores[i].getPontuacao()<<std::endl;
	}
}
//Método que elege um ganhador
void jogo::elegerGanhador()
{
	int contador=0, win=0;
	for(size_t i=0;i<jogadores.size();i++)
	{
		contador=0;
		for(size_t j=0;j<jogadores.size();j++)
		{
			if(jogadores[i].getPontuacao() < jogadores[j].getPontuacao())
			{
				contador++;
				if(contador==2)
				{
					win=1;
					std::cout<<jogadores[i].getNome()<<" você comandará esta jornada de RPG!!!";
				}
			}
		}
	}
	//Fiz essa condição para contemplar os casos de empate.
	if(win==0)
	{
		this->zerar();
		this->jogar();
		this->elegerGanhador();
	}
}
void jogo::zerar()
{
	for(size_t i=0;i<jogadores.size();i++)
	{
		this->jogadores[i].setZero();
	}
}