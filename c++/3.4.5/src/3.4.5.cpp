//============================================================================
// Name        : 5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
using namespace std;

struct date{
	int year,month,day;
};
date today(void){
	date redate = {};
	time_t t = time(NULL);
	tm tl = *localtime(&t);


	redate.year=tl.tm_year+1900;
	redate.month=tl.tm_mon+1;
	redate.day=tl.tm_mday;
	return redate;

}





int main(void) {

date urmum={};
urmum=today();


cout << urmum.year << "-" << urmum.month << "-" << urmum.day << endl;
	return 0;
}
