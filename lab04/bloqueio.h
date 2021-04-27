#ifndef BLOQUEIO 
#define BLOQUEIO
class bloqueio
{
private:
	int armaduraFisica;
	int armaduraRunica;
public:
	bloqueio(int armFisica, int armRunica);
	~bloqueio();
	int getArmaduraRunica();
	int getArmaduraFisica();
	void setArmaduraRunica(int x);
	void setArmaduraFisica(int y);

};
#endif