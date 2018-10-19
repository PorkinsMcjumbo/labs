//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <math.h>
#include <iostream>
using namespace std;
int main(void) {
bool answer;
int value;
int value2;
cout<<"enter  value: "<<endl;
cin>>value;
cout<<"enter value2: ";

cin>>value2;


if(fabs(1/(float)value-1/(float)value2)<0.000001)
{
answer=true;
}
else
{
answer=false;
}
cout << (answer ? "Results are equal (by 0.000001 epsilon)" : "Results are not equal (by 0.000001 epsilon)") << endl;
}
