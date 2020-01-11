#include "Aeropuerto.h"
#include "Vuelo.h"
#include <list>
#include <iostream>

using namespace std;
void Aeropuerto::addVuelo(Vuelo &v)
{
	vuelos.insert(v);
}
void Aeropuerto::deleteVuelo(Vuelo v)
{
	vuelos.erase(v);
}
int Aeropuerto::getVuelosPorDia(string fecha)
{
	int cont=0;
	for(Vuelo v : vuelos)
	{
		if(v.getFecha()==fecha)
		{
			cont++;
		}
	}
	return cont;
}
int Aeropuerto::getVuelosCompletos()
{
	int cont=0;
	for(Vuelo v : vuelos)
	{
		if(v.getNumPlazas()==v.getNumPasajeros())
		{
			cont++;
		}
	}
	return cont;
}
double Aeropuerto::getRecaudacion(string destino)
{
	int total=0;
	for(Vuelo v : vuelos)
	{
		if(v.getDestino()==destino)
		{
			total = total + (v.getNumPasajeros() * v.getPrecio());
		}
	}
	return total;
}
Vuelo Aeropuerto::getMasBarato(string destino)
{
	set<Vuelo> baratos;
	Vuelo masBarato;
	int cont = 0;
	for(Vuelo v : vuelos)
	{
		if(v.getDestino()==destino)
		{
			baratos.insert(v);
		}
	}
	
	for(Vuelo v : baratos)
	{	
		if(cont==0)
		{
			masBarato = v;
			cont++;
		}
		if(v.getPrecio()<masBarato.getPrecio())
		{
			masBarato = v;
		}
		
	}
	return masBarato;
}
Vuelo Aeropuerto::getPrimerVueloLibre(string destino)
{
	Vuelo res;
	for(Vuelo v : vuelos)
	{
		if(v.getDestino()==destino && v.getNumPlazas()>v.getNumPasajeros())
		{
			res = v;
			break;
		}
	}
	return res;
}
Vuelo Aeropuerto::getVueloMasOcupado(string fecha)
{
	set<Vuelo> vuelosPorDia;
	
	for(Vuelo v : vuelos)
	{
		if(v.getFecha()==fecha)
		{
			vuelosPorDia.insert(v);
		}
	}
	Vuelo res;
	int cont = 0;
	for(Vuelo v : vuelosPorDia)
	{
		if(cont == 0)
		{
			res = v;
			cont++;
		}
		if( (res.getNumPasajeros()/(res.getNumPlazas()*1.0)) < (v.getNumPasajeros()/(v.getNumPlazas()*1.0)) )
		{
			res = v;
		}
	}
	return res;
	
}
void Aeropuerto::setPrecios(int p, string f)
{
	set<Vuelo>  vs;
    for(Vuelo v : vuelos)
    {
        if(v.getFecha() >= f)
        {
            double precio = v.getPrecio();
            double precioAum = precio+(precio*p)/100.0;
            v.setPrecio(precioAum);
            vs.insert(v);
        }
        else
        {
            vs.insert(v);
        }
 
    }
    vuelos = vs;
}
void Aeropuerto::muestraVuelos()
{
	//set<Vuelo> vs;
	//vs = vuelos;
	for(Vuelo v : vuelos)
	{
		cout << "(" << v.getDestino() << ", " << v.getPrecio() << ", " << v.getNumPlazas() << ", " << v.getNumPasajeros() << ", " << v.getCodigo() << ", " << v.getFecha() << ")" << endl;
		cout << "---------------------------------------------------"<<endl;
	}
}
