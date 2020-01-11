#include "cabecera.h"
#include <iostream>

using namespace std;

int main(){
	
	Plano p(3,2,1);
	cout << p.getX() << ", " << p.getY() << ", " << p.getZ() << endl;
	//p + 1;
	Plano p2(2,2,2);
	p+p2;
	cout << "Suma de planos" << endl;	
	cout << p.getX() << ", " << p.getY() << ", " << p.getZ() << endl;
	p-p2;
	cout << "Resta de planos" << endl;	
	cout << p.getX() << ", " << p.getY() << ", " << p.getZ() << endl;
	p*p2;
	cout << "Multiplicacion de planos" << endl;	
	cout << p.getX() << ", " << p.getY() << ", " << p.getZ() << endl;
	p/p2;
	cout << "Division de planos" << endl;	
	cout << p.getX() << ", " << p.getY() << ", " << p.getZ() << endl;
	++p;
	cout << "PreIncremento de planos" << endl;	
	cout << p.getX() << ", " << p.getY() << ", " << p.getZ() << endl;
	--p;
	cout << "PreDecremento de planos" << endl;	
	cout << p.getX() << ", " << p.getY() << ", " << p.getZ() << endl;
	p++;
	cout << "PostIncremento de planos" << endl;	
	cout << p.getX() << ", " << p.getY() << ", " << p.getZ() << endl;
	p--;
	cout << "PostIncremento de planos" << endl;	
	cout << p.getX() << ", " << p.getY() << ", " << p.getZ() << endl;
	return 0;
	
}
