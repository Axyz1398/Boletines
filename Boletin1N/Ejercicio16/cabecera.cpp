#include "cabecera.h"
#include <iostream>
#include <vector>

int calcFactorial(int n)
{
    int f = 1;

    for (int i = n; i >= 1; i--)
    {
        f = f*i;
    }

    return f;
}
factorial::factorial()
{
	vFactoriales.assign(10,0);
	for(int i =0; i<10 ; i++)
	{
		vFactoriales.at(i) = calcFactorial(i);
	}
}
int factorial::getFactorial(int n)
{
	return vFactoriales.at(n);
}

