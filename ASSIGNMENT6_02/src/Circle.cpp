/*
 * Circle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	this->radius=0;
}
Circle::Circle(float radius){
	this->radius=radius;
}
void Circle::accept(){
	cout<<"enter the radius"<<endl;
	cin>>this->radius;
}
void Circle::display(){
	cout<<"the radius is "<<this->radius<<endl;
}
float Circle::calc_area(){
	return 3.14*this->radius*this->radius;
}
float Circle::calc_peri(){
	return 2*3.14*this->radius;
}

Circle::~Circle() {
	// TODO Auto-generated destructor stub
}

