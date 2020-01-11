#include <iostream>
#include "cabecera.h"

using namespace std;

Madre::Madre(){
  colorDeOjos = "verde";
  actitud = "habladora";
  manias = "comprar";
}
Madre::Madre(string ojos, string act, string man){
  colorDeOjos = ojos;
  actitud = act;
  manias = man;
}
Padre::Padre(){
  colorDeOjos = "marrones";
  actitud = "seria";
  manias = "leer";
}
Padre::Padre(string ojos, string act, string man){
  colorDeOjos = ojos;
  actitud = act;
  manias = man;
}
string Madre::getColorOjos(){
  return colorDeOjos;
}

string Madre::getActitud(){
  return actitud;
}
string Madre::getManias(){

  return manias;
}
string Padre::getColorOjos(){
  return colorDeOjos;
}
string Padre::getActitud(){
  return actitud;
}
string Padre::getManias(){
  return manias;
}
