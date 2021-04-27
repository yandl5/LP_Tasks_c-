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
#include "excecao.h"
int main(int argc, const char* argv[])
{
	std::vector<std::string> a;
	int i=1;
	std::vector<std::string> auxiliar;
	auxiliar.push_back("triangulo");
	auxiliar.push_back("quadrado");
	auxiliar.push_back("retangulo");
	auxiliar.push_back("circulo");
	auxiliar.push_back("esfera");
	auxiliar.push_back("cubo");
	auxiliar.push_back("paralelepipedo");
	auxiliar.push_back("piramide");
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
		unsigned j=1;
		/**
		*Verifica se o valor numérico informado é negativo ou zero.
		*/
		while(j<a.size())
		{
			try 
			{
				if ((stof(a[j]))<=0) throw Number();
			}
			catch (Number &ex) 
			{
				std::cerr<<ex.what()<<std::endl;
				return 0;
			}
			j++;
		}
		j=0;
		bool t=false;
		/**
		*Verifica se a figura se encontra no banco de dados.
		*/
		while(j<auxiliar.size())
		{
			if(a[0]==auxiliar[j])
				t=true;
			j++;
		}

		try{
			if(t==false) 
				throw FiguraNaoCadastrada();
			else
			{
				geometria aux(a);
				aux.redirecionar();
			}
		}
		catch(FiguraNaoCadastrada &ex)
		{
			std::cerr<<ex.what()<<std::endl;
			geometria aux(a);
			aux.exibirLista();
			return 0;
		}
	}
	else
	{
		geometria aux(a);
		aux.exibirLista();
	}
	return 0;
}