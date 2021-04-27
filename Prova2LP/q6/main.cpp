# include <iostream>
# include <iomanip>
using namespace std;
class Tempo
{
private :
	int hh , mm , ss , se;
public :
// Le os dados do tempo a partir da entrada padrao
	//void lerTempo(void);
// Retorna o tempo em segundos
	int converteEmSegundos(void);
// Imprime o tempo no formato HH : MM : SS e o seu total
// em segundos
	//void mostraTempo(void );
	friend ostream& operator<<(ostream &o, Tempo const t);
	friend istream& operator>>(istream &i, Tempo &t);
};
ostream& operator<<(ostream &o, Tempo const t)
{
	o<<"Seu tempo em segundos:"<<t.se<<endl;
	return o;
}
istream& operator>>(istream &i, Tempo &t)
{
	cout<<"Digite as horas, os minutos e os segundos:"<<endl;
	i>>t.hh;
	i>>t.mm;
	i>>t.ss;
	t.se = ( (t.hh*3600) + (t.mm*60) + (t.ss) );
	return i;
}
int Tempo::converteEmSegundos()
{
	int retorno = 0;
	retorno = ( (hh*3600) + (mm*60) + (ss) );
	return retorno; 
}
int main ()
{
	Tempo T;
	cin>>T;
	cout<<T;
	return 0;
}