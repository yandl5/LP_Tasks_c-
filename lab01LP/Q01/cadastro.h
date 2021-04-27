#ifndef CADASTRO
#define CADASTRO
#include "empresa.h"
#include <vector>

class cadastro
{
private:
	std::vector <empresa> bancoEmpresas;

public:
	cadastro();
	~cadastro();
	void addEmpresa();
	void printEmpresas();
	int buscarEmpresa(int Cnpj);
	void programa();
};
#endif