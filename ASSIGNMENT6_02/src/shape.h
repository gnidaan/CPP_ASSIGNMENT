/*
 * shape.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef SHAPE_H_
#define SHAPE_H_

class shape {
private:
public:
	shape();
	virtual void accept();
	virtual void display();
	virtual float calc_area()=0;
	virtual float calc_peri();
	virtual ~shape();

};

#endif /* SHAPE_H_ */
