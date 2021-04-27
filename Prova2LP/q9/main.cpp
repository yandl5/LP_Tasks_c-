# include <iostream>
# include <memory>
using namespace std;
class Pessoa
{
	private :
	string m_nome ;
	public :
	Pessoa(string nome_) : m_nome(nome_){};
	~ Pessoa(){ cout << " Destruindo " << m_nome << " ... " << endl ; };
	string getNome(){ return m_nome ; };
};
void quemEhEstaPessoa (Pessoa * p)
{
	cout << " Esta pessoa eh : " <<p->getNome()<< endl ;
}
int main ( int argc , char const * argv [])
{
	// C1 : Cria um ponteiro inteligente ptr1 que aponta unicamente
	//para a instancia ( de Pessoa ) " Maria ". Nao altera a saida .
	unique_ptr<Pessoa> ptr1(new Pessoa(" Maria "));
	// C2 : Utiliza a notacao de ponteiro , permitida pelo ponteiro
	//inteligente , para invocar o metodo getNome() . Imprime
	//o string " Maria " na saida padrao , como resultado da
	//execucao do metodo getNome().
	cout <<ptr1->getNome()<< endl ;
	// C3 :Faz o acesso da região de memória do ponteiro, sendo possível
	//desse modo utilizar o método '.' padrão para invocar o método getNome().
	//Imprime o string " Maria " na saída padrão, através da execução do método getNome().
	cout <<(*ptr1).getNome()<< endl ;
	// C4 :Encaminha-se o ponteiro para a função quemEhEstaPessoa(Pessoa * p), dentro dessa função se faz
	// o mesmo procedimento do C2, só que com o acréscimo de um conjunto de caracteres inerentes a identificação da pessoa.
	// para que se possa visualizar antes da execução do método getNome(), imprime " Maria " na saída padrão.
	quemEhEstaPessoa(ptr1.get());
	// C5 : Como o ponteiro criado é unique_ptr, é necessário repassar sua posse
	// através da função move, pois o ponteiro não pode ser copiado, desse modo ptr1 passa sua posse a ptr2.
	unique_ptr< Pessoa > ptr2(std::move(ptr1));
	// C6 : Com o reset o conteúdo presente no ponteiro ptr1 é alterado,
	// o conteúdo inicial não é destruído por ainda existir em ptr2, e em sequência se destina a uma nova Pessoa esse ponteiro,
	//no caso a "Joao".
	ptr1.reset(new Pessoa(" Joao "));
	// C7 : O ptr2 nesse momento tem o mesmo conteúdo que ptr1 tinha antes do reset, após esse procedimento a Pessoa "Maria"
	// não existe mais em nenhum local, desse modo é acionado o destrutor da classe, no ptr2 é adicionado uma nova pessoa "Marcos",
	//na saída padrão é anunciada a destruição de "Maria", através do cout do destrutor.
	ptr2.reset(new Pessoa(" Marcos "));
	// C8 : A função reset é invocada novamente para alterar o conteúdo de ptr1, porém dessa vez sem argumentos
	//após este procedimento a Pessoa "Joao" inserida em ptr1 é destruída pelo destrutor da classe, na saída padrão é anunciada a destruição da pessoa
	//"Joao", através do cout do destrutor.
	ptr1.reset();
	// C9 : Após o return o programa entra em processo de encerramento e o ptr2 é desalocado, primeiro com a destruição da classe Pessoa "Marcos"
	// depois com o liberamento da memória inerente ao mesmo, na saída padrão é anunciada a destruição da pessoa "Marcos",
	//através do cout do destrutor da classe Pessoa.
	return 0;
}