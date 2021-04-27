#include <iostream>
#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"
#include <string>
#include <vector>
#include "geometria.h"
int main(int argc, const char* argv[])
{
	std::vector<std::string> a;
	int i=1;
	/**
	*Recebe o argv em um vector de strings desconsiderando o primeiro elemento
	*chama os métodos de geometria apropriados
	*/
	if(argc > 1){
		while(i<argc)
		{
			a.push_back(argv[i]);
			i++;
		}
		geometria aux(a);
		aux.redirecionar();
	}
	else
	{
		geometria aux(a);
		aux.exibirLista();
	}
	return 0;
}