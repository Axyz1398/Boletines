#include "cabecera.h"

using namespace std;


int funcionM(int n)
{
	if(n<4)
	{
		return n;
	}
	else
	{
		return (2*funcionM(n-1))+funcionM(n-2)-(2*funcionM(n-4));
	}
}
int funcionI(int n)
{
	int n0 = 0;
	int n1 = 1;
	int n2 = 2;
	int n3 = 3;
	int res = n;
	while(n>=4)
	{
		res=(2*n3)+n2-(2*n0);
		n0=n1;
		n1=n2;
		n2=n3;
		n3=res;
		n = n - 1;
	}
	return res;
}

