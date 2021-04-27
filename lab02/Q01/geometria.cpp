#include "geometria.h"
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
geometria::geometria(std::vector<std::string> a)
{
	Geometria = a;
}
geometria::~geometria(){}
void geometria::redirecionar()
{
	/**
	*@brief Compara a primeira posição do vector com a auxiliar para entrar na classe apropriada.
	*@details Ajusta-se o tamanho do comparador com a quantidade de membros da classe para evitar falhas de segmentação.
	*@return Os dados da figura geométrica ou em caso de erro a lista de dados.
	*/
	std::string aux;
	size_t comparador;
	aux = {"triangulo"};
	comparador=3;
	if(Geometria[0] == aux)
	{
		if(Geometria.size() == comparador)
		{
			triangulo a(stof(Geometria[1]) , stof(Geometria[2]) );
			std::cout<<"Área do Triângulo: "<<a.getArea()<<std::endl;
			std::cout<<"Perímetro do Triângulo: "<<a.getPerimetro()<<std::endl;
			return;
		}
		else
		{
			std::cout<<"A figura informada apresenta erros ou não foi devidamente informada, consulte a lista de ajuda a seguir:"<<std::endl;
		}
	}
	aux = {"retangulo"};
	if(Geometria[0] == aux)
	{
		if(Geometria.size() == comparador)
		{
			retangulo a(stof(Geometria[1]) , stof(Geometria[2]) );
			std::cout<<"Área do Retângulo: "<<a.getArea()<<std::endl;
			std::cout<<"Perímetro do Retângulo: "<<a.getPerimetro()<<std::endl;
			return;
		}
		else
		{
			std::cout<<"A figura informada apresenta erros ou não foi devidamente informada, consulte a lista de ajuda a seguir:"<<std::endl;
		}
	}
	aux = {"quadrado"};
	comparador = 2;
	if(Geometria[0] == aux)
	{
		if(Geometria.size() == comparador)
		{
			quadrado a(stof(Geometria[1]));
			std::cout<<"Área do Quadrado: "<<a.getArea()<<std::endl;
			std::cout<<"Perímetro do Quadrado: "<<a.getPerimetro()<<std::endl;
			return;
		}
		else
		{
			std::cout<<"A figura informada apresenta erros ou não foi devidamente informada, consulte a lista de ajuda a seguir:"<<std::endl;
		}
	}
	aux = {"circulo"};
	if(Geometria[0] == aux)
	{
		if(Geometria.size() == comparador)
		{
			circulo a(stof(Geometria[1]));
			std::cout<<"Área do Círculo: "<<a.getArea()<<std::endl;
			std::cout<<"Perímetro do Círculo: "<<a.getPerimetro()<<std::endl;
			return; 
		}
		else
		{
			std::cout<<"A figura informada apresenta erros ou não foi devidamente informada, consulte a lista de ajuda a seguir:"<<std::endl;
		}
	}
	aux = {"cubo"};
	if(Geometria[0] == aux)
	{
		if(Geometria.size() == comparador)
		{
			cubo a(stof(Geometria[1]));
			std::cout<<"Área do Cubo: "<<a.getArea()<<std::endl;
			std::cout<<"Volume do Cubo: "<<a.getVolume()<<std::endl;
			return; 
		}
		else
		{
			std::cout<<"A figura informada apresenta erros ou não foi devidamente informada, consulte a lista de ajuda a seguir:"<<std::endl;
		}
	}
	aux = {"esfera"};
	if(Geometria[0] == aux)
	{
		if(Geometria.size() == comparador)
		{
			esfera a(stof(Geometria[1]));
			std::cout<<"Área da Esfera: "<<a.getArea()<<std::endl;
			std::cout<<"Volume da Esfera: "<<a.getVolume()<<std::endl;
			return; 
		}
		else
		{
			std::cout<<"A figura informada apresenta erros ou não foi devidamente informada, consulte a lista de ajuda a seguir:"<<std::endl;
		}
	}
	aux = {"paralelepipedo"};
	comparador=4;
	if(Geometria[0] == aux)
	{
		if(Geometria.size() == comparador)
		{
			paralelepipedo a(stof(Geometria[1]) , stof(Geometria[2]), stof(Geometria[3]) );
			std::cout<<"Área do Paralelepípedo: "<<a.getArea()<<std::endl;
			std::cout<<"Volume do Paralelepípedo: "<<a.getVolume()<<std::endl;
			return; 
		}
		else
		{
			std::cout<<"A figura informada apresenta erros ou não foi devidamente informada, consulte a lista de ajuda a seguir:"<<std::endl;
		}
	}
	aux = {"piramide"};
	comparador=5;
	if(Geometria[0] == aux)
	{
		if(Geometria.size() == comparador)
		{
			piramide a(stof(Geometria[1]), stof(Geometria[2]) , stof(Geometria[3]), stof(Geometria[4]) );
			std::cout<<"Área da Pirâmide: "<<a.getArea()<<std::endl;
			std::cout<<"Volume da Pirâmide: "<<a.getVolume()<<std::endl;
			return; 
		}
		else
		{
			std::cout<<"A figura informada apresenta erros ou não foi devidamente informada, consulte a lista de ajuda a seguir:"<<std::endl;
		}
	}
	return this->exibirLista();
}
void geometria::exibirLista()
{
	/**
	*lista de comandos para auxiliar o usuário.
	*/
	std::cout<<"Para Triangulo digite nessa ordem: ./geometria triangulo (Base) (Altura)"<<std::endl;
	std::cout<<"Para Retangulo digite nessa ordem: ./geometria retangulo (Base) (Altura)"<<std::endl;
	std::cout<<"Para Quadrado digite nessa ordem: ./geometria quadrado (Lado)"<<std::endl;
	std::cout<<"Para Círculo digite nessa ordem: ./geometria circulo (Raio)"<<std::endl;
	std::cout<<"Para Esfera digite nessa ordem: ./geometria esfera (Raio)"<<std::endl;
	std::cout<<"Para Cubo digite nessa ordem: ./geometria cubo (Lado)"<<std::endl;
	std::cout<<"Para Paralelepípedo digite nessa ordem: ./geometria paralelepipedo (Aresta1) (Aresta2) (Aresta3)"<<std::endl;
	std::cout<<"Para Pirâmide digite nessa ordem: ./geometria piramide (Base do Triângulo) (Altura do Triângulo) (Lado Quadrado Base) (Altura Pirâmide)"<<std::endl;
	std::cout<<"Todas as fórumlas contemplam casas decimais."<<std::endl;
}
