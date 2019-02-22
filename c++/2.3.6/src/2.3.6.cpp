//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
int N;
	cout<<"enter size of pyramids: "<<endl;
cin>>N;
if(N>2){
int sidespace=N-1,space=-1;
for(int a=0;a<3;a++){
for(int i=0;i<sidespace;i++)cout<<" ";
cout<<"*";
for(int i=0;i<sidespace;i++)cout<<" ";
cout<<" ";
}
cout<<endl;
for(int j=N-1;j>=2;j--){
sidespace--;
space+=2;
for(int a=0;a<3;a++){
	for(int i=0;i<sidespace;i++)cout<<" ";
	cout<<"*";
	for(int i=0;i<space;i++)cout<<" ";
	cout<<"*";
	for(int i=0;i<sidespace;i++)cout<<" ";
cout<<" ";
}
cout<<endl;






}
for(int a=0;a<3;a++){
for(int i=0;i<2*N-1;i++)
cout<<"*";
cout<<" ";
}
cout<<endl;
















}
else
{
cout<<"invalid input"<<endl;
}






























	return 0;
}
