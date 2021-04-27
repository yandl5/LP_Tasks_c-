#include "cadastro.h"
#include "empresa.h"
cadastro::cadastro(){}
cadastro::~cadastro(){}
//adicionar empresa.
void cadastro::addEmpresa()
{
	empresa aux;
	std::cin>>aux;
	bancoEmpresas.push_back(aux);
	aux.plusContadorE();
}
//exibir dados da empresa.
void cadastro::printEmpresas()
{
	for(size_t i=0;i<bancoEmpresas.size();i++)
	{
		std::cout<<"****************************************************************"<<std::endl;
		std::cout<<bancoEmpresas[i];
		std::cout<<"****************************************************************"<<std::endl;
		std::cout<<"----------------------------------------------------------------"<<std::endl;
		bancoEmpresas[i].printFuncionarios();
		std::cout<<"----------------------------------------------------------------"<<std::endl;
	}
	if(bancoEmpresas.size()==0)
		std::cout<<"nenhuma empresa adicionada"<<std::endl;
}
//Realizar busca de empresas.
int cadastro::buscarEmpresa(int Cnpj)
{
	for(size_t i=0;i<bancoEmpresas.size();i++)
	{
		if(bancoEmpresas[i].getCnpj()==Cnpj)
			return i;
	}
	return -1;
}
//Interface básica no terminal que chama outros métodos já citados.
void cadastro::programa()
{
	int i=1;
	cadastro b;
	std::cout<<"Bem vindo!"<<std::endl;
	while(i!=0)
	{
		if(i==1)
		{
			std::cout<<"............................................................."<<std::endl;
			std::cout<<"Menu de gerenciamento de empresas:"<<std::endl;
			std::cout<<"	-Deseja entrar no menu de determinada empresa? Digite 2"<<std::endl;
			std::cout<<"	-Deseja exibir a lista de empresas? Digite 3"<<std::endl;
			std::cout<<"	-Deseja criar uma nova empresa? Digite 4"<<std::endl;
			empresa a;
			funcionario b;
			std::cout<<"............................................................."<<std::endl;
			int aux;
			std::cin>>aux;
			i=aux;
		}
		else if(i==2)
		{			
			std::cout<<"Digite o Cnpj da empresa, se quiser retornar digite 1"<<std::endl;
			int aux;
			std::cin>>aux;
			if(aux==1)
				i=1;
			else
				aux=this->buscarEmpresa(aux);
			if(aux==-1)
				std::cout<<"Cnpj inválido"<<std::endl;
			else
			{	
				std::cout<<"............................................................."<<std::endl;
				std::cout<<std::endl;
				std::cout<<"Guia da empresa:"<<std::endl;
				std::cout<<this->bancoEmpresas[aux];
				this->bancoEmpresas[aux].printFuncionarios();
				int j=1;
				while(j!=0)
				{
					std::cout<<std::endl;
					std::cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<std::endl;
					std::cout<<"Deseja adicionar Funcionário? Digite 2"<<std::endl;
					std::cout<<"Deseja aplicar reajuste percentual? Digite 3"<<std::endl;
					std::cout<<"Deseja Consultar funcionários em perído de teste? Digite 4"<<std::endl;
					std::cout<<"Deseja voltar para o menu inicial para busca de nova empresa? Digite 0"<<std::endl;
					std::cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<std::endl;
					int auxiliar;
					std::cin>>auxiliar;
					if(auxiliar==0)
					{
						j=0;
						i=1;
					}
					else if(auxiliar==2)
					{
						this->bancoEmpresas[aux].addFuncionario();
					}
					else if(auxiliar==3)
					{
						std::cout<<"Digite a taxa percentual"<<std::endl;
						float taxa;
						std::cin>>taxa;
						this->bancoEmpresas[aux].ajustarSalario(taxa);
					}
					else if(auxiliar==4)
					{
						std::cout<<"Digite a data de hoje:"<<std::endl;
						data hoje;
						std::cin>>hoje;
						this->bancoEmpresas[aux].funcionariosPeriodoTeste(hoje);
					}
				}
			}
		}
		else if(i==3)
		{
			this->printEmpresas();
			i=1;
		}
		else if(i==4)
		{
			std::cout<<"Digite o nome e o CNPJ da empresa:"<<std::endl;
			this->addEmpresa();
			i=1;
		}
	}

}

