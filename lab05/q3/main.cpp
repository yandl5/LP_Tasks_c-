#include <algorithm>
using std::find_if;
#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
/*
*Definição do functor para validação do número primo.
*/
class Valor
{
	int valor;
public:
	Valor(int n):valor(n) {}
	int operator()(int n) const 
	{
		int i;
		int cont=0;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
				cont++;
		}
		if(cont==0) 
			return n;
		else
			return 0; 
	}
};
int main(int argc, char* argv[]) {
	vector<int> Valores;
	int x=std::stoi(argv[1]),i=1;
	/*
	*Armazena os valores até o número do argv declarado.
	*/
	while(i<=x)
	{
		Valores.push_back(i);
		i++;
	}
	cout<<"Numeros Primos[1-"<<x<<"]: ";
	auto it=Valores.begin();
	/*
	*Utilização do método find em conjunto do functor Valor para verificação dos números primos da lista.
	*o iterador é ataulizado de primos em primos.
	*/
	while(it!=Valores.end())
	{
		auto iff = find_if(++it, Valores.end(), Valor(x));
		if((*iff)!=0)
		{
			it=iff;
			cout<<(*iff)<<" ";
		}
	}
	

	return 0;
}