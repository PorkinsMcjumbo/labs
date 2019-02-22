//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void increment(int &a,int b=1){
 a=a+b;

return;
}
int main(void) {
int var = 0;
for(int i = 0; i < 10; i++)
if(i % 2)
increment(var);
else
increment(var,i);
cout << var << endl;
return 0;
}
