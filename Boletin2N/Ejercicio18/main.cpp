#include <iostream>
#include "cabecera.h"

int main(){

 int a, n;
    cout << "Introduzca base: ";
    cin >> a;
    cout << "Introduzca exponente >=0 : ";
    cin >> n;
    cout << a << " elevado a " << n << " = " << funcionNF(a,n) << endl;
    cout << a << " elevado a " << n << " = " << funcionF(a,n) << endl;
    cout << a << " elevado a " << n << " = " << funcionI(a,n) << endl;

}
