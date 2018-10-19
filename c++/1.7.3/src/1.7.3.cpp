//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
bool answer;
int a;
int b;
int c;
int d;
cout<<"enter 4 integers";
cin>>a>>b>>c>>d;
if((a>=1 && a<=255)&&
		(b>=1 && b<=255)&&
		(c>=1 && c<=255)&&
		(d>=1 && d<=255))


{
answer=true;
}
else
{
answer=false;
}
cout << (answer ? "ip valid! :)" : "ip not valid >:(") << endl;

if(answer){
cout <<a<<"."<<b<<"."<<c<<"."<<d;
}
}
