//============================================================================
// Name        : kinda bad tuc tac toe.cpp
// Author      : ur mum
// Version     :.42
// Copyright   : Your copyright notice
// Description :kinda bad tac toe  in C++ with some memes
//============================================================================
//10 wide per sqaure
#include <iostream>
using namespace std;


bool Checkwinner(int model[3][3],int player){
	bool wins = false;
	if((model[0][0]==player && model[1][1]==player && model[2][2]==player)||//diaginal going to the right
			(model[2][0]==player && model[1][1]==player && model[0][2]==player)||// disinal going to the left
			(model[0][0] ==player && model[1][0]==player  && model[2][0]==player)||// top row
			(model[0][1] ==player && model[1][1] ==player && model[1][2]==player)||//middle row
			(model[0][2] ==player && model[1][2] ==player && model[2][2]==player)||// bottem row
			(model[0][0] ==player && model[0][1] ==player && model[0][2]==player)||//1st piller
			(model[1][0] ==player && model[1][1] ==player && model[1][2]==player)||// 2nd piller
			(model[2][0] ==player && model[2][1] ==player  && model[2][2]==player))//3rd piller
	{
		wins = true;
		if (player==2){
			cout <<"player O wins, get rekt player X";
		}//which player
		else{
			cout<< "player X wins, git gud  player O  ";
		}
	}// winner check

	return wins;
}//end of function//////------------------------------------------------------------------------------------------------------------------


void BoardUpdate (int model[3][3]){
	string outervert="          xx          xx           ";
	string outervert2="           xx          xx           ";
	string outerhorze=" ";
	string innerhorze="**********xx**********xx***********";
	string piller="**";
	string sprite[3][5]=
	{"          ","          ","          ","          ","          ",//blank
			"x        x","  x    x  ","    xx    ","  x    x  ","x        x",//x
			"   oooo   ","  oo  oo  ","  oo  oo  ","  oo  oo  ","   oooo   "};// o


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
	return;
}//function ends//------------------------------------------------------------------------------------------------------------------------//
int main() {
	//	 x=1,space=0,o=2;
	int model[3][3]={0,0,0,0,0,0,0,0,0};//board
	int x,y;
	BoardUpdate(model);
	for(int turn=0;turn<9;turn++){
		if(turn%2==0){
			do{
				cout<<"player x choose your space(row and column)"<<endl;
				cin >>x;
				cin >>y;
			}while(model[x][y]!=0); //do
			model[y][x]=1;//x=1
			BoardUpdate(model);
			bool wins = Checkwinner(model, 1);
			if(wins) break;
		}
		else
		{
			do{
				cout<<"player 0 choose your space(row and column)"<<endl;
				cin >>x;
				cin >>y;
			}while(model[x][y]!=0); //do
			model[x][y]=2;//0=2
			BoardUpdate(model);
			bool wins = Checkwinner(model, 2);
			if(wins) break;
		}



	}//for



	return 0;
}
