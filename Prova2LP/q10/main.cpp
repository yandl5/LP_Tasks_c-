# include <iostream>
# include <memory>
using namespace std ;
class Pessoa
{
private :
	string m_nome ;
public :
	Pessoa ( string nome_ ) : m_nome ( nome_ ) {};
	~ Pessoa () { cout << " Destruindo " << m_nome << " ... " << endl ; };
	string getNome () { return m_nome ; };
};
void quemEhEstaPessoa ( Pessoa * p ) {
	cout << " Esta pessoa eh : " <<p->getNome()<< endl ;
}
int main ( int argc , char const * argv [])
{
// C1 : Cria um ponteiro inteligente ptr que aponta para a instância(de Pessoa) "Sergio", não altera a saída.
auto ptr=make_shared<Pessoa>(" Sergio ");
// C2 : Utiliza a notação de ponteiro, permitida pelo ponteiro inteligente, para invocar o método
// getNome(). Imprime o string "Sergio" na saída padrão, como resultado da execução do método getNome().
cout <<ptr->getNome()<<endl;
// C3 : Chama a função quemEhEstaPessoa, utilizando o ponteiro ptr como referência, utiliza-se o mesmo artifício do C2
// para obtenção do nome. Imprime o sufixo estabelecido da função e o string "Sergio" na saída padrão, como resultado da execução
// da função quemEhEstaPessoa(Pessoa *p).
quemEhEstaPessoa(ptr.get());
// C4 : É criado um novo ponteiro utilizando como referência o ponteiro já existente ptr
// esse procedimento é possível pois os ponteiros são shared, não altera a saída.
shared_ptr<Pessoa> aquelaPessoa=ptr;
// C5 : Modifica o string contido em ptr, porém como esse string ainda está presente em aquelaPessoa, o mesmo ainda não é destruído.
// Alteração do string para "Thiago", não altera a saída padrão. 
ptr.reset(new Pessoa(" Thiago "));
// C6 : Após a função reset ser executada o string "Sergio" deixa de existir, não há qualquer referência a ele, então a classe é destruída
//invoca-se o método destrutor gerando como saída o string inerente ao objeto "Sergio". Após o término do programa o ptr também
// é destruído gerando a saída "Thiago" também inerente ao destrutor da classe Pessoa.
aquelaPessoa.reset();
return 0;
}