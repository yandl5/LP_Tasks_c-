#include <iostream>
#include "dado.h"
#include "ataque.h"
#include "bloqueio.h"
#include "esquiva.h"
#include "esqueleto.h"
#include "viking.h"
using namespace std;
int main()
{
	esqueleto b;
	viking a("Artur viadin");
	string x;
	while(a.getHP()>0&&b.getHP()>0)
	{
		cin>>x;
		int vidaA,vidaB;
		vidaB=a.controleAtaque(x,b.getArmaduraFisica(),b.getHP());
		b.debitarHP(vidaB);
		cout<<"vida do esqueleto B: "<<b.getHP()<<endl;
		vidaA=b.realizarAtaque(a.getArmaduraFisica(),a.getArmaduraRunica());
		a.debitarHP(vidaA);
		cout<<"vida do Viking: "<<a.getHP()<<endl;
		if(a.getHP()==0)
			cout<<"Viking morreu"<<endl;
		if(b.getHP()==0)
			cout<<"Esqueleto B morreu"<<endl;
	}
	return 0;
}