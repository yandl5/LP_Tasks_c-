#include "empresa.h"
#include "data.h"
#include "funcionario.h"
#include <vector>
#include <iostream>
#include <string>
int empresa::contEmpresa=0;
empresa::empresa()
{
	nomeEmpresa={""};
	cnpj=0;
}
empresa::~empresa()
{

}
//sobrecargas dos operadores usados.
empresa& empresa::operator=(empresa const &t)
{
	cnpj=t.cnpj;
	return *this;
}
std::ostream& operator<<(std::ostream &o, empresa const t)
{
	o<<"Nome da empresa: "<<t.nomeEmpresa<<std::endl<<"CNPJ: "<<t.cnpj<<std::endl;
	
	return o;
}
std::istream& operator>>(std::istream &i, empresa &t)
{
	std::cout<<"Digite o nome da empresa:";
	i>>t.nomeEmpresa;
	std::cout<<"Digite o CNPJ:";
	i>>t.cnpj;
	return i;
}
//método pra adicionar funcionário.
void empresa::addFuncionario()
{
	funcionario aux;
	std::cin>>aux;
	if(this->buscaFuncionario(aux))
	{
		empregado.push_back(aux);
		aux.plusContador();
	}
	else
		std::cout<<"Funcionário já existe"<<std::endl;
}
//método para buscar funcionários.
bool empresa::buscaFuncionario(funcionario aux)
{
	for(size_t i=0;i<empregado.size();i++)
	{	
		if(empregado[i].getNome()==aux.getNome())
			return false;			
	}
	return true;
}
//método para exibir lista funcionários.
void empresa::printFuncionarios()
{
	std::cout<<"=============================================="<<std::endl;	
	for(size_t i=0;i<empregado.size();i++)
	{
		std::cout<<empregado[i];
		std::cout<<"=============================================="<<std::endl;	
	}
}
//método para ajustar salário usa um método base de funcionario.cpp 
void empresa::ajustarSalario(float _taxa)
{
	for(size_t i=0;i<empregado.size();i++)
	{
		empregado[i].setReajustePercentual(_taxa);
	}
}
//método que verifica funcionários em período de teste, usa métodos de funcionario e data.
void empresa::funcionariosPeriodoTeste(data entrada)
{
	for(size_t i=0;i<empregado.size();i++)
	{
		if(empregado[i].funcionarioTeste(entrada))
			std::cout<<empregado[i];
	}
}
int empresa::getCnpj()
{
	return cnpj;
}
std::string empresa::getNome()
{
	return nomeEmpresa;
}
int empresa::getContadorE()
{
	return contEmpresa;
}
void empresa::plusContadorE()
{
	contEmpresa++;
}