#ifndef CIRCULO
#define CIRCULO
#define pi 3.1415 
class circulo
{
private:
	float raio;
	float area;
	float perimetro;
public:
	circulo(float Raio);
	~circulo();
	float getArea();
	float getPerimetro();
};
#endif