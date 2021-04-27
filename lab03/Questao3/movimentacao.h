#ifndef MOVIMENTACAO
#define MOVIMENTACAO
#include <string>
class movimentacao
{
private:
	std::string m_descricao;
	double m_valor;
	std::string m_indicacao;
public:
	//construtor e destrutor
	movimentacao(std::string descricao, double valor, std::string indicacao);
	~movimentacao();
	//métodos getters
	std::string getDescricao();
	double getValor();
	std::string getIndicacao();
	void print();
};
#endif