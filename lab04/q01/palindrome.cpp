#include "palindrome.h"
Palindrome::Palindrome() {}
Palindrome::~Palindrome() {}
/**
* @brief Método para adicionar palavras.
* @param recebe uma string qualquer
*/
void
Palindrome::adicionarPalavras(std::string a){
	palindrome.push_back(a);
}
/**
* @brief Método que verifica se as palavras são palíndromes.
* @param recebe a aŕea do vector do método exibir palíndromes.
*/
void
Palindrome::verificarPalindrome(size_t j){
	Pilha<char> b;
	std::string aux;
	size_t i=0,contador=0;
	int x;
	while(i<palindrome[j].size())
	{
		/**
		* Foi utilizado a numeração da tabela ascii para ignorar valores indesejados e também receber letras maiúsculas e minúsculas, depois convertendo-as
		*/
		x=palindrome[j][i];
		if( (x >= 65 && x<= 90) || (x >= 97 && x <= 122) ){
			b.push(toupper(palindrome[j][i]));
			aux.push_back(toupper(palindrome[j][i]));
		}
		else
		{
			contador++;
		}
		i++;
	}
	i=0;
	/**
	*faz se a checagem da pilha e da string para validação da palavra
	*/
	bool cont=true;
	while(i<(palindrome[j].size()-contador))
	{
		if(b.top()!=aux[i])
			cont=false;
		b.pop();
		i++;
	}
	if(cont==true)
	{
		std::cout<<"A palavra ou frase: "<<palindrome[j]<<". é palindrome"<<std::endl;
	}
	else
	{
		std::cout<<"A palavra ou frase: "<<palindrome[j]<<". não é palindrome"<<std::endl;
	}
}

void 
Palindrome::exibirPalindromes(){
	for(size_t i=0;i<palindrome.size();i++)
	{
		this->verificarPalindrome(i);
	}
}