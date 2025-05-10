#include "Parabola.h"
#include <iostream>

using namespace std;

void Parabola::Set_Coeff(){
	cout << "Enter a = "; cin >> a;
	cout << "Enter b = "; cin >> b;
	cout << "Enter c = "; cin >> c;	
	cin.get();	
}

Parabola f_parabola;