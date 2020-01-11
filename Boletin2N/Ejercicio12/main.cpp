#include "cabecera.h"
#include <iostream>
#include <list>
using namespace std;

int main()
{
	int n;
	cout << "Introduzca un numero: ";
	cin >> n; 
	cout<<"------NO FINAL--------"<<endl;
	muestra(funcionNF(n));
	cout<<"**********************"<<endl;
	cout<<"--------FINAL--------"<<endl;
	muestra(funcionF(n));
	cout<<"**********************"<<endl;
	cout<<"------ITERATIVA--------"<<endl;
	muestra(funcionI(n));
	cout<<"**********************"<<endl;
	
	return 0;
}
