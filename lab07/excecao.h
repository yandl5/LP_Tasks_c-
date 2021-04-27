#include <exception>
#include <stdexcept>
using std::exception;
/**
	*Número negativo ou zero.
*/
class Number:public exception{
public:
	const char* what(){
		return "Você informou um número negativo ou zero!";
	}
};
/**
	*Argumentos inválidos.
*/
class ArgumentosErrados:public exception{
public:
	const char* what(){
		return "Os argumentos informados estão em excesso ou faltando, por favor consulte a lista de parâmetros";
	}
};
/**
	*Figura não cadastrada no banco de dados.
*/
class FiguraNaoCadastrada:public exception{
	public:
		const char* what() {
			return "O segundo parâmetro não consta no banco de dados, favor consultar a lista";
		}
};