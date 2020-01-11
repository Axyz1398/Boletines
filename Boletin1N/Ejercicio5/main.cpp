#include <iostream>
#include "cabecera.h"
#include "clasesHijas.h"

using namespace std;

int main(){

  Madre mother;
  Padre father;
  Hijo son;
  Hija daughter;
  cout<<"------------Madre---------"<<endl;
  cout<<"\n"<<"Color de Ojos: " <<mother.getColorOjos()<< endl;
  cout<<"\n"<<"Actitud: " <<mother.getActitud()<< endl;
  cout<<"\n"<<"Manias: " <<mother.getManias()<< endl;
  cout<<"------------Padre---------"<<endl;
  cout<<"\n"<<"Color de Ojos: " <<father.getColorOjos()<< endl;
  cout<<"\n"<<"Actitud: " <<father.getActitud()<< endl;
  cout<<"\n"<<"Manias: " <<father.getManias()<< endl;
  cout<<"------------Hijo---------"<<endl;
  cout<<"\n"<<"Color de Ojos: " <<son.getColorOjosHijo()<< endl;
  cout<<"\n"<<"Actitud: " <<son.getActitudHijo()<< endl;
  cout<<"\n"<<"Manias: " <<son.getManiasHijo()<< endl;
  cout<<"------------Hija---------"<<endl;
  cout<<"\n"<<"Color de Ojos: " <<daughter.getColorOjosHija()<< endl;
  cout<<"\n"<<"Actitud: " <<daughter.getActitudHija()<< endl;
  cout<<"\n"<<"Manias: " <<daughter.getManiasHija()<< endl;

  
 return 0;
}
