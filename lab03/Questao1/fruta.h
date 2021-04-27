#ifndef _FRUTA_H_
#define _FRUTA_H_
#include "produto.h"

class Fruta : public Produto
{
public:
	Fruta();
	Fruta(std::string _codigo, std::string _descricao, double _preco, 
			std::string _data, short _validade);
	~Fruta();
private:
	std::string m_data_lote;
	short m_validade;
public:
	// getters
	std::string getDataLote();
	short getValidade();
	// setters
	void setDataLote(std::string _data);
	void setValidade(short _validade);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif