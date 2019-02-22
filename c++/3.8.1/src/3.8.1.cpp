//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
void increment(int &a,int b=1){
 a=a+b;

return;
}
void increment(float &a,float  b=1.0){
 a=a+b;

return;
}


int main(void) {
int intvar = 0;
float floatvar = 1.5;
for(int i = 0; i < 10; i++)
if(i % 2) {
increment(intvar);
increment(floatvar, sqrt(intvar));
}
else {
increment(intvar,i);
increment(floatvar);
}
cout << intvar * floatvar << endl;
return 0;
}
