#include "cabecera.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Creacion del vector factorial" << endl;
	factorial f;
	int n;
	/*cout<< "Factorial 0: " << f.getFactorial(0) <<endl;
	cout<< "Factorial 1: " << f.getFactorial(1) <<endl;
	cout<< "Factorial 2: " << f.getFactorial(2) <<endl;
	cout<< "Factorial 3: " << f.getFactorial(3) <<endl;
	cout<< "Factorial 4: " << f.getFactorial(4) <<endl;
	cout<< "Factorial 5: " << f.getFactorial(5) <<endl;
	cout<< "Factorial 6: " << f.getFactorial(6) <<endl;
	cout<< "Factorial 7: " << f.getFactorial(7) <<endl;
	cout<< "Factorial 8: " << f.getFactorial(8) <<endl;
	cout<< "Factorial 9: " << f.getFactorial(9) <<endl;*/
	cout << "Factorial del numero: ";
	cin >> n;
	
	if(n<=9)
	{
		cout << "Factorial " << n << ": " << f.getFactorial(n) << endl;
	}
	else
	{
		cout << "No es posible hacer la operacion" << endl;
	}
}
