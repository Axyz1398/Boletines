#include "Aeropuerto.h"
#include "Vuelo.h"
#include <list>
#include <iostream>
#include <map>
#include <set>

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
map<string,set<Vuelo>> Aeropuerto::getVuelosPorDia()
{
	set<Vuelo> vuelosdia;
	set<string> fechas;
	map<string, set<Vuelo>> registrodia;
	set<Vuelo> aux = vuelos;
 
	for (Vuelo v : aux)
	{
    	string fecha = v.getFecha();
    	fechas.insert(fecha);
	}
 
	for (string f : fechas)
	{
    	for (Vuelo v : aux)
    	{
      		if (f == v.getFecha())
      		{
        		vuelosdia.insert(v);
      		}
      		else
      		{
        		registrodia.insert({f, vuelosdia});
        		//vuelosdia.clear();
      		}
    	}
    	vuelosdia.clear();
  	}
  	return registrodia;
}
map<string,int> Aeropuerto::getPasajerosPorDia()
{
	int numPasajeros = 0;
	set<string> fechas;
	map<string, int> mapa;
	for(Vuelo v : vuelos)
	{
		fechas.insert(v.getFecha());
	}
	for (string f : fechas)
	{
		numPasajeros= 0;
    	for (Vuelo v : vuelos)
    	{
    		
      		if (f == v.getFecha())
      		{
        		numPasajeros = numPasajeros + v.getNumPasajeros();
        	}
      		else 
      		{
        		mapa.insert({f, numPasajeros});
        		//numPasajeros = 0;
      		}
    	}
  	}
  	return mapa;
}
map<string,float> Aeropuerto::getRecaudacionPorDestino()
{
	//float recaudacion = 0;
	set<string> destinos;
	map<string, float> mapa;
	for(Vuelo v : vuelos)
	{
		destinos.insert(v.getDestino());
	}
	for (string d : destinos)
	{
    	mapa.insert({d,getRecaudacion(d)});
  	}
  	return mapa;
}
list<string> Aeropuerto::getDiasMasPasajeros()
{
	list<string> dias;
	int numPas=0;
	map<string,int>::iterator it;
	map<string,int> aux = getPasajerosPorDia();
	for(it=aux.begin();it!=aux.end();++it)
	{
		if(numPas<(it->second))
		{
			numPas = it->second;
		}
	}
	for(pair<string,int> par : aux)
	{
		if(aux[par.first]==numPas)
		{
			string dia = par.first;
			dias.push_back(dia);
		}
	}
	return dias;
}
list<string> Aeropuerto::getDestinosMasRecaudacion()
{
	list<string> destinos;
	float recaudacion = 0.0;
	map<string,float>::iterator it;
	map<string,float> aux = getRecaudacionPorDestino();
	for(it=aux.begin();it!=aux.end();++it)
	{
		if(recaudacion<(it->second))
		{
			recaudacion = it->second;
		}
	}
	for(pair<string,int> par : aux)
	{
		if(aux[par.first]==recaudacion)
		{
			string destino = par.first;
			destinos.push_back(destino);
		}
	}
	return destinos;
}
void mostrar(list<string> l)
{
	for(string s : l)
	{
		cout << s << endl;
	}
}
void mostrar(map<string,set<Vuelo>> m)
{
	map<string,set<Vuelo>>::iterator it;
	for(it = m.begin(); it!=m.end() ; ++it)
	{
		cout << it->first << " => "; 
		set<Vuelo> segundo = (*it).second;
		mostrar(segundo);
		cout << segundo.size();
		cout << endl;
	}
}
void mostrar(map<string,int> m)
{
	map<string,int>::iterator it;
	for(it = m.begin(); it!=m.end() ; ++it)
	{
		cout << it->first << " => " << it->second << endl;
	}
}
void mostrar(map<string,float> m)
{
	map<string,float>::iterator it;
	for(it = m.begin(); it!=m.end() ; ++it)
	{
		cout << it->first << " => " << it->second << endl;
	}
}
void mostrar(set<Vuelo> vs)
{
	for(Vuelo v : vs)
	{
		cout << "(" << v.getDestino() << ", " << v.getPrecio() << ", " << v.getNumPlazas() << ", " << v.getNumPasajeros() << ", " << v.getCodigo() << ", " << v.getFecha() << ")" << endl;
		cout << "---------------------------------------------------"<<endl;
	}
}
