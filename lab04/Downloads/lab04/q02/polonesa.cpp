#include "polonesa.h"
#include <sstream>
using namespace std;
/**
* Método para conversão em string
*/
template<typename T>
string ConvertToString(T & value)
{
    std::stringstream ss;
    ss << value;
    return ss.str();
}
polonesa::polonesa() {
	resultado=0;
}
polonesa::~polonesa() {}

void
polonesa::inserir(std::string a){
	Polonesa.push_back(a);
}
/**
* @brief Método para a resolução da notação polonesa
*/
void
polonesa::resolverPolonesa(){
	Pilha<string> b;
	size_t i=0;
	float at, bt,c;
	/**
	* Primeiramente se verifica se não é nenhum sinal, armazena os números em sequência, caso seja constatado um sinal
	*os números da fila são retornados e é feita a equação inerente ao sinal.
	*/
	while(i<Polonesa.size()){
		if(Polonesa[i]!="+"&&Polonesa[i]!="-"&&Polonesa[i]!="*"&&Polonesa[i]!="/")
		{
			b.push(Polonesa[i]);
			i++;
		}
		else
		{
			at=stof(b.top());
			b.pop();
			bt=stof(b.top());
			b.pop();
			if(Polonesa[i]=="+")
				c=at+bt;
			else if(Polonesa[i]=="-")
				c=at-bt;
			else if(Polonesa[i]=="*")
				c=at*bt;
			else if(Polonesa[i]=="/")
				c=bt/at;
			i++;
			b.push(ConvertToString(c));
		}
	}
	resultado=stod(b.top());
}

double
polonesa::getPolonesa(){
	return resultado;
}