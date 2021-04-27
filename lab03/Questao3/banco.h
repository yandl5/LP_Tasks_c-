#ifndef BANCO
#define BANCO
#include "conta.h"
#include "contaCorrente.h"
#include "contaPoupanca.h"
#include "movimentacao.h"
#include <vector>
#include <memory>
using namespace std;
class banco
{
private:
	std::vector<shared_ptr<conta> > clientes;
	int contas;
public:
	banco();
	~banco();
	void criarConta(std::string agencia, int numero, double limite,double saldo,std::string tipo);
	void excluirConta(int num);
	void print();
	void saque(int conta, double valor);
	void deposito(int conta, double valor);
	void transferencia(int contaA, int contaB,double valor);
	void extrato(int num);
	void write(int num);
};

#endif