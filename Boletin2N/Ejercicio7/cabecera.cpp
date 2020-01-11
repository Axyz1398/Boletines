#include "cabecera.h"

using namespace std;

/*Punto funcionNF(vector<Punto> puntos)
{
	funcionNF(puntos, puntos.size()-1);
}

Punto funcionNF(vector<Punto> puntos, int n)
{
	
	if(n==0)
	{
		Punto p=puntos[0];
		return p;
	}
	else
	{	/*if(v[n].getX()>mayor.getX()){
			return mayorGF(v,n-1,v[n]);
		}
		else{
			return mayorGF(v,n-1,mayor);
		}	*/
		/*Punto p;
		
		if(p.getX()<puntos[n].getX())
		{
			p = 
		}
		return funcionNF(puntos, n-1);
	}
}
Punto funcionF(vector<Punto> puntos)
{

}
Punto funcionG(vector<Punto> puntos, Punto mayor)
{

}*/
Punto funcionI(vector<Punto> puntos)
{
	Punto p = puntos[0];
	int i = 0;
	int n = puntos.size();
	while(i<n)
	{
		if(p.getX()<puntos[i].getX())
		{
			p = puntos[i];
		}
		i = i+1;
	}
	return p;
	
}
void mostrar(Punto p)
{
	cout << "Punto x: "<<p.getX()<<" y: "<<p.getY()<<endl;
}
