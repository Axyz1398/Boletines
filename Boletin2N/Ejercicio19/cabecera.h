#ifndef _CABECERA_H_
#define _CABECERA_H_
#include<iostream>

using namespace std;

pair<int,int> funcionNF(int num,int div);
pair<int,int> funcionNF(int num, int div, int c);
pair<int,int> funcionF(int num, int div);
pair<int,int> funcionG(int num, int div, pair<int,int> acum);
pair<int,int> funcionI(int num, int div);
void muestra(pair<int,int> par);
pair<int,int> aumento(pair<int,int> par, int div);


#endif
