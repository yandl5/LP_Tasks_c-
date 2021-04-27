#ifndef ESFERA
#define ESFERA
#define pi 3.1415
class esfera
{
private:
	float raio;
	float area;
	float volume;
public:
	esfera(float Raio);
	~esfera();
	float getArea();
	float getVolume();
};
#endif