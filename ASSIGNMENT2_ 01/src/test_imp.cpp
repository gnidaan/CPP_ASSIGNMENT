/*
 * test_imp.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */


#include <iostream>
#include "test.h"
using namespace std;

Cylinder::Cylinder(double radius,double height)
{
	this->height=height;
	this->radius=radius;
}

void Cylinder::getVolume(){
	cout<<"enter the radius ";
	cin>>this->radius;
	cout<<"enter the height ";
	cin>>this->height;

}

void Cylinder::calculate(){
	this->volume=(3.14)*this->radius*this->radius*this->height;
}

void Cylinder::printVolume(){
	cout<<"the volume of cylinder is"<<this->volume;
}

int menu(){
	int ch;
	cout<<"\n0.exit"<<endl;
	cout<<"1.accept"<<endl;
	cout<<"2.calculate"<<endl;
	cout<<"3.display"<<endl;
	cin>>ch;
	return ch;
}
