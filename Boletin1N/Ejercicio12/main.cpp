#include <iostream>
#include <exception>
#include "BadAllocES.h"
using namespace std;




int main(){
	try
	{
		// int * k = new int[100000000000000];
		throw bad_alloc();
	}
	catch (bad_alloc)
	{
		try 
		{
			throw BadAllocES();
		}
		catch(BadAllocES e)
		{
			cout << e.what() << endl;
		}
	}
	return 0;
}
