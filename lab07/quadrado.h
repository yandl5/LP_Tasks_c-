#ifndef QUADRADO
#define QUADRADO
class quadrado
{
private:
	float lado;
	float perimetro;
	float area;
public:
	quadrado(float Lado);
	~quadrado();
	float getPerimetro();
	float getArea();
};
#endif