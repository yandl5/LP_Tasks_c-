#ifndef BEBIDA
#define BEBIDA
#include "produto.h"
/**
* @brief Criação da classe Bebida.
* @param Recebe os dados da classe mãe Produto e o teor Alcóolico da bebida em porcentagem
*/
class Bebida : public Produto
{
public:
	Bebida();
	Bebida(std::string _codigo, std::string _descricao, double _preco, 
			std::string _teor);
	~Bebida();
private:
	std::string m_teor_alcoolico;
public:
	// getters
	std::string getTeor();
	// setters
	void setTeor(std::string _teor);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif