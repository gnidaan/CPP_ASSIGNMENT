/*
 * Manager.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager() {
	Employee(100,10000);
	this->bonus=200;

}
Manager::Manager(int id,float sal,float bonus)
{
	Employee(id,sal);
	this->bonus=bonus;
}

void Manager::accept()
{
	Employee::accept();
	cout<<"enter the bonus";
	cin>>this->bonus;
}

void Manager::display()
{
	Employee::display();
	cout<<"the bonus is"<<this->bonus<<endl;

}
void  Manager::accept_manager(){
	cout<<"enter the bonus"<<endl;
	cin>>this->bonus;
}
void Manager::display_manager(){
	cout<<"the bonus is "<<this->bonus;
}

Manager::~Manager() {
	// TODO Auto-generated destructor stub
}

