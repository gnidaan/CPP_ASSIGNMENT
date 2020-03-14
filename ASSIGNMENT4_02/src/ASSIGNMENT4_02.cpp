//============================================================================
// Name        : ASSIGNMENT4_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "address.h"

int main() {
	address a;
	a.display();
	cout<<endl;

	address a1("pride mohan","thane","nagar",411011);
	a1.display();
	cout<<endl;

	address a2;
	a2.accept();
	a2.display();

	return 0;
}
