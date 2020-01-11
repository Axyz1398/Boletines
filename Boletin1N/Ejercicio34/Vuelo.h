#ifndef _VUELO_H_
#define _VUELO_H_
#include <iostream>

using namespace std;

class Vuelo{
	private:
		string destino;
		double precio;
		unsigned int numPlazas;
  		unsigned int numPasajeros;
		string codigo;
		string fecha;
	public:
		//Constructor
		Vuelo(string destino, double precio, unsigned int plazas, unsigned int pasajeros, string cod, string fecha){
			this->destino = destino;
			this->precio = precio;
			this->codigo = cod;
			this->fecha = fecha;
			this->numPlazas = plazas;
			if(pasajeros>plazas){throw 0;}
			this->numPasajeros = pasajeros;
		}
		Vuelo(Vuelo const& v){
			*this = v;
		}
		Vuelo()
		{
			destino ="";
		 	precio=0.0;
			numPlazas=0;
		 	numPasajeros=0;
		 	codigo="";
		 	fecha="";
		}
		//Constructor a partir de string
		Vuelo(string constructor);//Split por ;
		//Observador 
		string getDestino() const {return destino;}
		double getPrecio() const {return precio;}
		int getNumPlazas() const {return numPlazas;}
		int getNumPasajeros() const {return numPasajeros;}
		string getCodigo() const {return codigo;}
		string getFecha() const {return fecha;}
		//Modificador
		void setPrecio(double precio) {this->precio = precio;}
		void setNumPasajeros(int pasajeros) {this->numPasajeros = pasajeros;}
		//Sobrecarga
		bool operator < (Vuelo const& t) const;//por fecha y a igualdad por codigo
		Vuelo & operator = (Vuelo const & v);
};

#endif
