#include "Vuelo.h"
#include <list>
Vuelo::Vuelo(string datos)
{
  list<string> listado;
  string dato;
 
  for (int i = 0; i <= datos.size(); ++i)
    {
      if (datos[i] == ' ' && datos[i-1] == ',')
    {
    }
      else if (datos[i] != ',' && i < datos.size())
    {
      dato = dato + datos[i];
    }
      else
    {
      // cout << "-" << dato << "-" << endl;
      listado.push_back(dato);
      dato = "";
    }
    }
 
  destino = listado.front();
  listado.pop_front();
 
  precio = stod(listado.front());
  listado.pop_front();
 
 
  numPlazas = stoul(listado.front());
  listado.pop_front();
 
  numPasajeros = stoul(listado.front());
  if (numPlazas < numPasajeros) { throw 0; }
  listado.pop_front();
 
  codigo = listado.front();
  listado.pop_front();
 
  fecha = listado.front(); 
}

bool Vuelo::operator < (Vuelo const& v) const
{
	bool res = getFecha() < v.getFecha();
	if(getFecha() == v.getFecha())
	{
		res = getCodigo() < v.getCodigo();
	}
	return res;
}
Vuelo & Vuelo::operator = (Vuelo const & v)
{
		destino=v.getDestino();
		precio=v.getPrecio();
		numPlazas=v.getNumPlazas();
		numPasajeros=v.getNumPasajeros();
		codigo=v.getCodigo();
		fecha=v.getFecha();
		return *this;
}
bool Vuelo::operator ==(Vuelo const& v) const
{
  bool res = false;
  if (getDestino() == v.getDestino() &&
      getPrecio() == v.getPrecio() &&
      getNumPlazas() == v.getNumPlazas() &&
      getNumPasajeros() == v.getNumPasajeros() &&
      getCodigo() == v.getCodigo() &&
      getFecha() == v.getFecha())
    {
      res = true;
    }
  return res;
}


