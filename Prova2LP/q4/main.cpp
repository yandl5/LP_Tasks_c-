// Esse programa esta mesmo " bugado "!!!
# include<iostream>
using namespace std ;
int main ( int argc , char const * argv [])
{
	double * d = new double ;
	for(unsigned int i=0;i<3;i++){
		d[i]=1.5+i;
	}
	for(unsigned int i = 2;i>=0;i--){
		cout<<d[i]<< endl;
	}
}