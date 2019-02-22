//============================================================================
// Name        : 1.cpp
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
	return answer;
}
int main(void) {
	for(int yr = 1995; yr < 2017; yr++)
		cout << yr << " -> " << isLeap(yr) << endl;
	return 0;
}
