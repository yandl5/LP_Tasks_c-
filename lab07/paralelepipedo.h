#ifndef PARALELEPIPEDO
#define PARALELEPIPEDO
class paralelepipedo
{
private:
	float aresta1;
	float aresta2;
	float aresta3;
	float area;
	float volume;
public:
	paralelepipedo(float Aresta1, float Aresta2, float Aresta3);
	~paralelepipedo();
	float getArea();
	float getVolume();
};
#endif