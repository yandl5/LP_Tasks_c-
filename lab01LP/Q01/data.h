#ifndef DATA 
#define DATA
#include <iostream>
class data
{
private:
	int dia;
	int mes;
	int ano;
public:
	data();
	~data();
	friend std::ostream& operator<<(std::ostream &o, data const t);
	friend std::istream& operator>>(std::istream &i, data &t);
	int conversorDias();
	int getAno();
};
#endif
