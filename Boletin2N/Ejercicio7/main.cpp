#include "cabecera.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<Punto> puntos;
	Punto p1(1,3);
	Punto p2(4,5);
	Punto p3(0,2);
	Punto p4(9,1);
	Punto p5(3,1);
	puntos.push_back(p1);
	puntos.push_back(p2);
	puntos.push_back(p3);
	puntos.push_back(p4);
	puntos.push_back(p5);
	
	mostrar(funcionI(puntos));
	return 0;
}
