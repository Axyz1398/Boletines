#ifndef _CABECERA_H_
#define _CABECERA_H_
#include <map>
#include <list>

using namespace std;

map<int,list<char>> frecuenciaInversa(string s);
map<char,int> frecuencia(string s);
void mostrar(map<int,list<char>> m);
string mostrar(list<char> l);
#endif
