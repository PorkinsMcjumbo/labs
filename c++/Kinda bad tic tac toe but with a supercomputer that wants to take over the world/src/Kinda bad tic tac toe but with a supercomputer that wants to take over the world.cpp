//============================================================================
// Name        : Kinda.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
int checkaideny(int model[3][3]){
	int Y=0;
	//rows
	if(model[0][0]==1 && model[0][1]==1 && model[0][2]==0){
	Y=1;return Y;

	}
	if(model[0][2]==1 && model[0][1]==1 && model[0][0]==0){
	Y=2;return Y;
	}
	if(model[0][0]==1 && model[0][2]==1 && model[0][1]==0){
	Y=3;return Y;
	}
	if(model[1][0]==1 && model[1][1]==1 && model[1][2]==0){
	Y=4;return Y;
	}
	if(model[1][2]==1 && model[1][1]==1 && model[1][0]==0){
	Y=5;return Y;
	}
	if(model[1][0]==1 && model[1][2]==1 && model[1][1]==0){
	Y=6;return Y;
	}
	if(model[2][0]==1 && model[2][1]==1 && model[2][2]==0) {
	Y=7;return Y;
	}
	if(model[2][2]==1 && model[2][1]==1 && model[2][0]==0){
	Y=8;return Y;
	}
	if(model[2][0]==1 && model[2][2]==1 && model[2][1]==0){
	Y=9;return Y;
	}
	//collum
	if(model[0][0]==1 && model[1][0]==1 && model[2][0]==0){
	Y=10;return Y;
	}
	if(model[2][0]==1 && model[1][0]==1 && model[0][0]==0){
	Y=11;return Y;
	}
	if(model[0][0]==1 && model[2][0]==1 && model[1][0]==0){
	Y=12;return Y;
	}
	if(model[0][1]==1 && model[1][1]==1 && model[2][1]==0){
	Y=13;return Y;
	}
	if(model[1][1]==1 && model[2][1]==1 && model[0][1]==0){
	Y=14;return Y;
	}
	if(model[0][1]==1 && model[2][1]==1 && model[1][1]==0){
	Y=15;return Y;
	}
	if(model[0][2]==1 && model[1][2]==1 && model[2][2]==0){
	Y=16;return Y;
	}
	if(model[1][2]==1 && model[2][2]==1 && model[0][2]==0){
	Y=17;return Y;
	}
	if(model[0][2]==1 && model[2][2]==1 && model[1][2]==0){
	Y=18;return Y;
	}
	//diagnals
	if(model[0][0]==1 && model[1][1]==1 && model[2][2]==0){
	Y=19;return Y;
	}
	if(model[1][1]==1 && model[2][2]==1 && model[0][0]==0){
	Y=20;return Y;
	}
	if(model[0][0]==1 && model[2][2]==1 && model[1][1]==0){
	Y=21;return Y;
	}
	if(model[0][2]==1 && model[1][1]==1 && model[2][0]==0){
	Y=22;return Y;
	}
	if(model[2][0]==1 && model[1][1]==1 && model[0][2]==0){
	Y=23;return Y;
	}
	if(model[0][2]==1 && model[2][0]==1 && model[1][1]==0){
	Y=24;return Y;
	}


	return Y;
	}

int checkaiwin(int model[3][3]){
int X=0;
//rows

if(model[0][0]==2 && model[0][1]==2 && model[0][2]==0){
X=1;return X;

}
if(model[0][2]==2 && model[0][1]==2 && model[0][0]==0){
X=2;return X;
}
if(model[0][0]==2 && model[0][2]==2 && model[0][1]==0){
X=3;return X;
}
if(model[1][0]==2 && model[1][1]==2 && model[1][2]==0){
X=4;return X;
}
if(model[1][2]==2 && model[1][1]==2 && model[1][0]==0){
X=5;return X;
}
if(model[1][0]==2 && model[1][2]==2 && model[1][1]==0){
X=6;return X;
}
if(model[2][0]==2 && model[2][1]==2 && model[2][2]==0) {
X=7;return X;
}
if(model[2][2]==2 && model[2][1]==2 && model[2][0]==0){
X=8;return X;
}
if(model[2][0]==2 && model[2][2]==2 && model[2][1]==0){
X=9;return X;
}
//collum
if(model[0][0]==2 && model[1][0]==2 && model[2][0]==0){
X=10;return X;
}
if(model[2][0]==2 && model[1][0]==2 && model[0][0]==0){
X=11;return X;
}
if(model[0][0]==2 && model[2][0]==2 && model[1][0]==0){
X=12;return X;
}
if(model[0][1]==2 && model[1][1]==2 && model[2][1]==0){
X=13;return X;
}
if(model[1][1]==2 && model[2][1]==2 && model[0][1]==0){
X=14;return X;
}
if(model[0][1]==2 && model[2][1]==2 && model[1][1]==0){
X=15;return X;
}
if(model[0][2]==2 && model[1][2]==2 && model[2][2]==0){
X=16;return X;
}
if(model[1][2]==2 && model[2][2]==2 && model[0][2]==0){
X=17;return X;
}
if(model[0][2]==2 && model[2][2]==2 && model[1][2]==0){
X=18;return X;
}
//diagnals
if(model[0][0]==2 && model[1][1]==2 && model[2][2]==0){
X=19;return X;
}
if(model[1][1]==2 && model[2][2]==2 && model[0][0]==0){
X=20;return X;
}
if(model[0][0]==2 && model[2][2]==2 && model[1][1]==0){
X=21;return X;
}
if(model[0][2]==2 && model[1][1]==2 && model[2][0]==0){
X=22;return X;
}
if(model[2][0]==2 && model[1][1]==2 && model[0][2]==0){
X=23;return X;
}
if(model[0][2]==2 && model[2][0]==2 && model[1][1]==0){
X=24;return X;
}


return X;
}





void WeRBorg(int model[3][3],int &z,int &d,int X,int Y){
//switch X check for winning placement
	int rand1;
	int rand2;
	srand(time(0));

	switch(X)
	{
	case 1 :
		z=0;
		d=2;
		return;
	case 2 :{
		z=0;
		d=0;
		return;
	}

	case 3 :{
			z=0;
			d=1;
			return;
		}
	case 4 :{
			z=1;
			d=2;
			return;
		}
	case 5 :{
			z=1;
			d=0;
			return;
		}
	case 6 :{
			z=2;
			d=2;
			return;
		}
	case 7 :{
			z=1;
			d=1;
			return;
		}
	case 8 :{
			z=2;
			d=0;
			return;
		}
	case 9 :{
			z=2;
			d=1;
			return;
		}
	case 10 :{
			z=2;
			d=0;
			return;
		}
	case 11 :{
			z=0;
			d=0;
			return;
		}
	case 12 :{
			z=1;
			d=0;
			return;
		}
	case 13 :{
			z=2;
			d=1;
			return;
		}
	case 14 :{
			z=0;
			d=1;
			return;
		}
	case 15 :{
			z=1;
			d=1;
			return;
		}
	case 16 :{
			z=2;
			d=2;
			return;
		}
	case 17 :{
			z=0;
			d=2;
			return;
		}

	case 18 :{
				z=1;
				d=2;
				return;
			}
	case 19 :{
					z=2;
					d=2;
					return;
				}


	case 20:
	z=0;
	d=0;
	return;

	case 21 :{
					z=1;
					d=1;
					return;
				}
	case 22 :{
					z=2;
					d=0;
					return;
				}
	case 23 :{
					z=0;
					d=2;
					return;
				}
	case 24  :{
					z=1;
					d=1;
					return;
				}
	}










	//Y checks player deny
switch(Y)
{
case 1 :{
z=0;
d=2;
return;
}
case 2 :{
	z=0;
	d=0;
	return;
}

case 3 :{
		z=0;
		d=1;
		return;
	}
case 4 :{
		z=1;
		d=2;
		return;
	}
case 5 :{
		z=1;
		d=0;
		return;
	}
case 6 :{
		z=1;
		d=1;
		return;
	}
case 7 :{
		z=2;
		d=2;
		return;
	}
case 8 :{
		z=2;
		d=0;
		return;
	}
case 9 :{
		z=2;
		d=1;
		return;
	}
case 10 :{
		z=2;
		d=0;
		return;
	}
case 11 :{
		z=0;
		d=0;
		return;
	}
case 12 :{
		z=1;
		d=0;
		return;
	}
case 13 :{
		z=2;
		d=1;
		return;
	}
case 14 :{
		z=0;
		d=1;
		return;
	}
case 15 :{
		z=1;
		d=1;
		return;
	}
case 16 :{
		z=2;
		d=2;
		return;
	}
case 17 :{
		z=0;
		d=2;
		return;
	}

case 18 :{
			z=1;
			d=2;
			return;
		}
case 19 :{
				z=2;
				d=2;
				return;
			}

case 20:
z=0;
d=0;
return;

case 21 :{
				z=1;
				d=1;
				return;
			}
case 22 :{
				z=2;
				d=0;
				return;
			}
case 23 :{
				z=0;
				d=2;
				return;
			}
case 24  :{
				z=1;
				d=1;
				return;
			}
}
if(model[1][1]==0){
z=1;
d=1;
}

else{
	rand1 = rand() % 3;
	rand2 = rand() % 3;
	z=rand1;
	d=rand2;
}















	return;
}//------------------------------------------------------------------end of function


bool Checkwinner(int model[3][3],int player){

	bool wins = false;
	if((model[0][0]==player && model[1][1]==player && model[2][2]==player)||//diaginal going to the right
			(model[2][0]==player && model[1][1]==player && model[0][2]==player)||// disinal going to the left
			(model[0][0] ==player && model[0][1]==player  && model[0][2]==player)||// top row
			(model[1][0] ==player && model[1][1] ==player && model[1][2]==player)||//middle row
			(model[2][0] ==player && model[2][1] ==player && model[2][2]==player)||// bottem row
			(model[0][0] ==player && model[1][0] ==player && model[2][0]==player)||//1st piller
			(model[0][1] ==player && model[1][1] ==player && model[2][1]==player)||// 2nd piller
			(model[0][2] ==player && model[1][2] ==player  && model[2][2]==player))//3rd piller
	{
		wins = true;
		if (player==2){
			cout <<"player O wins, THE FLESH IS WEAK";
		}//which player
		else{
			cout<< "player X wins  ";
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


int z,d;
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
			model[x][y]=1;//x=1
			BoardUpdate(model);
			bool wins = Checkwinner(model, 1);
			if(wins) break;
		}
		else
		{
			do{




				WeRBorg(model,z,d,checkaiwin(model),checkaideny(model));

			}while(model[z][d]!=0); //do
			model[z][d]=2;//0=2
			BoardUpdate(model);
			bool wins = Checkwinner(model, 2);
			if(wins) break;
		}
	}//for
	return 0;
}
