#include <iostream>
#include <string>
#include "funcionario.h"
#include "data.h"
int funcionario::cont_funcionario=0;
funcionario::funcionario()
{
	nome={""};
	salario=0;	
}
funcionario::~funcionario()
{

}
//Obter nome funcionário.
std::string funcionario::getNome()
{
	return nome;
}
//Método base reajuste percentual.
void funcionario::setReajustePercentual(float _taxa)
{
	float auxiliar=1+(_taxa/100);
	salario=salario*auxiliar;
}
//sobrecarga Operador =.
funcionario& funcionario::operator=(funcionario const &t)
{
	nome=t.nome;
	return *this;
}
//Método para período de teste, usa método de data.cpp.
bool funcionario::funcionarioTeste(data entrada)
{
	int auxiliar_ano=0;
	if((this->data_admissao.getAno() - entrada.getAno())>=2)
		return false;
	else if((entrada.getAno()-this->data_admissao.getAno())==1)
		auxiliar_ano=365;

	int auxiliar_um=(data_admissao.conversorDias());
	int auxiliar_dois=entrada.conversorDias()+ auxiliar_ano;
	if((auxiliar_dois-auxiliar_um) < 90)
		return true;
	return false;
}
void funcionario::plusContador()
{
	cont_funcionario++;
}
int funcionario::getContador()
{
	return cont_funcionario;
}
//sobrecarga de input e output
std::ostream& operator<<(std::ostream &o, funcionario const t)
{
	o<<"Nome do funcionário: "<<t.nome<<std::endl<<"Salário: "<<t.salario<<std::endl<<t.data_admissao;
	return o;
}
std::istream& operator>>(std::istream &i, funcionario &t)
{
	std::cout<<"Digite o nome do funcionário:";
	i>>t.nome;
	std::cout<<"Digite o salário:";
	i>>t.salario;
	std::cout<<"Digite a data de admissao:";
	i>>t.data_admissao;
	return i;
}
