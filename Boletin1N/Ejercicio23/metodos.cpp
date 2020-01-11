#include "metodos.h"
#include <iostream>
#include <list>

using namespace std;

void sumaListas(list<string> l1, list<string> l2,list<string> &l3)
{
 list<string>::iterator it;
 list<string>::iterator t;
 for(it = l1.begin(); it != l1.end() ; it++)
  {
    l3.push_back(*it);
  }

  bool encontrado=false;
  for(t = l2.begin(); t != l2.end() ; t++)
  {
    encontrado=false;
    for(it=l1.begin(); encontrado==false&&it!=l1.end();it++)
    {
      if(*it==*t)
      {
      encontrado=true;
      }
    }
  	 if(!encontrado)
  	  {
        l3.push_back(*t);
  	  }
  }
}


void restaRepetidasPr(list<string> l1,list<string> l2, list<string> &l3){
  //l1.sort();
  //l2.sort();
  //l1.merge(l2);
  l3 = l1;
  for(string s : l1)
  {
  	for(string s2 : l2)
  	{
  		if(s==s2)
  		{
  			l3.remove(s);
  		}
  	}
  }
  //l1.sort();
  //l1.unique();

}
void restaRepetidasSg(list<string> l1,list<string> l2, list<string> &l3){
  //l1.sort();
  //l2.sort();
  //l2.merge(l1);
  l3 = l2;
  for(string s : l2)
  {
  	for(string s2 : l1)
  	{
  		if(s==s2)
  		{
  			l3.remove(s);
  		}
  	}
  }
  //l2.unique();

}
void sumaRepetidas(list<string> l1,list<string> l2, list<string> &l3)
{

  l1.sort();
  l2.sort();
  l1.merge(l2);
  list<string>::iterator it;
  for(it = l1.begin(); it != l1.end() ; it++)
  {
    if(*it == *it++ )
    {
      l3.push_back(*it);
    }
  }
}


void muestraLista(list<string> l)
{
	list<string>::iterator x;
	x = l.begin();
	while( x != l.end() )
	{
      cout << *x << endl;
      x++;
	}
}

