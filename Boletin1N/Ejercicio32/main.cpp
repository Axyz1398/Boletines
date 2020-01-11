#include "cabecera.h"
#include <iostream>
#include <map>
int main()
{
	
	//string s = "la palabra que más aparece en este texto es la palabra palabra";
	string s = "Hola me llamo Antonio";
	map<int,list<char>> m;
	m = frecuenciaInversa(s);
	mostrar(m);
}
