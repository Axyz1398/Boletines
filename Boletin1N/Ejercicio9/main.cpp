#include "cabecera.h"
#include <fstream>
#include <iostream>

int main()
{
	try
	{
		funcionA();
	}
	catch(int)
	{
		cout << "Excepcion tipo int" << endl;
	}
	catch(...)
	{
		cout << "Excepcion indefinida" << endl;
	}
	try
	{
		funcionC();
	}
	catch(int)
	{
		cout << "Excepcion tipo int" << endl;
	}
	catch(...)
	{
		cout << "Excepcion indefinida" << endl;
	}
	try
	{
		funcionB();
	}
	catch(int)
	{
		cout << "Excepcion tipo int" << endl;
	}
	catch(...)
	{
		cout << "Excepcion indefinida" << endl;
	}
	
	return 0;
}
