#include "cabecera.h"
#include <iostream>
#include <set>

using namespace std;

int main()
{
	Persona p1("Antonio", 21, "77867618Z");
	Persona p2("Ramon", 21,   "77867618Z");
	Persona p3("Pepe", 21,    "77867618Z");
	Persona p4("Gonzalo", 21, "77867618Z");
	Persona p5("Juan", 20,    "72800618Z");
	Persona p6("Carlos", 29,  "17867618Z");
	Persona p7("Nacho", 19,   "73467618Z");
	Persona p8("Carlos", 23,  "76567618Z");
	Persona p9("Antonio", 21, "77867618Z");
	multiset<Persona> mp;
	mp.insert(p1);
	mp.insert(p2);
	mp.insert(p3);
	mp.insert(p4);
	mp.insert(p5);
	mp.insert(p6);
	mp.insert(p7);
	mp.insert(p8);
	mp.insert(p9);
	mostrar(mp);
	cout << "------------------SIN REPETIDOS(Criterio por dni)----------------"<<endl;
	mostrar(eliminaRepetidos(mp));


}
