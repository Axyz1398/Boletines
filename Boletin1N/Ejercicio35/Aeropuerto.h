#ifndef _AEROPUERTO_H_
#define _AEROPUERTO_H_
#include<iostream>
#include<set>
#include "Vuelo.h"


using namespace std;

class Aeropuerto{
	private:
		string nombre;
		set<Vuelo> vuelos;
	public:
		//Constructor
		Aeropuerto(string s)
		{
			set<Vuelo> v;
			nombre = s;
			vuelos = v;
		}
		//Metodos TODO
		void addVuelo(Vuelo &v);
		void deleteVuelo(Vuelo v);
		int getVuelosPorDia(string fecha);
		int getVuelosCompletos();
		double getRecaudacion(string destino);
		Vuelo getMasBarato(string destino);
		Vuelo getPrimerVueloLibre(string destino);
		Vuelo getVueloMasOcupado(string fecha);
		void setPrecios(int p, string f);
		void muestraVuelos();

};

#endif
