#ifndef _CABECERA_H_
#define _CABECERA_H_
#include <iostream>

using namespace std;

class Plano{
	private:
		int x;
		int y;
		int z;
	public:
		//Constructor
		Plano(int x=0, int y=0, int z=0){
			setX(x);
			setY(y);
			setZ(z);
		}
		Plano(Plano const& p){
			*this = p;
		}
		//Observadores
		int getX() const {return x;}
		int getY() const {return y;}
		int getZ() const {return z;}
		//modificador
		void setX(int x){this->x=x;}
		void setY(int y){this->y=y;}
		void setZ(int z){this->z=z;}
		//sobrecarga
		Plano& operator + (const Plano &p);
    	Plano& operator - (const Plano &p);
    	Plano& operator * (const Plano &p);
    	Plano& operator / (const Plano &p);
    	Plano& operator ++();
    	Plano& operator --();
    	Plano operator ++(int);
    	Plano operator --(int);
};

#endif
