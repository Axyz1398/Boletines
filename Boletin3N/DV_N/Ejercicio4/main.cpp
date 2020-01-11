#include "cabecera.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	
	vector<int> A = {1,2,3,4,5,8,9,10,12,12,14};
	int i =0;
	for(int num : A)
	{	
		if(A.size()-1 > i) 
		{
		cout << num <<"[pos="<<i<<"]" << ", ";
		i++;
		}
		else
		{
			cout << num << "[pos="<<i<<"]"<<"."<<endl;
		}
		
	}
	//vector<int> B = {1,2,3,4,5,6,5,4,3,2,1};
	vector<int> B = {1,2,3,4,5,8,9,10,12,12,13};
	i =0;
	for(int num : B)
	{	
		if(A.size()-1 > i) 
		{
		cout << num << "[pos="<<i<<"]" <<", ";
		i++;
		}
		else
		{
			cout << num <<"[pos="<<i<<"]" << "."<<endl;
		}
		
	}
	cout << "La primera posicion donde son diferentes es: " << buscaPosicion(A,B,0,10) << endl; 
	return 0;
};
