//============================================================================
// Name        : ASSIGNMENT2_.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "test.h"
using namespace std;

int main() {
	Cylinder c(4,3);
	int ch;
	while((ch=menu())!=0){
		switch(ch){
		case 1:c.getVolume();break;
		case 2:c.calculate();break;
		case 3:c.printVolume();break;
		}
	}
	return 0;
}
