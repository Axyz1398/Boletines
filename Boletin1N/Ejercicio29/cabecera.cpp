#include "cabecera.h"
#include <iostream>
#include <set>

bool Persona::operator < (Persona const& p) const
{
	return getDNI() < p.getDNI();
}
bool Persona::operator==(Persona const& p) const
{
	return getDNI() == p.getDNI();
}

void sumaConjuntos(set<Persona> con1, set<Persona> con2)
{
	set<Persona> salida;
	for(Persona p : con1)
	{
		salida.insert(p);
	}
	for(Persona p : con2)
	{
		salida.insert(p);
	}
	cout << "----------------SUMA DE CONJUNTOS------------------"<<endl;
	mostrar(salida);
	cout << "---------------------------------------------------"<<endl;
}
void restaConjuntosPr(set<Persona> con1, set<Persona> con2)
{
	set<Persona> salida;
	salida=con1;
	for(Persona p : con1)
	{
		for(Persona p2 : con2)
		{
			if(p2==p)
			{
				salida.erase(p);
			}
		}
	}
	cout << "-Conjunto de personas que aparecen en el primer conjunto, pero no en el segundo-"<<endl;
	mostrar(salida);
	cout << "---------------------------------------------------"<<endl;
}
void restaConjuntosSg(set<Persona> con1, set<Persona> con2)
{
	set<Persona> salida;
	salida=con2;
	for(Persona p : con1)
	{
		for(Persona p2 : con2)
		{
			if(p2==p)
			{
				salida.erase(p);
			}
		}
	}
	cout << "-Conjunto de personas que aparecen en el segundo conjunto, pero no en el primero-"<<endl;
	mostrar(salida);
	cout << "---------------------------------------------------"<<endl;
}
void sumaRepetidas(set<Persona> con1, set<Persona> con2)
{
	set<Persona> salida;
	for(Persona p : con1)
	{
		for(Persona p2 : con2)
		{
			if(p2==p)
			{
				salida.insert(p);
			}
		}
	}
	cout << "-------Conjunto de personas que aparecen en ambos conjuntos------"<<endl;
	mostrar(salida);
	cout << "---------------------------------------------------"<<endl;
}
void mostrar(set<Persona> con)
{
	for(Persona p : con)
	{
		cout << "-------------------" << endl;
		cout << p.getNombre() << ", " << p.getEdad() << ", " << p.getDNI() << "." << endl;
	}
}
