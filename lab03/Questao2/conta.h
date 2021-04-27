#ifndef CONTA
#define CONTA
#include "movimentacao.h"
#include <vector>
class conta
{
private:
	std::string m_agencia;
	int m_numero;
	double m_saldo;
	double m_limite;
	std::vector<movimentacao> m_transacoes;
public:
	//construtor e destrutor
	conta(std::string agencia, int numero, double salario, double limite);
	~conta();
	void setSaldo(double valor);
	//métodos getters
	std::string getAgencia();
	int getNumero();
	double getSaldo();
	double getLimite();
	std::vector<movimentacao> getTransacoes();
	void Transacao(std::string aux, double valor, std::string tipo);
	void printConta();
	void printTransacoes();

};
#endif