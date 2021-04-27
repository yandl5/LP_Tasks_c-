#ifndef TRIANGULO
#define TRIANGULO
class triangulo
{
private:
	float altura;
	float base;
	float perimetro;
	float area;
public:
	triangulo(float Base,float Altura);
	~triangulo();
	float getPerimetro();
	float getArea();
};
#endif