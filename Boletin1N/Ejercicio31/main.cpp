#include "cabecera.h"
#include <map>
#include <list>

int main()
{
	string s = "la palabra que más aparece en este texto es la palabra palabra";
	list<string> palabras;
	palabras = creaLista(s);
	mostrar(posicionPalabra(palabras));
	
}
