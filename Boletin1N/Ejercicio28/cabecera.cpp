#include "cabecera.h"
#include <iostream>
#include <set>

using namespace std;

bool Persona::operator < (Persona const& p) const
{
	return getDNI() < p.getDNI();
}
multiset<Persona> eliminaRepetidos(multiset<Persona> &mp)
{
	multiset<Persona> maux;
	multiset<Persona> copia;
	copia = mp;
	for(Persona p : mp)
	{
		if(copia.count(p)>1)
		{
			maux.insert(p);
			copia.erase(p);
		}
		if(mp.count(p)==1)
		{
			maux.insert(p);
		}
	}
	return maux;

}
void mostrar(multiset<Persona> m)
{
	for(Persona p : m)
	{
		cout << "-------------------" << endl;
		cout << p.getNombre() << ", " << p.getEdad() << ", " << p.getDNI() << "." << endl;
	}
}
