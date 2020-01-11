
#include <iostream>
#include "clasesHijas.h"
#include "cabecera.h"
using namespace std;

Hijo::Hijo(){
  //Padre::getColorOjos();
  //Padre::getColorOjos();
  //Padre::getColorOjos();
 colorDeOjos = Madre::getColorOjos();
 actitud = Padre::getActitud();
 manias = Padre::getManias();
  //Madre::getColorOjos();
  //Madre::getColorOjos();
}

Hija::Hija(){
  //Padre::getColorOjos();
  //Padre::getColorOjos();
  //Padre::getColorOjos();
  //Madre::getColorOjos();
  //Madre::getColorOjos();
  //Madre::getColorOjos();
  colorDeOjos = Padre::getColorOjos();
 actitud = Madre::getActitud();
 manias = Padre::getManias();
}

string Hijo::getColorOjosHijo(){
  //return Madre::getColorOjos();
  return colorDeOjos;
}
string Hijo::getActitudHijo(){
  //return Padre::getActitud();
  return actitud;
}
string Hijo::getManiasHijo(){
  //return Padre::getManias();
  return manias;
}
string Hija::getColorOjosHija(){
  //return Padre::getColorOjos();
  return colorDeOjos;
}
string Hija::getActitudHija(){
  //return Madre::getActitud();
    return actitud;
}
string Hija::getManiasHija(){
  //return Padre::getManias();
  return manias;
}


