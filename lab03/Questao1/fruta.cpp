#include <iomanip>
#include "fruta.h"

Fruta::Fruta() {}

Fruta::Fruta(std::string _codigo, std::string _descricao, double _preco, 
	std::string _data, short _validade):
	Produto(_codigo, _descricao, _preco), m_data_lote(_data), m_validade(_validade) {}

Fruta::~Fruta() {}

std::string 
Fruta::getDataLote() {
	return m_data_lote;
}

short 
Fruta::getValidade() {
	return m_validade;
}

void 
Fruta::setDataLote(std::string _data) {
	m_data_lote = _data;
}

void 
Fruta::setValidade(short _validade) {
	m_validade = _validade;
}
 
/**
	*Adoção do método setprecision para revelar valores decimais.
*/
std::ostream& 
Fruta::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5)<< std::setprecision(6) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_data_lote << " | " 
		<< std::setfill (' ') << std::setw (3) << m_validade;
	return o;
}
