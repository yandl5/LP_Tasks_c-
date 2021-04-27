#ifndef RETANGULO
#define RETANGULO
class retangulo
{
private:
	float altura;
	float base;
	float perimetro;
	float area;
public:
	retangulo(float Base,float Altura);
	~retangulo();
	float getPerimetro();
	float getArea();
};
#endif