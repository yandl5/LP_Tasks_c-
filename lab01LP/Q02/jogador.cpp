#include "jogador.h"
#include "dado.h"
#include <string>
jogador::jogador()
{
	nome={""};
	pontuacao=0;
}
std::string jogador::getNome()
{ 
	return nome;
}
int jogador::getPontuacaoRodada()
{
	return pontuacaoRodada;
}
int jogador::getPontuacao()
{
	return pontuacao;
}
//Nesse ponto se faz o sorteio duas vezes dos dados e se obtém os valores de 2 a 12.
int jogador::jogarDado()
{
	int auxiliar=0;;
	dado Dado;
	Dado.jogar_dados();
	auxiliar=Dado.getValorDado();
	Dado.jogar_dados();
	auxiliar=auxiliar+Dado.getValorDado();
	pontuacao=pontuacao+auxiliar;
	pontuacaoRodada=auxiliar;
	return auxiliar;
}
//Passa a vez
void jogador::passarVez()
{
	pontuacao=pontuacao;
}
//Sobrecargas dos operadores.
std::ostream& operator<<(std::ostream &o, jogador const t)
{
	o<<t.nome<<" Pontuação total=>"<<t.pontuacao<<std::endl;
	return o;
}
std::istream& operator>>(std::istream &i, jogador &t)
{
	std::cout<<"Digite o nome do jogador:";
	i>>t.nome;
	std::cout<<"Que os jogos comecem, boa sorte!"<<std::endl;
	return i;
}

