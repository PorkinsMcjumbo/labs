//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main(void) {
float grossprice, taxrate, netprice, taxvalue;
cout << "Enter a gross price: ";
cin >> grossprice;
cout << "Enter a tax rate: ";
cin >> taxrate;
bool answer;
if(taxrate>0 && taxrate<=100)
{
	answer=true;
}
else
{
	answer=false;
}

cout << (answer ? "tax-rate valid,thats very cash money of you!" : "invalid tax-rate,thats not very cash money of you!") << endl;

if(answer){
netprice=grossprice/(1.0+taxrate/100);
taxvalue=grossprice-netprice;
cout << "Net price$: " << netprice << endl;
cout << "Tax value$: " << taxvalue << endl;
}
return 0;
}
