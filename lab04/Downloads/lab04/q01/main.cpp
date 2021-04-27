#include <iostream>
#include "pilha.h"
#include "palindrome.h"

using std::string;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
	Palindrome a;
	a.adicionarPalavras("AN-a");
	a.adicionarPalavras("ARARA");
	a.adicionarPalavras("HANAH");
	a.adicionarPalavras("MOSCOU");
	a.adicionarPalavras("Socorram-me, SUBI NO ONIBUS EM MARROCOS");
	a.exibirPalindromes();
	return 0;
}