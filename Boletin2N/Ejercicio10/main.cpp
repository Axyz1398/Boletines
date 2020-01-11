#include "cabecera.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "1234567891234567";
	int n = s.size();
	cout << "--------------Funcion No Final------------------"<<endl;
	cout << funcionNF(s, n)<<endl;
	cout << "--------------Funcion Final------------------"<<endl;
	cout << funcionF(s, n)<<endl;
	cout << "--------------Funcion Iterativa------------------"<<endl;
	cout << funcionI(s, n)<<endl;
		return 0;
}
