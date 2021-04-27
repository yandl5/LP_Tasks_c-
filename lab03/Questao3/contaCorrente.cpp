#include "contaCorrente.h"
/**
* @brief Construtor da classe contaCorrente, com acréscimo de parametros como taxa mensal e juros com conta negativada
* @param Os mesmos de conta
*/
contaCorrente::contaCorrente(std::string agencia, int numero, double salario, double limite, std::string tipo):
conta(agencia,numero,salario,limite,tipo),m_taxa(50.50),m_jurosNegativos(0.01) {}
contaCorrente::~contaCorrente() {}
double
contaCorrente::getTaxa(){
	return m_taxa;
}

double
contaCorrente::getJuros(){
	return m_jurosNegativos;
}