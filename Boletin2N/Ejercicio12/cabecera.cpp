#include "cabecera.h"
#include<list>
using namespace std;

list<int> funcionNF(int num)
{
	list<int> l;
	int div = num;
	return funcionNF(num,div,l);
}

list<int> funcionNF(int num,int div,list<int> l)
{
	if(div==0)
	{
		return l;
	}
	else
	{
		if(num%div==0)
		{
			l.push_back(div);
			return funcionNF(num,div-1,l);
			
		}
		else
		{
			return funcionNF(num,div-1,l);
		}
	}
}
list<int> funcionF(int num)
{	
	list<int> l;
	int div = num;
	return funcionG(num,l,div);
}
list<int> funcionG(int num, list<int> acum, int div)
{
	if(div==0)
	{
		return acum;
	}
	else
	{	
		//int div = num;
		if(num%div == 0)
		{
			return funcionG(num,inserta(acum,div),div-1);
		}
		else
		{
			return funcionG(num,acum,div-1);
		}
	}
}
list<int> funcionI(int num)
{
	list<int> l;
	int div = num;
	while(div>0)
	{
		if(num%div == 0)
		{
			l.push_back(div);
			div = div - 1;
		}
		else
		{
			div = div - 1;
		}
	}
	return l;
}
list<int> inserta (list<int> l, int elem)
{
	l.push_back(elem);
	return l;	
}
void muestra(list<int> l)
{	
	cout<< "Divisores : ";
	for(int i : l)
	{
		if(i==1)
		{
			cout << i<<"."<<endl;
			break;
		}
		cout<<i<<", ";	
	}
}
