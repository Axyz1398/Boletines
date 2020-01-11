#ifndef _CABECERA_H_
#define _CABECERA_H_
#include <iostream>
#include <vector>

using namespace std;


void addElemento(vector<int> &v, int elem, int cont);
void addElemento(vector<string> &v, string elem, int cont);
void addElemento(vector<float> &v, float elem, int cont);
void guardaEnFichero(vector<int> v);
string mostrar(vector<int> v);
void guardaEnFichero(vector<string> v);
string mostrar(vector<string> v);
void guardaEnFichero(vector<float> v);
string mostrar(vector<float> v);

#endif
