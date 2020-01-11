#include "cabecera.h"
#include <map>
#include <iostream>
#include <list>
#include <set>

using namespace std;

map<int,list<char>> frecuenciaInversa(string s)
{
	map<char,int> m = frecuencia(s);
	map<int,list<char>> inverso;
	set<int> num;
	list<char> letras;
	for(auto par : m)
	{	
		int segundo = par.second;
		char primero = par.first;
		if(num.count(segundo)==0)
		{
			letras.push_back(primero);
			num.insert(segundo);
			inverso.insert({segundo, letras});
			letras.clear();
		}
		else
		{
			letras = inverso.at(segundo);
			letras.push_back(primero);
			inverso[segundo] = letras;
			letras.clear();
		}
	}
	return inverso;
}
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
void mostrar(map<int,list<char>> m)
{
	map <int,list<char>>::reverse_iterator itmp=m.rbegin();
	while(itmp!=m.rend())
	{
		cout << itmp->first << ": " << mostrar(itmp->second) << endl;
		itmp++;
	}
	cout << "***************************" << endl;	

}
string mostrar(list<char> l)
{
	string s;
	string valor;
	int cont=0;
	for(char i : l)
	{
		valor = i;
		if(cont<l.size()-1)
		{
			s = s + valor+", ";
		}
		else
		{
			s = s + valor;
		}
		cont++;
	}
	return "[" + s + "]";

}


