/*
 * Circle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "shape.h"

class Circle :public shape{
private:float radius;
public:
	Circle();
	Circle(float);
	void accept();
	void display();
	virtual ~Circle();
	float calc_area();
	float calc_peri();

	float getRadius() const {
		return radius;
	}

	void setRadius(float radius) {
		this->radius = radius;
	}
};

#endif /* CIRCLE_H_ */
