#ifndef __CLASESHIJAS_H__
#define __CLASESHIJAS_H__
#include <iostream>
#include "cabecera.h"
using namespace std;

class Hijo : public Padre, public Madre{
	private:
  string colorDeOjos;
  string actitud;
  string manias;
 public:
  Hijo();
  // Hijo(string, string, string);
  string getColorOjosHijo();
  string getActitudHijo();
  string getManiasHijo();
};
class Hija : public Padre, public Madre{
 private:
  string colorDeOjos;
  string actitud;
  string manias;
 public:
  Hija();
  //  Hija(string, string, string);
  string getColorOjosHija();
  string getActitudHija();
  string getManiasHija();
};

#endif
