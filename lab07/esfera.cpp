#include "esfera.h"
esfera::esfera(float Raio)
{
	raio = Raio;
	area = ( 4 * pi * (raio * raio) );
	volume = ( ( 4 * pi * ( raio * raio * raio) ) /3 );
}
esfera::~esfera(){}
float esfera::getArea()
{
	return area;
}
float esfera::getVolume()
{
	return volume;
}