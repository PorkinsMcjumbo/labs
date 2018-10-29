//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a=0,b;
	int vector[7] = {1,7,3,8,3,7,1};
	bool ispalindrome = true;
	int n= sizeof(vector) / sizeof(vector[0]);
	b=n-1;
	for(int i=0;i<n/2;i++){
		if(vector[a]==vector[b]){
			a++;
			b--;
		}//if1
		else
		{
			ispalindrome=false;
			break;
		}//else1

	}//loop
	if(ispalindrome){
		cout<<" it is a palindrome "<<endl;
	}// if2

	else
	{
		cout<<"It isn't a palindrome"<< endl;

	}// else2
	return 0;
}// main
