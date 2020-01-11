#include "cabecera.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//Excepcion tamaño vector (comprueba negativos, establece maximo, solo enteros)TODO
	
	
int main(){
	try
	{
	int t;
	int n;
	int cont = 0;
	vector<int> vInt;
	vector<string> vString;
	vector<float> vFloat;
	int elemInt;
	string elemString;
	float elemFloat;
	cout << "Estas ingresando el tipo de vector que quieres." << endl;
	cout << "Ingresar 1 para tipo int" << endl;
	cout << "Ingresar 2 para tipo string" << endl;
	cout << "Ingresar 3 para tipo float" << endl;
	cin >> t;
	if(t<1 || t>3)
	{
		throw 20;
		//throw "ERROR: Ingreasado tipo incorrecto. Solo son validos los valores enteros 1, 2, 3";
	}
	cout << "Estas ingresando el tamaño de tu vector" << endl;
	cin >> n;
	switch(t)
	{
		case 1:
			{
			cout << "Seleccionado vector tipo int" << endl;
			//vector<int> vInt(n);
			vInt.assign(n,0);
			break;
			}
		case 2:
			{
			cout << "Seleccionado vector tipo string" << endl;
			vString.assign(n,"");
			break;
			}
		case 3:
			{
			cout << "Seleccionado vector tipo float" << endl;
			vFloat.assign(n,0.0);
			break;
			}
		default:
			cout << "Ha ingreado un numero incorrecto" << endl;
	}
	while(cont < n)
	{
		cout << "Tienes un vector de " << n << " elementos" << endl;
		cout << "Usted esta ingresando la posicion " << cont << endl;
		switch (t)
		{
			case 1:
				{
				cin >> elemInt;
				addElemento(vInt,elemInt,cont); //LLamando a la funcion no funciona necesario poner codigo directamente
				//vInt.at(cont) = elemInt;
				cout << "comprobarcion añadido " << vInt.at(cont) << endl; //Debugger Personal
				break;
				}
			case 2:
				{
				cin >> elemString;
				addElemento(vString,elemString,cont);
				//vString.at(cont) = elemString;
				//cout << "comprobarcion añadido " << vString.at(cont) << endl; //Debugger Personal
				break;
				}
			case 3:
				{
				cin >> elemFloat;
				addElemento(vFloat,elemFloat,cont);
				//vFloat.at(cont) = elemFloat;
				break;
				}
		}
		
		cont++;	
	}
	switch(t)
	{	
		case 1:
		guardaEnFichero(vInt);
		break;
		case 2:
		guardaEnFichero(vString);
		break;
		case 3:
		guardaEnFichero(vFloat);
		break;
	}
	
	}
	
	catch(int e){
		cout << "ERROR: Ingreasado tipo incorrecto. Solo son validos los valores enteros 1, 2, 3" << endl;
		
	}
	catch(...){
		cout << "Excepcion no manejada" << endl;
	}
/*	catch(){}
	catch(){}*/

}
