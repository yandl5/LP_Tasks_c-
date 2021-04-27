#include "piramide.h"
/**
* @brief Usa métodos da classe quadrado e triângulo para definições.
* @param recebe-se base triângulo, altura do triângulo, lado do quadrado e altura da pirâmide
*/
piramide::piramide(float baseTriangulo, float alturaTriangulo, float ladoQuadrado , float AlturaPiramide)
{
	triangulo a(baseTriangulo,alturaTriangulo);
	quadrado b(ladoQuadrado);
	areaBase = b.getArea();
	areaTriangulo = a.getArea();
	alturaPiramide = AlturaPiramide; 
	area = ( (areaTriangulo * 4) + areaBase);
	volume = ((AlturaPiramide * areaBase) / 3);
}
piramide::~piramide(){}
float piramide::getVolume()
{
	return volume;
}
float piramide::getArea()
{
	return area;
}