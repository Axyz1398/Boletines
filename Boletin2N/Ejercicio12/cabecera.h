#ifndef _CABECERA_H_
#define _CABECERA_H_
#include<iostream>
#include<list>

using namespace std;

list<int> funcionNF(int n);
list<int> funcionNF(int num,int div,list<int> l);
list<int> funcionF(int n);
list<int> funcionG(int n, list<int> acum,int div);
list<int> funcionI(int n);
list<int> inserta (list<int> l, int elem);
void muestra(list<int> l);

#endif
