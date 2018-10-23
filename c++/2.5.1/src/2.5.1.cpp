//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float A,B,C;
char Pick;
	cout << "[calculator]"<< endl;
	cout << "0 - exit" << endl << "1 - addition" << endl << "2 - subtraction " << endl << "3 - multiplication"<< endl << "4 - division"<< endl << "Pick one you git"<< endl;
cin >> Pick;


switch(Pick){

break;

case'0' :
return 0;

break;

case '1' :
cout<<"enter two number to add"<<endl;
cin >> A;
cin >> B;
C=A+B;
cout << A << "+" << B << "=" << C << endl;

break;

case'2' :
cout << "enter two numbers to subtract"<<endl;
cin >> A;
cin >> B;
C=A-B;
cout << A <<"-" << B << "=" << C << endl;

break;

case'3' :
cout<<"enter two number to multiply"<<endl;
cin>>A;
cin>>B;
C=A*B;
cout << A <<" X " << B << " = " << C << endl;

break;
case'4' :
cout<<"enter two number to divide"<<endl;
cin>>A;
cin>>B;
if((A==1)||(B==1)){

C=A/B;
cout << A <<" / " << B << " = " << C << endl;
}
else
{
cout << "dividing by Zero like that is very dangerous" << endl;
}
break;


}
	return 0;
}

