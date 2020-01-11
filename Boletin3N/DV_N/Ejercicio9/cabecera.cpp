#include "cabecera.h"
#include <iostream>

using namespace std;

bool filtro(int **m, int i, int j, int n)
{
	bool result;
	if(n==2)
	{
		result = compara(m[i][j],m[i+1][j+1]);
	}
	else
	{
		int tam = n/2;
		result = compara(m[i][j],m[i+tam-1][j+tam-1]);
		if(!result)
		{
			return result;
		}
		bool p1 = filtro(m,i,j,tam);
		bool p2 = filtro(m,i,j+n/2,n/2);
		bool p3 = filtro(m,i+n/2,j,n/2);
		bool p4 = filtro(m,i+n/2,j+n/2,n/2);
		result = result && (p1 && p2 && p3 && p4);
		if(!result)
		{
			return result;
		}
	}
	
	return result;
}
bool compara(int a, int b)
{
	bool res = (a<b);
}

