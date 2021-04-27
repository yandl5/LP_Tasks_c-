#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
template <typename InputIterator>
InputIterator misterio(InputIterator first , InputIterator last){
	InputIterator it =lower_bound(first ,last ,accumulate(first , last , 0.0)/(double)distance(first,last));
	return it ;
}
int main()
{
	vector<double> aluno;
	aluno.push_back(5.5);
	aluno.push_back(6.8);
	aluno.push_back(7.1);
	aluno.push_back(3.1);
	aluno.push_back(2.5);
	aluno.push_back(1.5);
	aluno.push_back(4.5);
	aluno.push_back(5.2);
	double contador=0;
 	auto it=misterio(aluno.begin(),aluno.end());
	auto itt=aluno.begin();
	for(itt=aluno.begin();itt<aluno.end();itt++)
	{
		if(*itt<*it)
		{
			contador++;	
		}	
	}
	cout<<contador<<"  alunos estão abaixo da média da turma"<<endl;
}
//Dentro da função misterio temos:
//O lower_bound() retorna o maior valor do container dado acima do valor estipulado,
//nesse caso o valor estipulado é o somatório, o accumulate() do início ao fim e a distância(), ou seja a quantidade
//de elementos, passando uma ideia de média, desse modo pegamos o maior valor do container acima da média e retornamos em um iterador.
//Uma ideia de aplicação simples que imaginei seria cadastrar as notas de alguns alunos e receber o ponteiro para o primeiro valor acima da média da turma.
//Assim poderiamos contabilizar a partir da média da turma de forma mais eficiente o desempenho e a discrepância de notas entre os alunos sabendo quantos
//ficaram abaixo da média da turma.
