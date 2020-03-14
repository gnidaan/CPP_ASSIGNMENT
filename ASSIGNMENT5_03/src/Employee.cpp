/*
 * Employee.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include "Employee.h"
#include <cstring>
#include <iostream>
using namespace std;
Employee::Employee() {
	this->id=200;
	this->sal=10000;
}
Employee::Employee(int id,float salary)

{

	this->id=id;
	this->sal=salary;
}

void Employee::accept(){
	cout<<"enter the id of employee"<<endl;
	cin>>this->id;
	cout<<"enter the salary of employee"<<endl;
	cin>>this->sal;
}

void Employee::display()
{
	cout<<"the id of employee"<<this->id<<endl;
	cout<<"the salary of employee"<<this->sal<<endl;
	}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

