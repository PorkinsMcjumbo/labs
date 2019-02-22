//============================================================================
// Name        : lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);
	int indxsmallest = 0;

	for(int icompare = indxsmallest+1; icompare <n; icompare++)
	{int *p=vector;
		if(*(p+icompare) < *(p+indxsmallest)){
			indxsmallest = icompare;
		}
	}

	cout<< "smallest boi = "<<vector[indxsmallest] << endl;
	return 0;
}
