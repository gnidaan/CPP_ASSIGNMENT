/*
 * Rectangle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
using namespace std;
#include "Rectangle.h"

Rectangle::Rectangle() {
	this->length=0;
	this->breadth=0;
}
Rectangle::Rectangle(float length,float breadth){
	this->length=length;
	this->breadth=breadth;
}
void Rectangle::accept(){
	cout<<"enter the length of rectangle";
	cin>>this->length;
	cout<<"enter the breadth of rectangle";
	cin>>this->breadth;
}
void Rectangle::display(){
	cout<<"the length is "<<this->length<<endl;
	cout<<"the breadth is "<<this->breadth<<endl;
}
float Rectangle::calc_area(){
	return this->length*this->breadth;
}
float Rectangle::calc_peri(){
	return 2*(this->length+this->breadth);
}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

