//============================================================================
// Name        : 1C.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main(void) {

	float pi = 3.14159265359;
float x,y;
float pi2=pi*pi;

cout << "Enter value for x: ";

cin >> x;
// ----------------------
float x2=x*x;
float a=x2/(pi2*(x2+0.5));
float b=x2/(pi2*(x2-.5)*(x2-.5))+1;
y=a*b;
cout << "y = " << y;
return 0;

}
