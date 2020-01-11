#include "cabecera.h"
#include <iostream>

using namespace std;

int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << "--------------Funcion No Final------------------"<<endl;
	cout << sumaCuadradosNF(array, 10)<<endl;
	cout << "--------------Funcion Final------------------"<<endl;
	cout << sumaCuadradosF(array, 10)<<endl;
	cout << "--------------Funcion Iterativa------------------"<<endl;
	cout << sumaCuadradosI(array, 10)<<endl;
	return 0;
}
