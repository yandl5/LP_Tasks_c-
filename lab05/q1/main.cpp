template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last);
#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <numeric>
using std::accumulate;
template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last)
{
	auto it = first;
	auto soma=0;
	int i=0;
	/*
	*Utilizei o accumulate para fazer o somatório do primeiro ao ultimo.
	*/
	soma = accumulate(first, last, 0);
	while(it!=last)
	{
		it++;
		i++;
	}
	/*
	*Tirei a média.
	*/
	soma=soma/i;
	/*
	*Poderia ter usado o método de find da média, do valor menor que ela e outro maior, porém no enunciado da questão não ficou claro se a lista estaria ordenada.
	*/
	vector<int> x;
	it=first;
	/*
	*Achar o valor absoluto da diferença em cada posição.
	*/
	while(it<last)
	{
		if((soma-(*it))<0)
			x.push_back((soma-(*it))*(-1));
		else
			x.push_back((soma-(*it)));
		it++;
	}
	int menor=x[0];
	int j=0;
	/*
	*achar o menor valor.
	*/
	for(size_t i=0;i<x.size();i++)
	{
		if(x[i]<menor)
		{
			menor=x[i];
			j=i;
		}
	}
	i=0;
	it=first;
	/*
	*Posicionar o it no menor valor.
	*/
	while(i<j)
	{
		it++;
		i++;
	}
	return it;
}
int main() {
	vector<int> v { 1, 2, 3, 30, 40, 50 };
	auto result = closest2mean(v.begin(), v.end());
	cout <<"O valor mais próximo da média é: "<< (*result) << endl;
	return 0;
}