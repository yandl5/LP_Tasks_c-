#include <iostream>
#include "pilha.h"
#include "polonesa.h"

using std::string;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
	polonesa a;
	a.inserir("2");
	a.inserir("3");
	a.inserir("+");
	a.inserir("5");
	a.inserir("*");
	a.resolverPolonesa();
	cout<<"(2 3 + 5 *) = ";
	cout<<a.getPolonesa()<<endl;
	polonesa b;
	b.inserir("4");
	b.inserir("2");
	b.inserir("/");
	b.inserir("8");
	b.inserir("+");
	b.inserir("6");
	b.inserir("*");
	b.resolverPolonesa();
	cout<<"(4 2 / 8 + 6 *) = ";
	cout<<b.getPolonesa()<<endl;
	return 0;
}