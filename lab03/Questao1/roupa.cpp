#include <iomanip>
#include "roupa.h"

Roupa::Roupa() {}

Roupa::Roupa(std::string _codigo, std::string _descricao, double _preco, 
	std::string _marca, std::string _sexo, std::string _tamanho):
	Produto(_codigo, _descricao, _preco), m_marca(_marca), m_sexo(_sexo), m_tamanho(_tamanho) {}

Roupa::~Roupa() {}

std::string 
Roupa::getMarca() {
	return m_marca;
}

std::string 
Roupa::getSexo() {
	return m_sexo;
}
std::string
Roupa::getTamanho() {
	return m_tamanho;
}
void 
Roupa::setMarca(std::string _marca) {
	m_marca = _marca;
}

void 
Roupa::setSexo(std::string _sexo) {
	m_sexo = _sexo;
}
void 
Roupa::setTamanho(std::string _tamanho) {
	m_tamanho = _tamanho;
}
 
std::ostream& 
Roupa::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (21) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << std::setprecision(6) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_marca << " | " 
		<< std::setfill (' ') << std::setw (1) << m_sexo << " | "
		<< std::setfill (' ') << std::setw (1) << m_tamanho;
	return o;
}