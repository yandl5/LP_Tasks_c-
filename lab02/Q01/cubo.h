#ifndef CUBO
#define CUBO
class cubo
{
private:
	float aresta;
	float area;
	float volume;
public:
	cubo(float Aresta);
	~cubo();
	float getVolume();
	float getArea();
};
#endif