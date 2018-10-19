//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
int main(void) {
int year;
bool answer;
cout << "Enter a year: ";
cin >> year;

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

cout << (answer ? "leap year" : "common year") << endl;

return 0;
}
