//============================================================================
// Name        : kinda.cpp
// Author      : ur mum
// Version     :.42
// Copyright   : Your copyright notice
// Description :kinda bad tac toe  in C++
//============================================================================
//10 wide per sqaure
#include <iostream>
using namespace std;

int main() {
//	int x=1,space=0,o=2;
	string outervert="          xx          xx           ";
	string outervert2="           xx          xx           ";
	string outerhorze=" ";
	string innerhorze="**********xx**********xx***********";
	string piller="**";
	string sprite[3][5]=
	{"          ","          ","          ","          ","          ",//blank
			"x        x","  x    x  ","    xx    ","  x    x  ","x        x",//x
			"   oooo   ","  oo  oo  ","  oo  oo  ","  oo  oo  ","   oooo   "};// o

	int model[3][3]={0,0,0,0,0,0,0,0,0};//board

	cout<<outerhorze<<outervert<<outerhorze<<endl;

	for(int i=0;i<3;i++)//for1
	{
		for(int j=0;j<5;j++)//for2
		{

			cout<<outerhorze<<sprite[model[i][0]][j];
			cout<<piller<<sprite[model[i][1]][j];
			cout<<piller<<sprite[model[i][2]][j]<<endl;
		}//for2

		if(i<2)
		{//if1
			cout<<outerhorze<<innerhorze<<outerhorze<<endl;

		}//if1
	}//for1
	cout<<outervert2<<endl;





	return 0;
}
