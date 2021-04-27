#ifndef VIKING
#define VIKING 
#include "entidade.h"
class viking: public entidade,public ataque,public bloqueio, public esquiva
{
private:
	string Nome;
public:
	viking(string nome);
	~viking();
	int balancoTemerario(int valor);
	int furiaImplacavel(int valor);
	int avancoFinal(int valor);
	int controleAtaque(string valor,int armFisica,int HP);
};
#endif