#ifndef BANCO
#define BANCO
#include "conta.h"
#include "movimentacao.h"
#include <vector>
class banco
{
private:
	std::vector<conta> clientes;
	int contas;
public:
	banco();
	~banco();
	void criarConta(std::string agencia, int numero, double limite,double saldo);
	void excluirConta(int num);
	void print();
	void saque(int conta, double valor);
	void deposito(int conta, double valor);
	void transferencia(int contaA, int contaB,double valor);
	void extrato(int num);
	void write(int num);
};

#endif