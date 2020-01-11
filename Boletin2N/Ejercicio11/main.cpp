#include "cabecera.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "ANA";
	cout << funcionNF(s,0,3) << endl;
	cout << "--------------"<<endl;
	cout << funcionF(s,0,3) << endl;
	cout << "--------------"<<endl;
	cout << funcionI(s,0,3) << endl;
	cout << "--------------"<<endl;
	return 0;
}
