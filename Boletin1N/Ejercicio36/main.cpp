#include "Aeropuerto.h"
#include "Vuelo.h"
#include <iostream>
#include<map>
#include<set>
using namespace std;
 
 
 
int main ()
{
	try{
	Vuelo IB457("Los Angeles,150.35,50,32,IB457,2019/01/02");
	Vuelo IB237("Los Angeles,100.00,50,22,IB237,2019/02/28");
	Vuelo IB417("Madrid,15.3,50,23,IB417,2019/12/25");
	Vuelo IB517("New York,320.35,50,50,IB517,2019/12/25");
	Vuelo IB527("New York,180.35,50,13,IB527,2019/09/11");
	Vuelo US798("Madrid,50.5,50,36,US798,2019/12/25");
	Vuelo RY457("New York,150.0,50,41,RY457,2019/08/02");
	Vuelo RY201("New York,0.0,50,37,RY201,2019/08/25");
	Vuelo RY400("Berlin,220.58,50,18,RY400,2019/12/25");
	Vuelo BA457("Berlin,110,50,49,BA457,2019/12/25");
	Vuelo BA657("Berlin,99.35,50,0,BA657,2019/12/25");
	Vuelo RY497("Moscu,87.5,50,39,RY497,2019/11/25");
	Vuelo US457("Moscu,20.35,50,50,US457,2019/11/25");
	Vuelo US157("Moscu,41.85,50,31,US157,2019/07/05");
	Vuelo AA457("Londres,80,50,3,AA457,2019/07/25");
	Vuelo AA507("Londres,90.,50,43,AA507,2019/02/25");
	}
	catch(int e) {
 
    cerr << "El número de pasajeros no puede ser mayor que el de plazas" << endl;
 
    }
	 
	 
	Aeropuerto sv("Sevilla");
	 
	// Añadir vuelos
	sv.addVuelo(IB457);
	sv.addVuelo(IB417);
	 
	sv.muestraVuelos();
	 
	// Quitar un vuelo
	sv.deleteVuelo(IB417);
	 
	sv.muestraVuelos();
	 
	// Añadimos muchos vuelos
	sv.addVuelo(IB457);
	sv.addVuelo(IB237);
	sv.addVuelo(IB417);
	sv.addVuelo(IB517);
	sv.addVuelo(IB527);
	sv.addVuelo(US798);
	sv.addVuelo(RY457);
	sv.addVuelo(RY201);
	sv.addVuelo(RY400);
	sv.addVuelo(BA457);
	sv.addVuelo(BA657);
	sv.addVuelo(RY497);
	sv.addVuelo(US457);
	sv.addVuelo(US157);
	sv.addVuelo(AA457);
	sv.addVuelo(AA507);
	
	// Dada una fecha dar el número de vuelos de ese día
	cout<< "Numero de vuelos: "<<sv.getVuelosPorDia("2019/12/25")<<endl;
	 
	// ¿Cuántos vuelos completos (sin plazas libres) hay?
	cout << "Número de vuelos completos: " << sv.getVuelosCompletos() << endl;
	 
	// Dado un destino, obtenga la recaudación de todos los vuelos que van a
	// ese destino (suma de número de pasajeros por precio)
	cout << "Recaudación : " << sv.getRecaudacion("Madrid") << endl;
	 
	// Dado un destino, cuál es el vuelo más barato para ese destino.
	cout << "Recaudación : " << sv.getMasBarato("Madrid").getCodigo() << endl;
	 
	// Dado un destino, cuál es el primer vuelo con plazas libres para ese
	// destino.
	cout << "Vuelo con plazas libres : " << sv.getPrimerVueloLibre("Los Angeles").getCodigo() << endl;
	 
	// Dada una fecha, cuál es el vuelo de ese día con mayor porcentaje de
	// plazas ocupadas (cociente entre número de pasajeros y número de
	// plazas).
	cout << "Vuelo más ocupado : " << sv.getVueloMasOcupado("2019/12/25").getCodigo() << endl;
	 
	// Dado un porcentaje p y una fecha f, incremente el precio de todos los
	// vuelos a partir de f en el porcentaje p.
	 
	cout << "////////////////////////////////" << endl;
	 
	sv.muestraVuelos();
	cout << "////////////////////////////////" << endl;
	sv.setPrecios(10, "2019/11/25");
	 
	cout << "////////////////////////////////" << endl;
	sv.muestraVuelos();
	cout <<"**********************************" << endl; 
	//;
	//mostrar(sv.getVuelosPorDia());
	cout <<"**********************************" << endl;
	//mostrar(sv.getPasajerosPorDia());
	cout <<"**********************************" << endl;
	mostrar(sv.getRecaudacionPorDestino());
	cout <<"**********************************" << endl;
	//mostrar(sv.getDiasMasPasajeros());
	cout <<"**********************************" << endl;
	//mostrar(sv.getDestinosMasRecaudacion()); 
	 
	return 0;
}
