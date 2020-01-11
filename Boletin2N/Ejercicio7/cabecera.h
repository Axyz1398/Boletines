#ifndef _CABECERA_H_
#define _CABECERA_H_
#include<iostream>
#include <vector>
using namespace std;

class Punto
{
	private:
		int x;
		int y;
	public:
		Punto(int x =0, int y=0)
		{
			setX(x);
			setY(y);
		}
		int getX() const {return x;}
		int getY() const {return y;}
		void setX(int x) {this->x = x;} 
		void setY(int y) {this->y = y;}
};

Punto funcionNF(vector<Punto> puntos);
Punto funcionF(vector<Punto> puntos);
Punto funcionG(vector<Punto> puntos, Punto mayor);
Punto funcionI(vector<Punto> puntos);
void mostrar(Punto p);
#endif
