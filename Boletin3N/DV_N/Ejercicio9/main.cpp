#include "cabecera.h"
#include <iostream>

using namespace std;

int ** reservaMemoria(int n);
void rellenaMatriz1(int ** m);
void mostrarMatriz(int ** m, int n);

int main()
{
	//Reservamos memoria
	int ** m1 = reservaMemoria(4);
	//Rellenamos matriz
	rellenaMatriz1(m1);
	//Mostramos por pantalla
	cout << "Mostramos la matriz introducida: "<<endl;
	mostrarMatriz(m1,4);
	//Llamada a la funcion y muestra por pantalla
	
	auto condicion =  filtro(m1,0,0,4);
	if(condicion)
	{
		cout << "La matriz cumple el filtro"<<endl;
	}
	else
	{
		cout << "La matriz no cumple el filtro"<< endl;
	}
	return 0;
}
int ** reservaMemoria(int n)
{
	int ** m = new int *[n];
	if(m==NULL)
	{
		cout << "Reserva de memoria fallida" << endl;
		exit(-1);
	}
	else
	{
		for(int i=0; i<n; i++)
		{
			m[i]=new int[n];
			if(m[i]==NULL)
			{
				cout << "Reserva de memoria fallida" << endl;
				exit(-1);
			}
		}
	}
	return m;

}
void rellenaMatriz1(int ** m)
{
	m[0][0]=5;
	m[0][1]=85;
	m[0][2]=9;
	m[0][3]=75;
	m[1][0]=65;
	m[1][1]=15;
	m[1][2]=72;
	m[1][3]=82;
	m[2][0]=7;
	m[2][1]=67;
	m[2][2]=8;
	m[2][3]=82;
	m[3][0]=67;
	m[3][1]=88;
	m[3][2]=86;
	m[3][3]=61;
}
void mostrarMatriz(int ** m, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<m[i][j];
			cout << "\t";
		}
		cout << endl;
	}
}

