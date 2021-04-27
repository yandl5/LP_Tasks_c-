#include "movimentacao.h"
#include <iostream>
movimentacao::movimentacao(std::string descricao, double valor, std::string indicacao):
m_descricao(descricao),m_valor(valor),m_indicacao(indicacao) {}
movimentacao::~movimentacao() {} 

std::string
movimentacao::getDescricao(){
	return m_descricao;
}

double
movimentacao::getValor(){
	return m_valor;
}

std::string 
movimentacao::getIndicacao(){
	return m_indicacao;
}

void 
movimentacao::print(){
	std::cout<<this->getDescricao()<<" "<<this->getValor()<<" "<<this->getIndicacao()<<std::endl;
}