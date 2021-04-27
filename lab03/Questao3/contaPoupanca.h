#ifndef CONTAP
#define CONTAP
#include "conta.h"
class contaPoupanca : public conta
{
protected:
	double m_juros;
public:
	contaPoupanca(std::string agencia, int numero, double salario, double limite, std::string tipo);
	~contaPoupanca();
	double getJuros();
};
#endif