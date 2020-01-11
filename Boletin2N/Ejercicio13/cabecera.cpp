#include "cabecera.h"

using namespace std;

int funcionNF(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return 2 * funcionNF(n-1);
	}
}
int funcionF(int n)
{
	return funcionG(n,1);
}
int funcionG(int n, int acum)
{
	if(n==0)
	{
		return acum;
	}
	else
	{
		return funcionG(n-1,2*acum);
	}
}
int funcionI(int n)
{
	int acum = 1;
	while(n>0)
	{
		acum = 2*acum;
		n = n-1;
	}
	return acum;
}
void potenciasSucesivasNF(int n)
{
	int i =0;
	int pot = funcionNF(i);
	while(n>=i)
	{
		cout << "Potencia " << i << " Valor: " << pot <<endl;
		i = i+1;
		pot = funcionNF(i);
	}

}
void potenciasSucesivasF(int n)
{
	int i =0;
	int pot = funcionF(i);
	while(n>=i)
	{
		cout << "Potencia " << i << " Valor: " << pot <<endl;
		i = i+1;
		pot = funcionF(i);
	}

}
void potenciasSucesivasI(int n)
{
	int i =0;
	int pot = funcionI(i);
	while(n>=i)
	{
		cout << "Potencia " << i << " Valor: " << pot <<endl;
		i = i+1;
		pot = funcionI(i);
	}

}
