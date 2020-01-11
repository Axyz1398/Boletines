#include "cabecera.h"
#include <vector>

using namespace std;

int buscaPosicion(vector<int> A, vector<int> B,int posI, int posF)
{
	int res;
	pair<bool,bool> compara;
	int mitad = (posI+posF)/2;
	compara.first = A[mitad]==B[mitad];
	compara.second = A[mitad+1]==B[mitad+1];
	if(compara.first && (!compara.second))
	{
		res = mitad+1;
	}
	if(compara.first && compara.second)
	{
		res = buscaPosicion(A,B,mitad+1,posF);
	}
	if((!compara.first) && (!compara.second))
	{
		res = buscaPosicion(A,B,posI,mitad);
	}
	return res;
	
}
