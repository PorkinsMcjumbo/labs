//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
double vector[] = { 1., 2., 3., 4., 5. };
int n = sizeof(vector) / sizeof(vector[0]);
double ArithmeticMean;
double HarmonicMean;
double GeometricMean;
double RootMeanSquare;



cout << "Arithmetic Mean = " << ArithmeticMean << endl;
cout << "Harmonic Mean = " << HarmonicMean << endl;
cout << "Geometric Mean = " << GeometricMean << endl;
cout << "RootMean Square = " << RootMeanSquare << endl;

cout << endl;
return 0;
}
