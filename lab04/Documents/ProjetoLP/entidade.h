#ifndef ENTIDADE
#define ENTIDADE
#include "ataque.h"
#include "esquiva.h"
#include "bloqueio.h"
#include "dado.h"
#include <string>
#include <iostream>
using namespace std;
class entidade
{
private:
	int HP;
	int Mana;
public:
	entidade(int hp,int mana);
	~entidade();
	int getHP();
	int getMana();
	void debitarHP(int valor);
	void debitarMana(int valor);
};
#endif