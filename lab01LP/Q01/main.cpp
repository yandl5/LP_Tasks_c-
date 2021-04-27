#include <iostream>
#include <string>
#include <vector>
#include "funcionario.h"
#include "data.h"
#include "empresa.h"
#include "cadastro.h"
int main(int argc, char const *argv[]){
	cadastro a;
	a.programa();	
	return 0;
}
//compilar: g++ -Wall -pedantic -std=c++11 -o t -O0 data.cpp funcionario.cpp empresa.cpp cadastro.cpp main.cpp
