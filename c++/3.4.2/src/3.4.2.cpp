
//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
bool isLeap(int year) {

	bool answer=false;

	if(year>=1582){
		if((year%4!=0)||
				((year%100==0)&&
						(year%400!=0)))

		{
			answer=false;
		}
		else
		{
			answer=true;
		}
	}

	else{
		answer=false;
	}
	return answer;;//function ends ===============================================================================================================
}
//-------------
int monthLength(bool isleep, int month){
int length=0;
switch(month){
case 1:length = 31;
break;
case 2: if(isleep){length=29;}else{length=28;}
break;
case 3:length = 31;
break;
case 4:length = 30;
break;
case 5:length = 31;
break;
case 6:length = 30;
break;
case 7:length = 31;
break;
case 8:length = 31;
break;
case 9:length = 30;
break;
case 10:length = 31;
break;
case 11:length = 30;
break;
case 12:length = 31;


}
return length;//function ends===========================================================================================================
}
//--------------
int main(void) {
int year,month;
int length;
bool answer;
do{
cout<<"enter year and month"<<endl;
cout<<"month 1-12"<<endl;
cin>>year;
cin>>month;
}while(month>12);
answer=isLeap(year);
length=monthLength(answer,month);
cout<< length <<" days"<<endl;
return 0;
}
