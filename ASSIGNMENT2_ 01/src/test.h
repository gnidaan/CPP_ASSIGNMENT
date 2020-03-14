/*
 * test.h
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */

#ifndef TEST_H_
#define TEST_H_

class Cylinder{
private:double radius,height,volume;
public:
	Cylinder(double ,double );
	void getVolume();
	void printVolume();
	void calculate();

};

int menu();


#endif /* TEST_H_ */
