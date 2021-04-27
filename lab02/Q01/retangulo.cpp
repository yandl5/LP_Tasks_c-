#include "retangulo.h"
retangulo::retangulo(float Altura, float Base)
{
	altura = Altura;
	base = Base;
	perimetro = 2 * (base + altura);
	area =  base*altura;
}
retangulo::~retangulo(){}
float retangulo::getPerimetro()
{
	return perimetro;
}
float retangulo::getArea()
{
	return area;
}