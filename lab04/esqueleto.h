#ifndef ESQUELETO
#define ESQUELETO
#include "ataque.h"
#include "esquiva.h"
#include "bloqueio.h"
class esqueleto : public ataque,bloqueio,esquiva
{
public:
	int HP;
	int mana;
private:
	esqueleto();
	~esqueleto();
	int laminaVenenosa();
	void veuDasSombras();
}
;
#endif