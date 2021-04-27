#include <iostream>
#include "movimentacao.h"
#include "conta.h"
#include "banco.h"
using namespace std;
int main()
{
	banco b;
	b.criarConta("itaú", 54876, 20000, 1000);
	b.criarConta("itaú", 54877, 20000, 1000);
	b.saque(54876,850);
	b.deposito(54876,100);
	b.transferencia(54876,54877,1000);
	b.print();
	b.extrato(54876);
	return 0;
}