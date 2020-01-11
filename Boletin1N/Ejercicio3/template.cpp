#include "template.h"
#include <iostream>

using namespace std;

template <class T>
void ComplexNum<T>::leerComplexNum()
{
	T x, y;
	cout << "Lectura de Complejo (a+bi)\n";
	cout << "Parte real: ";
	cin >> x;
	cout << "Parte imaginaria: ";
	cin >> y;
	setX(x);
	setY(y);
}

template <class T>
void ComplexNum<T>::escribirComplexNum()
{
	cout << "(" << getX() << ", " << getY() << "i)" << endl;
}

template class ComplexNum<int>;
template class ComplexNum<float>;
