//============================================================================
// Name        : 5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<< "input N "<<endl;
	int N;
	cin>>N;
	N=N-2;
	cout << '+';
	for(int i = 0; i < N; i++)
		cout << '-';
	cout << '+' << endl;
	for(int i = 0; i < N; i++) {
		cout << '|';
		for(int j = 0; j < N; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for(int i = 0; i < N; i++)
		cout << '-';
	cout << '+' << endl;














	return 0;
}
