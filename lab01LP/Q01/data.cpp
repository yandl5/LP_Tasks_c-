#include "data.h"
#include <iostream>
data::data()
{

}
data::~data()
{

}
std::ostream& operator<<(std::ostream &o, data const t)
{
	o<<"Data de admissão:"<<t.dia<<"/"<<t.mes<<"/"<<t.ano<<std::endl;
	return o;
}
std::istream& operator>>(std::istream &i, data &t)
{
	i>>t.dia>>t.mes>>t.ano;
	return i;
}
//Uso restrito para converter meses e dias em dias.
int data::conversorDias()
{
	int dias=0;
	for(int i=1;i<this->mes;i++)
	{
		if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			dias=dias+31;
		else if(i == 4 || i == 6 || i == 9 || i==11)
			dias=dias+30;
		else if(i == 2 && (this->ano % 4) == 0)
		{
			if((this->ano % 100) == 0 && (this->ano % 400 == 0))
				dias=dias+29;
			else if((this->ano % 100) == 0 && (this->ano % 400) != 0)
				dias=dias+28;
			else
				dias=dias+29;
		}
		else
			dias=dias+28;
	}	
	return (dias + this->dia);
}
int data::getAno()
{
	return ano;
}
