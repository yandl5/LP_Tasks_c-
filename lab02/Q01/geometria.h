#ifndef GEOMETRIA
#define GEOMETRIA
#include <string>
#include <vector>
class geometria
{
private:
	std::vector<std::string> Geometria;
public:
	geometria(std::vector<std::string> a);
	~geometria();
	void redirecionar();
	void exibirLista();
};
#endif