//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
double a=1,b=1,pi4=0;
int n;
cout<<"enter n"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
	pi4=pi4+a/b;
	a=-a;
	b = b+2;
}
cout.precision(20);
cout<<"pi = "<<(pi4 * 4)<<endl;















	return 0;
}
