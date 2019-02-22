//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct Date {
int year;
int month;
int day;
};
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
}
int dayOfYear(Date date) {
int numDays

if(month<1 || month>12){
return 0;
}
else{
if(day<1 || day>length){return 0;}
else
{
	}


}
}
int main(void) {
Date d;
cout << "Enter year month day: ";
cin >> d.year >> d.month >> d.day;

monthLength(isleap,month)

cout << dayOfYear(d) << endl;
return 0;
}
