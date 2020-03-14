/*
 * Square.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef SQUARE_H_
#define SQUARE_H_
#include "shape.h"
class Square:public shape {
private:
	float side;
public:
	Square();
	Square(float);
	void accept();
	void display();
	float calc_area();
	float calc_peri();



	virtual ~Square();

	float getSide() const {
		return side;
	}

	void setSide(float side) {
		this->side = side;
	}
};

#endif /* SQUARE_H_ */
