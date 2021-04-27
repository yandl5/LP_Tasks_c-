#ifndef EMPRESA
#define EMPRESA
#include <string>
#include <vector>
#include "funcionario.h"
#include "data.h"
#include <iostream>

class empresa
{
private:
	std::string nomeEmpresa;
	int cnpj;
	//utilização de um vector de funcionários.
	std::vector<funcionario> empregado;
public:
	static int contEmpresa;
	empresa();
	~empresa();
	void plusContadorE();
	int getContadorE();
	void buscaEmpresa();
	void addFuncionario();
	int getCnpj();
	std::string getNome();
	bool buscaFuncionario(funcionario aux);
	empresa& operator=(empresa const &t);
	void printFuncionarios();
	void ajustarSalario(float _taxa);
	void funcionariosPeriodoTeste(data entrada);
	friend std::ostream& operator<<(std::ostream &o, empresa const t);
	friend std::istream& operator>>(std::istream &i, empresa &t);

};
#endif
