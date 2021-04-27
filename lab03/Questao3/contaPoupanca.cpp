#include "contaPoupanca.h"
/**
* @brief Método para construir a classe contaPoupanca, com acréscimo dos juros que o cliente ganha mensalmente.
* @param Os mesmos parâmetros de contra
*/
contaPoupanca::contaPoupanca(std::string agencia, int numero, double salario, double limite, std::string tipo):
conta(agencia,numero,salario,limite,tipo),m_juros(0.001) {}
contaPoupanca::~contaPoupanca() {}
double 
contaPoupanca::getJuros(){
	return m_juros;
}