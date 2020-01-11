#include "cabecera.h"
#include <map>
#include <iostream>

using namespace std;

map<char,int> frecuencia(string s)
{	
	map<char,int> mFrecuencia;
	for(char letra : s)
	{
		
		if(mFrecuencia.count(letra)==0)
		{
			mFrecuencia.insert({letra, 1});
		}
		else
		{
			int num = mFrecuencia.at(letra);
			num = num+1;
			mFrecuencia[letra] = num;
		} 
	}
	return mFrecuencia;
}
void mostrar(map<char,int> m)
{
	map <char,int>::iterator itmp=m.begin();
	while(itmp!=m.end())
	{
		cout << itmp->first << ": " << itmp->second << endl;
		itmp++;
	}
	cout << "***************************" << endl;	

}
