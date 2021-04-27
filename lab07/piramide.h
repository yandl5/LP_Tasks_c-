#ifndef PIRAMIDE
#define PIRAMIDE
#include "quadrado.h"
#include "triangulo.h"
class piramide
{
private:
	float areaBase;
	float areaTriangulo;
	float alturaPiramide;
	float area;
	float volume;
public:
	piramide(float baseTriangulo, float alturaTriangulo, float ladoQuadrado, float AlturaPiramide);
	~piramide();
	float getArea();
	float getVolume();
};
#endif