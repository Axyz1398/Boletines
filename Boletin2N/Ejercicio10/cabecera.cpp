#include "cabecera.h"
#include <iostream>
#include <string>

using namespace std;

string funcionNF(string s, int n)
{
	if(n==0)
	{
		
		return "";
	}
	else
	{
		return s[n-1] + funcionNF(s, n-1);
	}
}
string funcionF(string s, int n)
{
	return funcionG(s,n,"");
}
string funcionG(string s, int n, string acum)
{
	if(n==0)
	{
		return acum;
	}
	else
	{
		return funcionG(s,n-1,acum+s[n-1]);
	}
}
string funcionI(string s, int n)
{
	string acum = "";
	while(n>0)
	{
		acum = acum + s[n-1];
		n = n-1;
	}
	return acum;
}

