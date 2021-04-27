# include <iostream>
# include <iomanip>
using namespace std ;
class Tempo
{
private :
	int hh , mm , ss ;
public :
	// Le os dados do tempo a partir da entrada padrao
	void lerTempo ( void ) ;
	// Retorna o tempo em segundos
	int converteEmSegundos( void ) ;
	// Imprime o tempo no formato HH : MM : SS e o seu total
	// em segundos
	void mostraTempo ( void ) ;
};
void Tempo::lerTempo()
{
	int h,m,s;
	cout<<"Digite o tempo em horas,minutos e segundos:"<<endl;
	cin>>h>>m>>s;
	hh=h;
	mm=m;
	ss=s;
}
int Tempo::converteEmSegundos()
{
	int y;
	y=(hh*3600)+(mm*60)+ss;
	return y;
}
void Tempo::mostraTempo()
{
	int x;
	x=this->converteEmSegundos();
	cout<<"Tempo em segundos: "<<x<<endl;
}
// Implementar os metodos ...
int main ()
{
	Tempo T;
	T.lerTempo();
	T.mostraTempo();
	return 0;
}