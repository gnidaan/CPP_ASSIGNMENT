/*
 * Date.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include "Date.h"
#include <iostream>
using namespace std;

Date::Date() {
	this->dd=1;
	this->mm=1;
	this->yy=2020;
}
Date::Date(int dd,int mm,int yy):dd(dd),mm(mm),yy(yy)
{
}
void Date::accept(){
	cout<<"enter the date in format"<<endl;
	cin>>this->dd>>this->mm>>this->yy;
}
void Date::display(){
	cout<<"the date is "<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<endl;
}
void Date::is_leapyr(){
	if(this->yy%4==0)
	{
		if(this->yy%100==0)
		{
			if(this->yy%400==0)
			{
				cout<<this->yy<<"is leap year"<<endl;
			}
			else
				cout<<this->yy<<"is not leap year"<<endl;
		}
		else
			cout<<this->yy<<"is leap year"<<endl;
	}
	else
		cout<<this->yy<<"is not leap year"<<endl;
}

Date::~Date() {
	// TODO Auto-generated destructor stub
}

