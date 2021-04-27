#include "triangulo.h"
triangulo::triangulo(float Base, float Altura)
{
	altura = Altura;
	base = Base;
	perimetro = (base * 3);
	area = ( (base*altura) / 2);
}
triangulo::~triangulo(){}
float triangulo::getPerimetro()
{
	return perimetro;
}
float triangulo::getArea()
{
	return area;
}