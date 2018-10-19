//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main(void) {
int sys;
float m, ft, in;
cout<<"enter measurement_system:  "<<endl<<"enter 0 for metric to imperial "<<endl<<"enter 1 for imperial to metric";
cin >> sys;
//_______________________________________
if(sys==1){
cout<<"you have selected [Imperial to metric]"<<endl<<"enter feet and inches:";
cin>>ft;
cin>>in;
m=ft*0.3048+in*0.0254;
cout<<m<<"m";
}
//________________________________________
if(sys==0){
cout<<"you have selected [Metric to imperial]"<<endl<<"enter meters:";
cin>>m;
ft=m/0.3048;
in=(ft-(int)ft)*12;
cout<<(int)ft<<"'"<<in<<"\"";
}
//_________________________________________
if((sys>1)||
(sys<0)){
cout<<"invalid input";
}
//_____________________________________________
return 0;
}
