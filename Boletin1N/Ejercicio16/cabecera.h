#ifndef _CABECERA_H_
#define _CABECERA_H_
#include <iostream>
#include <vector>

using namespace std;
class factorial{
	private:
		vector<int> vFactoriales;
	public:
		//CONSTRUCTOR
		factorial();
		
		//OBSERVADORES
		int getFactorial(int n);
		
};

int calcFactorial(int n);
#endif
