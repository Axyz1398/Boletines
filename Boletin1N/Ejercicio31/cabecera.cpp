#include "cabecera.h"
#include <map>
#include <iostream>
#include <list>
#include <string>
using namespace std;

list<string> creaLista(string s)
{
	list<string> palabras;
	string palabra;
	s = s + " ";
	for(char letra : s)
	{	
		if(letra != ' ')
		{
			palabra = palabra + letra;
		
		}
		else
		{
			palabras.push_back(palabra);
			palabra = "";
		}
	}
	return palabras;
}
map<string,list<int>>  posicionPalabra(list<string> lista)
{
	map<string,list<int>> indice;
	list<int> laux;
	int cont = 0;
	for(string palabra : lista)
	{	
		if(indice.count(palabra)==0)
		{
		laux.push_back(cont);
		indice.insert({palabra, laux});
		}
		else
		{	
			laux = indice.at(palabra);
			laux.push_back(cont);
			indice[palabra] = laux;
			
		}
		laux.clear();
		cont++;
	}
	return indice;
	
}
void mostrar(map<string,list<int>> mapa)
{
	map <string,list<int>>::iterator itmp=mapa.begin();
	while(itmp!=mapa.end())
	{
		cout << itmp->first << ": " << mostrar(itmp->second) << endl;
		itmp++;
	}
	cout << "***************************" << endl;	
	
}
string mostrar(list<int> lista)
{
	string s;
	string valor;
	int cont=0;
	for(int i : lista)
	{
		valor = to_string(i);
		if(cont<lista.size()-1)
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

