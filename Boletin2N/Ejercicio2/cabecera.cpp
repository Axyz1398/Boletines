#include "cabecera.h"

using namespace std;

int sumaCuadradosNF(int v[], int n)
{
	if(n==1)
	{	
		int res;
		//int elem = n-1;
		res = v[0] * v[0];
		return res;
	}
	else
	{
		int res;
		int elem = n-1;
		res = (v[elem]*v[elem])+sumaCuadradosNF(v, n-1);
		return res;
	}
}
int sumaCuadradosF(int v[], int n)
{
	return sumaCuadradosG(v, n, 0);
}
int sumaCuadradosG(int v[], int n, int acum)
{
	if(n==0)
	{	
		return acum;
	}
	else
	{
		return sumaCuadradosG(v, n-1, acum+(v[n-1]*v[n-1]));
	}
}
int sumaCuadradosI(int v[], int n)
{
	int acum = 0;
	while(n>0)
	{
		acum = acum + (v[n-1]*v[n-1]);
		n = n-1;
	}
	return acum;
}

