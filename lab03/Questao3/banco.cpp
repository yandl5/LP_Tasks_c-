#include "banco.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
banco::banco():contas(0){}
banco::~banco(){}
/**
* @brief Método para criar uma nova conta corrente ou poupança
* @param Utiliza-se como parâmetros variáveis necessárias a construção de uma nova conta
*/
void
banco::criarConta(std::string agencia, int numero, double limite,double saldo,std::string tipo){
	if(tipo=="Corrente"){
		clientes.push_back(make_shared<contaCorrente>(agencia,numero,limite,saldo,tipo));
		contas++;
	}
	else if(tipo=="Poupança")
	{
		clientes.push_back(make_shared<contaPoupanca>(agencia,numero,limite,saldo,tipo));
		contas++;
	}
	else
	{
		std::cout<<"Tipo de conta inválido"<<std::endl;
		return;
	}
}
/**
* @brief Método para excluir uma conta
*/
void
banco::excluirConta(int num){
	if(contas==0)
	{
		std::cout<<"Não existem contas cadastradas"<<std::endl;
		return;
	}
	for(size_t i=0; i<clientes.size();i++)
	{
		if(num==clientes[i]->getNumero()){
			clientes.erase(clientes.begin()+i);
			return;
		}
	}
	std::cout<<"Número inválido"<<std::endl;
}
/**
* @brief Método para realizar o saque, nesse método primeiro se identifica a conta em seguida checa o limite e valida a transação, salvando a movimentação
* @brief contas correntes podem ficar negativas, com o intuito de correr juros com base na negativação
* @param Número da conta e valor
*/
void
banco::saque(int conta,double valor){
	for(size_t i=0; i<clientes.size();i++)
	{
		if(conta==clientes[i]->getNumero())
		{
			if(valor<=clientes[i]->getLimite())
			{
				if(valor<=clientes[i]->getSaldo())
				{
					clientes[i]->setSaldo(clientes[i]->getSaldo()-valor);
					clientes[i]->Transacao("Saque: -",valor," Débito");
					return;
				}
				else if(valor>clientes[i]->getSaldo()&&clientes[i]->getTipo()=="Corrente")
				{
					clientes[i]->setSaldo(clientes[i]->getSaldo()-valor);
					clientes[i]->Transacao("Saque: -",valor," Débito");
					return;
				}
				else
				{
					std::cout<<"Desculpe mas você não tem essa quantia em sua conta, conta Poupança não é permitido status negativo"<<std::endl;
				}
			}
			else
			{
				std::cout<<"Você não pode sacar mais que o seu limite, consulte o seu gerente para adoção de novos planos"<<std::endl;
				return;
			}
		}
	}
	std::cout<<"Número inválido"<<std::endl;
}
/**
* @brief Método para realizar depósitio
* @param Número da conta e valor
*/
void
banco::deposito(int conta, double valor){
	for(size_t i=0; i<clientes.size();i++)
	{
		if(conta==clientes[i]->getNumero())
		{
			clientes[i]->setSaldo(clientes[i]->getSaldo()+valor);
			clientes[i]->Transacao("Depósito: +",valor, " Débito");
			return;
		}
	}
	std::cout<<"Número inválido"<<std::endl;
}
/**
* @brief Método para realizar transferência se identifica as contas e faz o processo de verificação do serviço, em seguida transfere o valor
* @param Números das contas e valor a ser transferido
*/
void
banco::transferencia(int contaA, int contaB,double valor){
	size_t i=-1,j=-1;
	int cont=0;
	if(contas<2)
	{
		std::cout<<"Número de contas insuficiente"<<std::endl;
	}
	while(clientes.size()&&cont==0)
	{
		i++;
		if(contaA==clientes[i]->getNumero())
		{
			cont++;
		}
	}
	while(clientes.size()&&cont==1)
	{
		j++;
		if(contaB==clientes[j]->getNumero())
		{
			cont++;
		}
	}
	if(cont==2)
	{
		if(clientes[i]->getSaldo()>=valor)
		{
			clientes[i]->setSaldo(clientes[i]->getSaldo()-valor);
			clientes[j]->setSaldo(clientes[j]->getSaldo()+valor);
			clientes[i]->Transacao("Transferiu: -",valor, " Débito");
			clientes[j]->Transacao("Recebeu a partir de tranferência: +",valor, " Débito");
			return;
		}
		else if(clientes[i]->getSaldo()<valor&&clientes[i]->getTipo()=="Corrente")
		{
			clientes[i]->setSaldo(clientes[i]->getSaldo()-valor);
			clientes[j]->setSaldo(clientes[j]->getSaldo()+valor);
			clientes[i]->Transacao("Transferiu: -",valor, " Débito");
			clientes[j]->Transacao("Recebeu a partir de tranferência: +",valor, " Débito");
			return;
		}
		else
		{
			std::cout<<"Desculpe mas você não tem essa quantia em sua conta, conta Poupança não é permitido status negativo"<<std::endl;
			return;
		}
	}
	else
	{
		std::cout<<"Algum número inválido"<<std::endl;
	}
}
/**
* @brief Método para gerar o extrato bancário
* @param Número da conta
*/
void
banco::extrato(int num)
{
	for(size_t i=0;i<clientes.size();i++)
	{
		if(num==clientes[i]->getNumero())
		{
			clientes[i]->Transacao("Saldo Final: ",clientes[i]->getSaldo()," ");
			clientes[i]->printTransacoes();
			this->write(num);
			return;
		}
	}
	std::cout<<"Número inválido"<<std::endl;
}
/**
* @brief Método para escrever no extrato bancário
* @param Número da conta
*/
void
banco::write(int num){
	std::ofstream outFile;
	outFile.open("extrato.dat");
	std::vector<movimentacao> a;
	for(size_t i=0;i<clientes.size();i++)
	{
		if(num==clientes[i]->getNumero()){
			a=clientes[i]->getTransacoes();
		}
	}
	for(size_t i=0;i<a.size();i++)
	{
		outFile<<a[i].getDescricao()<<" "<<a[i].getValor()<<" "<<a[i].getIndicacao();
		outFile<<std::endl;
	}
}

void 
banco::print(){
	for(size_t i=0;i<clientes.size();i++)
	{
		clientes[i]->printConta();
		std::cout<<std::endl;
	}
}