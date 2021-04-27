#include "quadrado.h"
quadrado::quadrado(float Lado)
{
	lado = Lado;
	area = lado * lado;
	perimetro = 4 * lado;
}
quadrado::~quadrado(){}
float quadrado::getArea()
{
	return area;
}
float quadrado::getPerimetro()
{
	return perimetro;
}