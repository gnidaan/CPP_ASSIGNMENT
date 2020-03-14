/*
 * Person.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include "Person.h"
#include <cstring>
#include <iostream>
using namespace std;
Person::Person() {
	strcpy(this->name,"nidaan");
	strcpy(this->address,"kalyan");
}
Person::Person(char *name,char *address,Date d)
{
	strcpy(this->name,name);
	strcpy(this->address,address);
	this->birth=d;
}
void Person::accept(){
	cout<<"enter the name of person"<<endl;
	cin>>this->name;
	cout<<"enter the address of person"<<endl;
	cin>>this->address;
	birth.accept();
}
void Person::display()
{
	cout<<"the name of person is="<<this->name<<endl;
	cout<<"the address of person is="<<this->address<<endl;
	this->birth.display();
}
Person::~Person() {
	// TODO Auto-generated destructor stub
}

