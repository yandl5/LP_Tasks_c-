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
	void realizarDano(int bloqueio);
	int getValorAtaque();
	int getValorDano();
	void setValorAtaque(int x);
};
#endif