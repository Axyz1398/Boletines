#include "metodos.h"
#include <iostream>
#include <list>

using namespace std;


int main(){

  list<string> lista1 = {"azul", "morado", "rojo"} ;
  list<string> lista2 = {"azul", "lila", "rojo"} ;
  list<string> lista3;
  list<string> lista4;
  list<string> lista5;
  list<string> lista6;
 
 
 sumaListas(lista1, lista2, lista3);
 restaRepetidasPr(lista1, lista2, lista4);
 restaRepetidasSg(lista1, lista2, lista5);
 sumaRepetidas(lista1, lista2, lista6);
 cout << "------------------Primera lista---------------------" << endl;
 muestraLista(lista1);
 cout << "----------------------------------------------------" << endl;
 cout << "------------------Segunda lista---------------------" << endl;
 muestraLista(lista2);
 cout << "----------------------------------------------------" << endl;
 cout << "--Lista de palabras que aparecen en las dos listas--" << endl;
 muestraLista(lista3);
 cout << "----------------------------------------------------" << endl;
 cout << "Lista de palabras que aparecen en la primera lista, pero no en la segunda" << endl;
 muestraLista(lista4);
 cout << "----------------------------------------------------" << endl;
 cout << "Lista de palabras que aparecen en la segunda lista, pero no en la primera" << endl;
 muestraLista(lista5);
 cout << "----------------------------------------------------" << endl;
 cout << "---Lista de palabras que aparecen en ambas listas---" << endl;
 muestraLista(lista6);
 cout << "----------------------------------------------------" << endl;
 
  
 cout<< "" << endl;
 return 0;
}
