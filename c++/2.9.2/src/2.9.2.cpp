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
int totalplussars;
int plussarnotes[5]= {50,20,10,5,1};
	cout << "enter amount of plussars" ;
	cin>>totalplussars;
	for(int i=0;i<5;i++){
	while(plussarnotes[i]<=totalplussars){
	totalplussars=totalplussars - plussarnotes[i];
	cout<<plussarnotes[i]<< endl;




	}//while










	}//for

	return 0;
}//main
