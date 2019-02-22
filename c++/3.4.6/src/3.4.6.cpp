//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
bool isprime=true;
int num1 = num%2;
if(num1<=2){
isprime = false;
}
return isprime;
}
int main(void) {
for(int i = 0; i <= 21; i++)
if(isPrime(i))
cout << i << " ";
cout << endl;
return 0;
}
