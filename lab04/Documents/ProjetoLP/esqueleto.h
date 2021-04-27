#ifndef ESQUELETO
#define ESQUELETO
#include "entidade.h"
class esqueleto : public entidade,public ataque,public bloqueio, public esquiva
{
private:
	dado sorteio;
public:
	esqueleto();
	~esqueleto();
	int laminaVenenosa(int valor);
	void veuDasSombras(int valor);
	int realizarAtaque(int armFisica, int armRunica);
}
;
#endif