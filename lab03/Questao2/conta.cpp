#include "conta.h"
#include <iostream>
#include <vector>
#include <string>
/**
* @brief Definição do método construtor
* @param agencia do cliente, número da conta, saldo, limite para movimentação e em seguida se estabelece as transações
*/
conta::conta(std::string agencia, int numero, double saldo, double limite):
m_agencia(agencia), m_numero(numero), m_saldo(saldo), m_limite(limite) {
	movimentacao a("Saldo inicial:",saldo," ");
	m_transacoes.push_back(a);
}
conta::~conta() {}

std::string
conta::getAgencia(){
	return m_agencia;
}

int
conta::getNumero(){
	return m_numero;
}

double
conta::getSaldo(){
	return m_saldo;
}

double 
conta::getLimite(){
	return m_limite;
}
std::vector<movimentacao>
conta::getTransacoes(){
	return m_transacoes;
}
void
conta::setSaldo(double valor){
	m_saldo=valor;
}
void 
conta::Transacao(std::string aux, double valor, std::string tipo){
	movimentacao a(aux, valor, tipo);
	this->m_transacoes.push_back(a);
}
void
conta::printConta(){
	std::cout<<m_agencia<<" "<<m_numero<<" "<<m_saldo<<" "<<m_limite;
}

void
conta::printTransacoes(){

	unsigned int i=0;
	while(i<m_transacoes.size())
	{
		std::cout<<m_transacoes[i].getDescricao()<<" "<<m_transacoes[i].getValor()<<" "<<m_transacoes[i].getIndicacao()<<std::endl;
		i++;
	}
}