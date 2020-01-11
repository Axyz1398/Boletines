#include "cabecera.h"

using namespace std;


pair<int,int> funcionNF(int num, int div)
{
	return funcionNF(num,div,1);
}
pair<int,int> funcionNF(int num, int div, int c)
{
	pair<int,int> res;
	if((num-div)<div)
	{
		res.first = c;
		res.second = num-div;
		return res;
	}
	else
	{
		c = c+1;
		//res.first++;
		res.second = num - div;
		//aumento(res,div);
		return funcionNF(num-div,div,c);
	}

}
pair<int,int> funcionF(int num,int div)
{
	pair<int,int> acum;
	acum.first = 1;
	acum.second = num - div;
	return funcionG(num,div,acum);
}
pair<int,int> funcionG(int num, int div, pair<int,int> acum)
{
	if((num-div)<div)
	{
		return acum;
	}
	else
	{
		return funcionG(num-div,div,aumento(acum,div) );
	}
}
pair<int,int> funcionI(int num, int div)
{
	pair<int,int> solucion;

	int cociente = 0;
	int resto = num;
	while(resto>=div)
	{
		resto = resto - div;
		cociente = cociente + 1;
	}
	solucion.first = cociente;
	solucion.second = resto;
	return solucion;
}
void muestra(pair<int,int> par)
{
	cout << "Cociente: " << par.first << endl;
	cout << "Resto: " << par.second << endl;
}
pair<int,int> aumento(pair<int,int> par, int div)
{
	int cociente = par.first;
	int resto = par.second;
	cociente = cociente + 1;
	resto = resto - div;
	par.first = cociente;
	par.second = resto;
	return par;
}
