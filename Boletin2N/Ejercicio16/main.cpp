#include "cabecera.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Introduzca un numero: ";
	cin >> n;
	cout << "-------RECURSIVA MULTIPLE-------"<<endl;
	cout<<funcionM(n)<<endl;
	cout << "********************************"<<endl;
	cout << "------------ITERATIVA-----------"<<endl;
	cout<<funcionI(n)<<endl;
	cout << "********************************"<<endl;
	return 0;
}
