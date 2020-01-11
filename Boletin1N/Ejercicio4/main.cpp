#include <iostream>
#include "cabecera.h"

using namespace std;

int main(){

  Madre mother;
  Padre father;
  cout<<"------------Madre---------"<<endl;
  cout<<"\n"<<"Color de Ojos: " <<mother.getColorOjos()<< endl;
  cout<<"\n"<<"Actitud: " <<mother.getActitud()<< endl;
  cout<<"\n"<<"Manias: " <<mother.getManias()<< endl;
  cout<<"------------Padre---------"<<endl;
  cout<<"\n"<<"Color de Ojos: " <<father.getColorOjos()<< endl;
  cout<<"\n"<<"Actitud: " <<father.getActitud()<< endl;
  cout<<"\n"<<"Manias: " <<father.getManias()<< endl;

  
 return 0;
}
