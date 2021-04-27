#ifndef PALINDROME
#define PALINDROME
#include "pilha.h"
#include <vector>
#include <string>
class polonesa
{
private:
	std::vector<std::string> Polonesa;
	double resultado;
public:
	polonesa();
	~polonesa();
	void inserir(std::string a);
	void resolverPolonesa();
	double getPolonesa();
};
#endif