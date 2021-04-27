#ifndef FUNCIONARIO 
#define FUNCIONARIO
#include "data.h"
class funcionario
{
private:
	std::string nome;
	float salario;
	data data_admissao;
	
public:
	static int cont_funcionario;
	funcionario();
	~funcionario();
	std::string getNome();
	void setReajustePercentual(float _taxa);
	void plusContador();
	int getContador();
	funcionario& operator=(funcionario const &t);
	friend std::ostream& operator<<(std::ostream &o,funcionario const t);
	friend std::istream& operator>>(std::istream &i, funcionario &t);
	bool funcionarioTeste(data entrada);
};
#endif
