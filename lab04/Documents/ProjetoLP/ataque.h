#ifndef ATAQUE 
#define ATAQUE
class ataque
{
private:
	int ValorAtaque;
	int ValorDano;
public:
	ataque(int valor);
	~ataque();
	int realizarDano(int bloqueio);
	int getValorAtaque();
	int getValorDano();
	void setValorAtaque(int x);
};
#endif