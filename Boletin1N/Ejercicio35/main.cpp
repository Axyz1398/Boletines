#include "Aeropuerto.h"
#include "Vuelo.h"
#include <iostream>
 
using namespace std;
 
 
 
int main ()
{
  try{
  Vuelo iberia01("Los Angeles,150.35,50,32,IB457,2/01/2019");
  Vuelo iberia02("Los Angeles, 100.00, 50, 22, IB237,28/2/2019");
  Vuelo us01("Madrid, 50.5, 50, 36, US798,25/12/2019");
  Vuelo iberia03("Madrid, 15.3, 50, 23, IB417,25/12/2019");
  Vuelo iberia04("New York, 320.35, 50, 50,IB517,25/12/2019");
  Vuelo iberia05("New York, 180.35, 50, 13,IB527,11/9/2019");
  Vuelo ry01("New York, 150.0, 50, 41, RY457,2/8/2019");
  Vuelo ry02("New York, 0.0, 50, 37, RY201,25/8/2019");
  Vuelo ry03("Berlin, 220.58, 50, 18, RY400,25/12/2019");
  Vuelo ba01("Berlin, 110, 50, 49, BA457,25/12/2019");
  Vuelo ba02("Berlin, 99.35, 50, 0, BA457,25/12/2019");
  Vuelo ry04("Moscu, 87.5, 50, 39, RY457,25/11/2019");
  Vuelo us02("Moscu, 20.35, 50, 50, US457,25/11/2019");
  Vuelo us03("Moscu, 41.85, 50, 31, US157,5/7/2019");
  Vuelo aa01("Londres, 80, 50, 3, AA457,25/7/2019");
  Vuelo aa02("Londres, 90., 50, 43, AA507,25/2/2019");
  }
  catch(int e) {
 
    cerr << "El número de pasajeros no puede ser mayor que el de plazas" << endl;
 
  }
 
  Aeropuerto sv("Sevilla");
 
  sv.addVuelo(iberia01);
  sv.addVuelo(iberia02);
  sv.addVuelo(ry02);
  
  sv.muestraVuelos();
 
  return 0;
}
