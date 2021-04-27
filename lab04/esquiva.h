#ifndef ESQUIVA
#define ESQUIVA 
#include "dado.h"
class esquiva
{
private:
	dado porcentagem;
	int rateEsquiva;
public:
	esquiva(int valor);
	~esquiva();
	bool esquivar();
};
#endif