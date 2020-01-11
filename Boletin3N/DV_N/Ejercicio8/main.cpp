#include "cabecera.h"
#include <iostream>

using namespace std;

float ** reservaMemoria(int n);
void rellenaMatriz1(float ** m);
void mostrarMatriz(float ** m, int n);

int main()
{
	//Reservamos memoria
	float ** m1 = reservaMemoria(4);
	//Rellenamos matriz
	rellenaMatriz1(m1);
	//Mostramos por pantalla
	cout<<"Matriz introducida: "<<endl;
	mostrarMatriz(m1,4);
	//Llamada a la funcion y muestra por pantalla
	cout << "El punto mas alto del terreno es: ";
	cout << maximoEnTerreno(m1,0,0,4) << endl;
	return 0;
}
float ** reservaMemoria(int n)
{
	float ** m = new float *[n];
	if(m==NULL)
	{
		cout << "Reserva de memoria fallida" << endl;
		exit(-1);
	}
	else
	{
		for(int i=0; i<n; i++)
		{
			m[i]=new float[n];
			if(m[i]==NULL)
			{
				cout << "Reserva de memoria fallida" << endl;
				exit(-1);
			}
		}
	}
	return m;

}
void rellenaMatriz1(float ** m)
{
	m[0][0]=-7.5;
	m[0][1]=-8.5;
	m[0][2]=-9.0;
	m[0][3]=-7.75;
	m[1][0]=-6.5;
	m[1][1]=-6.25;
	m[1][2]=-7.25;
	m[1][3]=-8.25;
	m[2][0]=-7.9;
	m[2][1]=-6.75;
	m[2][2]=-8.0;
	m[2][3]=-8.2;
	m[3][0]=-6.7;
	m[3][1]=-8.8;
	m[3][2]=-8.6;
	m[3][3]=0.0;
}
void mostrarMatriz(float ** m, int n)
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

