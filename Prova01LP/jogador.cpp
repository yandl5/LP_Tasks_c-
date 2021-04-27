#include "jogador.h"
#include <random>
jogador::jogador(std::string Nome)
{
	nome=Nome;
	pontuacao=0;
}
int jogador::getPontuacao()
{
	return pontuacao;
}
//Criar 5 dados de valores diferentes e pegar a pontuação total deles.
void jogador::rodada()
{
	dado a(3),b(6),c(8),d(12), e(20);
	a.Jogar(),b.Jogar(),c.Jogar(),d.Jogar(),e.Jogar();
	pontuacao=pontuacao+a.getValor()+b.getValor()+c.getValor()+d.getValor()+e.getValor();
}
std::string jogador::getNome()
{
	return nome;
}
//utilizado para caso de empates, para que se faça outra rodada.
void jogador::setZero()
{
	pontuacao=0;
}
