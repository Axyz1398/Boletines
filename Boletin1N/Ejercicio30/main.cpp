#include "cabecera.h"
#include <map>
#include <iostream>
using namespace std;

int main()
{
	map<char,int> m;
	m.insert({'a', 1});
	cout << m.at('a')<<endl;
	
	m.insert({'a', 2});
	cout << m.at('a')<<endl;
	
	string s = "Hola que tal";
	m = frecuencia(s);
	mostrar(m);
	string cadenaLarga = "akjbfañekrugioerjfqoweriqwortwoitegmdmvns ad.kf akñhwoñeifhqógujeiaeñkrihfqñoertierovad.adlfbojaáhfueaifha.ek";
	m = frecuencia(cadenaLarga);
	mostrar(m);
	

}
