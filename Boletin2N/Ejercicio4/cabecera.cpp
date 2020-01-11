#include "cabecera.h"

using namespace std;

bool funcionNF(int v[], int n)
{
	if(n==1)
	{
		bool res;
		res = Impar(v[0]);
		return res;
	}else
	{
		bool res;
		res = (Impar(v[n-1])) && funcionNF(v,n-1);
		return res;
	}
}
bool funcionF(int v[], int n)
{
	return funcionG(v,n,true);
}
bool funcionG(int v[], int n, bool acum)
{
	if(n==1)
	{	
		return acum && Impar(v[0]);
	}
	else
	{
		return funcionG(v,n-1,Impar(v[n-1]) && acum );
	}
}
bool funcionI(int v[], int n)
{
	bool acum = true;
	while(n>0)
	{
		acum = Impar(v[n-1]) && acum;
		n = n-1; 
	}
	return acum;
	
}
bool Impar(int a)
{
	if(a==1)
	{
		return true;
	}
	else
	{	
		int resto = a % 2;
		return resto != 0;
	}
}
