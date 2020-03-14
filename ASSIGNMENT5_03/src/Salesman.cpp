/*
 * Salesman.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include "Salesman.h"
#include <iostream>
using namespace std;
#include "Employee.h"

Salesman::Salesman() {
	this->comm=0.15;
	Employee(100,10000);
}
Salesman::Salesman(int id,float sal,float comm)
{
	Employee(id,sal);
	this->comm=comm;
}
void Salesman::accept()
{
	Employee::accept();
	cout<<"enter the commission of salesman";
	cin>>this->comm;
}

void Salesman::display()
{
	Employee::display();
	cout<<"the commission of salesman"<<this->comm<<endl;
}
void Salesman::accept_salesman(){
	cout<<"enter the commission"<<endl;
	cin>>this->comm;

}
void Salesman::display_salesman(){
	cout<<"the commission is "<<this->comm<<endl;

}
Salesman::~Salesman() {
	// TODO Auto-generated destructor stub
}

