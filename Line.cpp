#include "Line.h"
#include <iostream>

using namespace std;

void Line::Set_Coeff() {
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
}

//Глобальный объект
Line f_line;