//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int above0,c0,step=0;
	cout<<"give me a number above zero: (no decimals)";
	cin>>above0;
	if(above0>=1){
		c0=above0;
		do{
			if(c0 % 2==0){
				c0=c0/2;
				cout<<c0<<endl;
			}
			else{
				c0=c0*3+1;
				cout<<c0<<endl;
			}
			step++;
		}while(c0!=1);
		cout<<"steps"<<" = "<<step<<endl;
	}













	if(above0<1)
	{
		cout<<"you git,you entered a number that isnt above zero";

	}


	return 0;
}
