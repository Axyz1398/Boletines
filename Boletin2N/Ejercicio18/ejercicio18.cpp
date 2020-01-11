#include<iostream>
#include"cabecera.h"


using namespace std;

int funcionNF(int a, int n){
if (n==0){
     return 1;
 }else{
     return a*(funcionNF(a,n-1));
     }
}
int funcionF(int a, int n){
	funcionG(a, n, 1);
}
int funcionG(int a, int n, int acum){
	if (n==0){
     return acum;
 }else{
	acum = funcionG(a,n-1,acum*a);	
	return acum;
     }

}
int funcionI(int a, int n){
	int acum=1;
        int i = 1;
        while(i<=n){
        acum = acum * a;
	i = i+1;
	}
        return acum;
}
