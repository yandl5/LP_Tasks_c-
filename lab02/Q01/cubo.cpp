#include "cubo.h"
cubo::cubo(float Aresta)
{
	aresta = Aresta;
	area = (6 * (aresta * aresta));
	volume = (aresta * aresta * aresta); 
}
cubo::~cubo(){}
float cubo::getArea()
{
	return area;
}
float cubo::getVolume()
{
	return volume;
}