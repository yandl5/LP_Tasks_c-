#include <iomanip>
#include "bebida.h"

Bebida::Bebida() {}

Bebida::Bebida(std::string _codigo, std::string _descricao, double _preco, 
	std::string _teor):
	Produto(_codigo, _descricao, _preco), m_teor_alcoolico(_teor) {}

Bebida::~Bebida() {}

std::string 
Bebida::getTeor() {
	return m_teor_alcoolico;
}

void 
Bebida::setTeor(std::string _teor) {
	m_teor_alcoolico = _teor;
}

 
std::ostream& 
Bebida::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << std::setprecision(6) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_teor_alcoolico;
	return o;
}
