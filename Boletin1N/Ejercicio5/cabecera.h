#ifndef __CABECERA_H__
#define __CABECERA_H__
#include <iostream>

using namespace std;

class Madre{
private:
  string colorDeOjos;
  string actitud;
  string manias;
public:
  Madre();
  Madre(string , string, string);
  string getColorOjos();
  string getActitud();
  string getManias();
};
class Padre{
private:
  string colorDeOjos;
  string actitud;
  string manias;
public:
  Padre();
  Padre(string, string, string);
  string getColorOjos();
  string getActitud();
  string getManias();
};  

#endif
