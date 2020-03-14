//============================================================================
// Name        : ASSIGNMENT5_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
# include "Date.h"
#include "Person.h"
# include "Employee.h"
int main() {
	Date d;
	d.accept();
	d.display();
	d.is_leapyr();
/*
	Person p;
	p.accept();
	p.display();
*/
	Person p("nidaan","kalyan",d);
	p.display();

	Employee e(500,342.234f,"retire",d);
	//e.accept();
	e.display();

	return 0;
}
