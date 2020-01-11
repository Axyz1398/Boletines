#ifndef _CABECERA_H_
#define _CABECERA_H_
#include <iostream>
#include <set>
using namespace std;

class Persona
{
	private:
		string nombre;
		int edad;
		string dni;
	public:
		//Constructor 
		Persona(string nombre="", int edad = 0, string dni="")
		{
			setNombre(nombre);
			setEdad(edad);
			setDNI(dni);
		}
		Persona (Persona const& p)
		{
			*this = p;
		}
		//Observadores 
		string getNombre() const {return nombre;}
		int getEdad() const {return edad;}
		string getDNI() const {return dni;}
		//Modificadores 
		void setNombre(string nombre) {this->nombre = nombre;}
		void setEdad(int edad) {this->edad = edad;}
		void setDNI(string dni) {this->dni = dni;} 
		//Sobrecarga
		bool operator < (Persona const& p) const;
};

multiset<Persona> eliminaRepetidos(multiset<Persona> &m);
void mostrar(multiset<Persona> m);

#endif
