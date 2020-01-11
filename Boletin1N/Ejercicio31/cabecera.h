#ifndef _CABECERA_H_
#define _CABECERA_H_
#include <map>
#include <list>

using namespace std;

list<string> creaLista(string s);
map<string,list<int>>  posicionPalabra(list<string> l);
void mostrar(map<string,list<int>> m);
string mostrar(list<int> lista);

#endif
