#include "cabecera.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;


void addElemento(vector<int> &v, int elem, int cont){
	v.at(cont) = elem;
}

void addElemento(vector<string> &v, string elem, int cont){
	v.at(cont) = elem;
}

void addElemento(vector<float> &v, float elem, int cont){
	v.at(cont) = elem;
}
void guardaEnFichero(vector<int> v){
	ofstream sal("salida.txt");
	sal << "Vector de tipo int y tamaño n = " << v.size() << " cuyos elementos son: " << mostrar(v) << "." << endl;	
	sal.close();
}
string mostrar(vector<int> v){
	string s;
	for(int i=0; i<v.size(); i++)
	{
		string num = to_string(v.at(i));
		if(i<v.size()-1)
		{
			if(i==0)
			{
				s = "{ ";
			}
			s = s + num + ", ";
		}
		else
		{
			s = s + num + " }";
		}
	}
	
	return s;
}
void guardaEnFichero(vector<string> v){
	ofstream sal("salida.txt");
	sal << "Vector de tipo string y tamaño n = " << v.size() << " cuyos elementos son: " << mostrar(v) << "." << endl;	
	sal.close();
}
string mostrar(vector<string> v){
	string s;
	for(int i=0; i<v.size(); i++)
	{
		//string num = to_string(v.at(i));
		if(i<v.size()-1)
		{
			if(i==0)
			{
				s = "{ ";
			}
			s = s + v.at(i) + ", ";
		}
		else
		{
			s = s + v.at(i) + " }";
		}
	}
	
	return s;
}
void guardaEnFichero(vector<float> v){
	ofstream sal("salida.txt");
	sal << "Vector de tipo float y tamaño n = " << v.size() << " cuyos elementos son: " << mostrar(v) << "." << endl;	
	sal.close();
}
string mostrar(vector<float> v){
	string s;
	for(int i=0; i<v.size(); i++)
	{
		string num = to_string(v.at(i));
		if(i<v.size()-1)
		{
			if(i==0)
			{
				s = "{ ";
			}
			s = s + num + ", ";
		}
		else
		{
			s = s + num + " }";
		}
	}
	
	return s;
}
