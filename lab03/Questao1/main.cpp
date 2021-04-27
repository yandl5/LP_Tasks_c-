#include <iostream>
#include <vector>
#include <memory>
#include "produto.h"
#include "fruta.h"
#include "roupa.h"
#include "bebida.h"
#include <fstream>
#include <sstream>
using namespace std;
void leitura(vector<string> &vec, string line);
int main(int argc, char const *argv[])
{
	std::vector<shared_ptr<Produto>> lista;
	/**
		abrir arquivo e verificar se não apresenta erros	
	*/
	ifstream infile;
    infile.open("lista.dat"); 
	if(infile.bad()) {
		cerr << "o arquivo nao foi aberto" << endl;
		exit(1);
	}
	/**
		criação de um vector<string> para receber cada palavra, a string line irá receber a linha completa
	*/
	vector<string> vec;
	vec.clear();
  	std::string line;
  	/**
		recebo todas as linhas e faço a separação na função leitura dos ';' para separar em palavras distintas	
	*/
  	while(!infile.eof()){
  		getline(infile, line, '\n');
  		leitura(vec,line);
  		/**
			Verifico a primeira palavra e crio o objeto apropriado	
		*/
  		if(vec[0]=="Fruta")
  			lista.push_back(make_shared<Fruta>(vec[1],vec[2],stod(vec[3]),vec[4],stoi(vec[5])));
  		else if(vec[0]=="Roupa")
  			lista.push_back(make_shared<Roupa>(vec[1],vec[2],stod(vec[3]),vec[4],vec[5],vec[6]));
  		else if(vec[0]=="Bebida")
  			lista.push_back(make_shared<Bebida>(vec[1],vec[2],stod(vec[3]),vec[4]));
  		vec.clear();
  	}
  	lista.erase(lista.begin()+lista.size());
	for (auto i = lista.begin(); i != lista.end(); ++i)
	{
		std::cout << (**i) << std::endl;	
	}
	int cont=0;
	//verificação de produtos repetidos
	for(size_t i=0;i<lista.size();i++)
	{
		for(size_t j=0;j<lista.size();j++)
		{
			if(*lista[i]==*lista[j] && i!=j)
				cont++;
		}
	}
	cout<<"Sua lista tem "<<cont<<" produtos repetidos."<<endl;
	return 0;
}
void leitura(vector<string> &vec, string line){
	std::stringstream linestream(line);
  	std::string num;
  	while (getline(linestream, num, ';'))
  	{
  	  vec.push_back(num);
  	}
}

//g++ -Wall -pedantic -std=c++14 -o t -O0 produto.cpp fruta.cpp roupa.cpp bebida.cpp main.cpp
