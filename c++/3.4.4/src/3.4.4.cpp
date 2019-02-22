//============================================================================
// Name        : 4.cpp
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
// The code you've inserted already
}
int monthLength(int year, int month) {
// The code you've inserted already
}
int dayOfYear(Date date) {
// The code you've inserted already
}
int daysBetween(Date d1, Date d2) {
// Insert you code here
}
int main(void) {
Date since,to;
cout << "Enter first date (y m d): ";
cin >> since.year >> since.month >> since.day;
cout << "Enter second date (y m d): ";
cin >> till.year >> till.month >> till.day;
cout << daysBetween(since,till) << endl;
return 0;
}
