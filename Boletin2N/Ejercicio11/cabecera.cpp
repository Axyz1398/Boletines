#include "cabecera.h"
#include <iostream>
#include <string>
using namespace std;

bool funcionNF(string s, int p, int f)
{
	//p = s.begin();
	//f = s.end;
	if(p >= f)
	{
		return true;
	}
	else
	{	
		return (s[p] == s[f-1]) && funcionNF(s, p+1,f-1);
	}
	
}
bool funcionF(string s, int p, int f)
{
	return funcionG(s,p,f,true);
}
bool funcionG(string s, int p, int f, bool acum)
{
	if(p >= f)
	{
		return acum;
	}
	else
	{
		return funcionG(s,p+1,f-1,acum && (s[p]==s[f-1]));
	}
}
bool funcionI(string s, int p, int f)
{
	bool acum = true;
	while(p>=f)
	{
		acum = (s[p] == s[f-1]);
		p = p+1;
		f = f-1;
	}
	return acum;
}

