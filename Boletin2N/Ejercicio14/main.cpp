#include "cabecera.h"	
#include <iostream>

using namespace std;

int main()
{
	int k;
	int n;
	cout << "Introduzca n: ";
	cin>> n;
	cout <<"Introduzca k: ";
	cin>> k;
	cout << "----------RECURSIVA MULTIPLE----------"<<endl;
	cout<<"Numero de combinaciones con repeticion: " << funcionM(n,k) << endl;
	cout << "**************************************"<<endl;
	cout << "---------------ITERATIVA--------------"<<endl;
	cout<<"Numero de combinaciones con repeticion: " << funcionI(n,k) << endl;
	cout << "**************************************"<<endl;
	
	return 0;
}
