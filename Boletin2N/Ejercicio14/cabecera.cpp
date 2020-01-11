#include "cabecera.h"

using namespace std;

int funcionM(int n, int k)
{
	if(k==0)
	{
		return 1;
 	}
 	if(n==0)
 	{
 		return 0;
 	}
 	else
 	{
 		
		//return funcionM(n-1,k-1)+ funcionM(n-1,k);//C
		return funcionM(n,k-1)+ funcionM(n-1,k);//CR
	}	
}
int funcionI(int n, int k)
{	
	int res1 = 1;
	int res2 =1;
	int res3 =1;
	int fact1 = n+k-1;
	int fact2 = k;
	int fact3 = n-1;
	bool bol1 = true;
	bool bol2 = true;
	bool bol3 = true;
	
	while(bol1||bol2||bol3)
	{
		if(bol1)
		{	
			if(fact1==0)
			{
				bol1=false;
			}
			if(bol1)
			{
				res1=res1*fact1;
			}
		}
		if(bol2)
		{	
			if(fact2==0)
			{
				bol2=false;
			}
			if(bol2)
			{
				res2=res2*fact2;
			}
		}
		if(bol3)
		{	
			if(fact3==0)
			{
				bol3=false;
			}
			if(bol3)
			{
				res3=res3*fact3;
			}
		}
		fact1 = fact1-1;
		fact2 = fact2-1;
		fact3 = fact3-1;
		
	}
	return res1/(res2*res3);
}

