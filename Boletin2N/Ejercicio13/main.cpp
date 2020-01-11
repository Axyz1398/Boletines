#include "cabecera.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"introduzca un numero: "<<endl;
	cin >> n;
	potenciasSucesivasNF(n);
	cout<<"******************************************"<<endl;
	potenciasSucesivasF(n);
	cout<<"******************************************"<<endl;
	potenciasSucesivasI(n);

	return 0;
}
