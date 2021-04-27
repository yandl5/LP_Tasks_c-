#ifndef CONTAC
#define CONTAC
#include "conta.h"
class contaCorrente : public conta
{
protected:
	double m_taxa;
	double m_jurosNegativos;
public:
	contaCorrente(std::string agencia, int numero, double salario, double limite, std::string tipo);
	~contaCorrente();
	double getTaxa();
	double getJuros();
};
#endif
