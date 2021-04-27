#ifndef DADO
#define DADO
#include <iostream>
#include <random>
#define ValorMaximo 6
class dado
{
private:
	int valor_dado;
	std::random_device 				rd; 
	std::default_random_engine 		gen; 
	std::uniform_int_distribution<> dis;
public:
	dado();
	~dado();
	void jogar_dados();
	int getValorDado();
	
	
};
	

#endif
