#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <iostream>
/**
	*Se fez necessário ajustar de short para double a variável _preco para compreender números decimais. 
*/
class Produto
{
public:
	Produto();
	Produto(std::string _codigo, std::string _descricao, double _preco);
	virtual ~Produto();
protected:
	std::string m_cod_barras;
	std::string m_descricao;
	double m_preco;		
public:
	// getters
	std::string getCodBarras();
	std::string getDescricao();
	double getPreco();
	// setters
	void setCodBarras(std::string _codigo);
	void setDescricao(std::string _descricao);
	void setPreco(double _preco);
	//
	/**
		Criação dos métodos de sobrecarga:
		O método de soma e subtração retornam um valor float referente a soma ou subtração dos produtos.
		O método de igualdade compara os produtos e retorna verdadeiro em caso de igualdade, e falso caso contrário.
	*/
	double operator+(Produto& T);
	double operator-(Produto& T);
	bool operator==(Produto& T)
	{
		if(this->getCodBarras()==T.getCodBarras())
			return true;
		else 
			return false;
	}
	friend std::ostream& operator<< (std::ostream &o, Produto const &t); 
private:
	virtual std::ostream& print(std::ostream&) const = 0;
};
 
#endif
