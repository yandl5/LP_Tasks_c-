#include "paralelepipedo.h"
paralelepipedo::paralelepipedo(float Aresta1, float Aresta2, float Aresta3)
{
	aresta1 = Aresta1;
	aresta2 = Aresta2;
	aresta3 = Aresta3;
	area = ( (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 *aresta3) );
	volume = (aresta1 * aresta2 * aresta3);
}
paralelepipedo::~paralelepipedo(){}
float paralelepipedo::getArea()
{
	return area;
}
float paralelepipedo::getVolume()
{
	return volume;
}