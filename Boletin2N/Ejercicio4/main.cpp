#include "cabecera.h"
#include <iostream>

using namespace std;

int main()
{
	int arrayNI[10] = {1,2,3,4,5,6,7,8,9,10};
	int arrayI[10] = {1,3,5,7,9,11,13,15,17,19};
	cout << "--------------Funcion No Final------------------"<<endl;
	cout << funcionNF(arrayNI, 10)<<endl;
	cout << funcionNF(arrayI, 10)<<endl;
	cout << "--------------Funcion Final------------------"<<endl;
	cout << funcionF(arrayNI, 10)<<endl;
	cout << funcionF(arrayI, 10)<<endl;
	cout << "--------------Funcion Iterativa------------------"<<endl;
	cout << funcionI(arrayNI, 10)<<endl;
	cout << funcionI(arrayI, 10)<<endl;
	return 0;
}
