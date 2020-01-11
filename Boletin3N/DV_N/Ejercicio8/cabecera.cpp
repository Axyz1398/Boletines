#include "cabecera.h"
#include <iostream>

using namespace std;

float maximo(float p1,float p2, float p3, float p4)
{
	float maximo = p1;
	if(maximo<p2)
	{
		maximo=p2;
	}
	if(maximo<p3)
	{
		maximo = p3;
	}
	if(maximo<p4)
	{
		maximo = p4;
	}
	return maximo;
}
float maximoEnTerreno(float **m, int i, int j, int n)
{
	float res;
	if(n==1)
	{
		res = m[i][j];
	}
	else
	{
		int tam = n/2;
		float res1 = maximoEnTerreno(m,i,j,tam);
		float res2 = maximoEnTerreno(m,i,j+tam,tam);
		float res3 = maximoEnTerreno(m,i+tam,j,tam);
		float res4 = maximoEnTerreno(m,i+tam,j+tam,tam);
		res = maximo(res1,res2,res3,res4);
	}
	return res;
}
