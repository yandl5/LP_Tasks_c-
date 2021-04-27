#include "circulo.h"
circulo::circulo(float Raio)
{
	raio = Raio;
	area = pi * (raio * raio);
	perimetro = 2 * pi * raio;
}
circulo::~circulo(){}
float circulo::getArea()
{
	return area;
}
float circulo::getPerimetro()
{
	return perimetro;
}
