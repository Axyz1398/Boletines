#include "cabecera.h"
#include <iostream>

using namespace std;

int main()
{	
	int num;
	int div;
	cout << "Introduzca el dividendo: ";
	cin >> num;
	cout << "Introduzca el divisor: "; 
	cin >> div;
	cout << "---------NO FINAL----------"<<endl;
	muestra(funcionNF(num,div));
	cout << "****************************"<<endl;
	cout << "------------FINAL----------"<<endl;
	muestra(funcionF(num,div));
	cout << "****************************"<<endl;
	cout << "---------ITERATIVO----------"<<endl;
	muestra(funcionI(num,div));
	cout << "****************************"<<endl;
	return 0;
}
