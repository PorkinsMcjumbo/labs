//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(void) {
int maxball;
int ballsno;
do{
cout << "Max ball number? ";
cin >> maxball;}
while(maxball<1);
do{
cout << "How many balls? ";
cin >> ballsno;}
while (ballsno < 1 || ballsno > maxball);
srand(time(NULL));
int *selection = new int[ballsno];
	for(int i=0; i<ballsno;i++)
	{
	int rnd = 0;
do{



}while()


	}
return 0;
}
