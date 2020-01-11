#include "cabecera.h"
#include <fstream>
#include <iostream>
using namespace std;

/*¿Qué ocurriría si la función debe abrir un fichero, escribir en el fichero y
cerrar el fichero mostrando por pantalla lo escrito? ¿Cómo se podría
hacer?*/
void funcionA() throw (int)
{
	cout << "Estas en funcion A" << endl;
	ofstream fichero;
	fichero.open("fichero.txt");
	string cadena;
	cin >> cadena;
	fichero << cadena;
	cout << cadena << endl;
	fichero.close();
	if(true)
	{
		throw 4;
	}
	cout << "No se ha lanzado la excepcion" << endl;
	
}
void funcionB() throw (int)
{
	cout << "Estas en funcion B" << endl;
	int result;
	
	result = 3/0;
	cout << result << endl;
	if(true)
	{
		throw 4;
	}
	cout << "No se ha lanzado la excepcion" << endl;
}
void funcionC() throw (int)
{
	try
	{
	cout << "Estas en funcion C" << endl;
	int n;
	cout << "Tamaño del array: ";
	cin >> n;
	int foo[n];
	int arr[4];
	cout << "Array de tamaño: "<< sizeof(foo)/4 << endl;
	cout << "Array de tamaño(definida como 4): "<< sizeof(arr)/4 << endl;
	}
	catch(...)
	{
		cout<<"Excepcion indefinida"<<endl;
	}
	if(true)
	{
		throw 4;
	}
	cout << "No se ha lanzado la excepcion" << endl;
}
