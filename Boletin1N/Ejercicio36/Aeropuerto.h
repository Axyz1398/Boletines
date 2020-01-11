#ifndef _AEROPUERTO_H_
#define _AEROPUERTO_H_
#include<iostream>
#include<set>
#include<map>
#include<list>
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
		//METODOS EJERCICIO 36 TODO
		map<string,set<Vuelo>> getVuelosPorDia();
		map<string,int> getPasajerosPorDia();
		map<string,float> getRecaudacionPorDestino();
		list<string> getDiasMasPasajeros();
		list<string> getDestinosMasRecaudacion();
};

void mostrar(list<string> l);
void mostrar(map<string,set<Vuelo>> m);
void mostrar(map<string,int> m);
void mostrar(map<string,float> m);
void mostrar(set<Vuelo> vuelos);
#endif
