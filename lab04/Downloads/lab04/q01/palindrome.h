#ifndef PALINDROME
#define PALINDROME
#include "pilha.h"
#include <vector>
#include <string>
class Palindrome
{
private:
	std::vector<std::string> palindrome;
public:
	Palindrome();
	~Palindrome();
	void adicionarPalavras(std::string a);
	void exibirPalindromes();
	void verificarPalindrome(size_t j);
};
#endif