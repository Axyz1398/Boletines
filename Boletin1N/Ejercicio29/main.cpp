#include "cabecera.h"
#include <iostream>
#include <set>

using namespace std;

int main()
{
	Persona p1("Antonio", 21, "77867618Z");
	Persona p2("Ramon", 21,   "77867698Z");
	Persona p3("Pepe", 21,    "77867628Z");
	Persona p4("Gonzalo", 21, "77867618Z");
	Persona p5("Juan", 20,    "72800618Z");
	Persona p6("Carlos", 29,  "17867618Z");
	Persona p7("Nacho", 19,   "73467618Z");
	Persona p8("Carlos", 23,  "76567618Z");
	Persona p9("Antonio", 21, "77867618Z");
	set<Persona> con1;
	con1.insert(p1);
	con1.insert(p2);
	con1.insert(p3);
	con1.insert(p4);
	set<Persona> con2;
	con2.insert(p5);
	con2.insert(p6);
	con2.insert(p7);
	con2.insert(p8);
	con2.insert(p9);
	sumaConjuntos(con1, con2);
	restaConjuntosPr(con1, con2);
	restaConjuntosSg(con1, con2);
	sumaRepetidas(con1, con2);
}
