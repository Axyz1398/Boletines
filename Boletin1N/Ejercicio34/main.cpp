#include "Vuelo.h"
#include <iostream>
#include <list>
 
using namespace std;
 

int main ()
{
  try{
 	Vuelo iberia("Los Angeles,150.35,50,34,IB457,25/12/2019");
  	cout << "El destino del vuelo es " << iberia.getDestino() << endl;
  	cout << "El billete del vuelo vale " << iberia.getPrecio() << " euros" << endl;
  	cout << "El numero de plazas es " << iberia.getNumPlazas() << endl;
  	cout << "El numero de pasajeros es " << iberia.getNumPasajeros() << endl;
  	cout << "El codigo del vuelo es " << iberia.getCodigo() << endl;
  	cout << "La fecha del vuelo es " << iberia.getFecha() << endl;
    return 0;
 
  } catch(int e) {
 
    cerr << "El número de pasajeros no puede ser mayor que el de plazas" << endl;
 
  }
}
