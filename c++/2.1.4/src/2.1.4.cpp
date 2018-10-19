//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
int year,month,day;

cout<<"enter day:"<<endl;
cin>>day;
cout<<"enter month:"<<endl;
cin>>month;
cout<<"enter year:"<<endl;
cin>>year;

month=month-2;
if(month<=0){
month=month+12;
year=year-1;
}

month=month*83/32;

month=month+day;

month=month+year;

month=month+year/4;

month=month-year/100;

month=month+year/400;

month=month%7;
cout<<"day= "<<month<<endl;
cout<<"sunday=0"<<" monday=1"<<" tuesday=2"<<" wednesday=3"<<" thursday=4"<<" friday=5"<<" saturday=6";















	return 0;
}
