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
	strcpy(this->dept,"MANAGER");
	this->sal=10000;
}
Employee::Employee(char *name,char *address,Date b,int id,float salary,char *dept,Date d)
:Person(name,address,b)
{

	this->id=id;
	this->sal=salary;
	strcpy(this->dept,dept);
	this->joining=d;
}

void Employee::accept(){
	Person::accept();
	cout<<"enter the id of employee"<<endl;
	cin>>this->id;
	cout<<"enter the dept of employee"<<endl;
	cin>>this->dept;
	cout<<"enter the salary of employee"<<endl;
	cin>>this->sal;
	this->joining.accept();
}

void Employee::display()
{
	Person::display();
	cout<<"the id of employee"<<this->id<<endl;
	cout<<"the dept of employee"<<this->dept<<endl;
	cout<<"the salary of employee"<<this->sal<<endl;
	this->joining.display();
}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

