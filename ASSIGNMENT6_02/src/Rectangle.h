/*
 * Rectangle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "shape.h"
class Rectangle :public shape{
private:
	float length;
	float breadth;
public:
	Rectangle();
	Rectangle(float,float);
	void accept();
	void display();
	float calc_area();
	float calc_peri();

	virtual ~Rectangle();

	float getBreadth() const {
		return breadth;
	}

	void setBreadth(float breadth) {
		this->breadth = breadth;
	}

	float getLength() const {
		return length;
	}

	void setLength(float length) {
		this->length = length;
	}
};

#endif /* RECTANGLE_H_ */
