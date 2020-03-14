/*
 * address.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */
#include <cstring>
#include <iostream>
#include "address.h"
using namespace std;


address::address() {
		strcpy(this->building,"mohan pride");
		strcpy(this->city,"kalyan");
		strcpy(this->street,"khadakpada");
		this->pincode=421301;
}

address::address(char *building,char *city,char *street,int pincode)
{
	strcpy(this->building,building);
	strcpy(this->city,city);
	this->pincode=pincode;
	strcpy(this->street,street);
}
void address::accept(){
	cout<<"enter the building name"<<endl;
	cin>>this->building;
	cout<<"enter the street name"<<endl;
	cin>>this->street;
	cout<<"enter the city name"<<endl;
	cin>>this->city;
	cout<<"enter the pincode"<<endl;
	cin>>this->pincode;
}

void address::display(){
	cout<<"the building name is="<<this->building<<endl;
	cout<<"the street name is="<<this->street<<endl;
	cout<<"the city is="<<this->city<<endl;
	cout<<"pincode is="<<this->pincode<<endl;
}

address::~address() {
	// TODO Auto-generated destructor stub
}

