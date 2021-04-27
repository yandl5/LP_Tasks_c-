#include "jogo.h"
#include "dado.h"
jogo::jogo(){}
jogo::~jogo(){}
//adiciona jogador
void jogo::addJogador()
{
	jogador auxiliar;
	std::cin>>auxiliar;
	jogadores.push_back(auxiliar);
}
//Na função rodada está compreendida a rodada do jogo na qual se faz o movimento de cada jogador e verifica-se a condição de vitória.
int jogo::rodada()
{
	//O auxiliar é o retorno que auxilia o while da chamada na função Jogo a não entrar em loop, quando se encontra um jogador o auxiliar recebe valor 0, encerrando o jogo.
	int aux=1;
	//O contador serve para veirifcar se só existe um jogador em jogo, encerrando o mesmo também.
	int cont=0;
	//Tem um problema constatado no for, no qual as vezes se faz necessário passar a vez duas vezes para aparecer o ganhador, não consegui solucionar.
	for(size_t i=0;i<jogadores.size();i++)
	{
		std::cout<<jogadores[i].getNome()<<"  "<<jogadores[i].getPontuacao()<<std::endl<<"Deseja jogar nesse turno? Digite 1 para jogar e 2 para passar a vez"<<std::endl;
		std::cin>>aux;
		if(aux==1){
			jogadores[i].jogarDado();
			std::cout<<"Você tirou:"<<jogadores[i].getPontuacaoRodada()<<std::endl;
			if(this->jogadores[i].getPontuacao()==50){
				this->procurarGanhador();
				aux=0;
			}
		}
		else if(aux==2)
		{
			jogadores[i].passarVez();
		}
		cont++;
	}
	//nesse ponto o jogador único recebe o título de ganhador.
	if(cont==1){
		this->elegerGanhador();
		return 0;
	}
	return aux;
}
//Nesse ponto o jogador q ultrapassa 50 é eliminado, através do método erase do vector.
void jogo::eliminarPerdedores()
{
	for(size_t i=0;i<jogadores.size();i++)
	{
		if(jogadores[i].getPontuacao()>50)
			jogadores.erase(jogadores.begin()+i);
	}
}
//Procura-se o ganhador.
void jogo::procurarGanhador()
{
	for(size_t i=0;i<jogadores.size();i++)
	{
		if(jogadores[i].getPontuacao()==50)
		{
			std::cout<<"Parabéns "<<jogadores[i].getNome()<<" você ganhou!";
		}
	}
}
//Nesse ponto após se constatar que existe um jogador, o mesmo é eleito ganhador.
void jogo::elegerGanhador()
{
	std::cout<<"Parabéns "<<jogadores[0].getNome()<<" você ganhou!";
}
//Uma espécie de método interface.
void jogo::Jogo()
{
	jogo a;
	int i=1,j=1;
	while(j!=0)
	{
		std::cout<<"Bem vindos ao jogo dados 50, adicione os jogadores digite 1, se já concluiu digite 0 após esta mensagem!"<<std::endl;
		std::cin>>j;
		if(j==1)
			a.addJogador();
	}
	std::cout<<"Vamos começar!"<<std::endl;
	int x=1;
	while(i!=0)
	{
		x=a.rodada();
		i=x;
		a.eliminarPerdedores();
	}
}