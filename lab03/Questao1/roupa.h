#ifndef ROUPA
#define ROUPA
#include "produto.h"
/**
* @brief Criação da classe Roupa.
* @param Recebe os dados da classe mãe Produto, o sexo sendo (M ou F), a marca, e o tamanho(PP,P,M,G ou GG)
*/
class Roupa : public Produto
{
public:
	Roupa();
	Roupa(std::string _codigo, std::string _descricao, double _preco, 
			std::string _marca, std::string _sexo, std::string _tamanho);
	~Roupa();
private:
	std::string m_marca;
	std::string m_sexo;
	std::string m_tamanho;
public:
	// getters
	std::string getMarca();
	char getValidade();
	std::string getTamanho();
	std::string getSexo();
	// setters
	void setMarca(std::string _marca);
	void setSexo(std::string _sexo);
	void setTamanho(std::string _tamanho);
private:
	std::ostream& print(std::ostream &o) const;
};
#endif