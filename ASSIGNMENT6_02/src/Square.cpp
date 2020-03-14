/*
 * Square.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "Square.h"
#include <iostream>
using namespace std;
Square::Square() {
	this->side=0;
}
Square::Square(float side){
	this->side=side;
}
void Square::accept(){
	cout<<"enter the side of square"<<endl;
	cin>>this->side;
}
void Square::display(){
	cout<<"the side of square"<<this->side<<endl;
}
float Square::calc_area(){
	return this->side*this->side;
}
float Square::calc_peri(){
	return 4*this->side;
}

Square::~Square() {
	// TODO Auto-generated destructor stub
}

