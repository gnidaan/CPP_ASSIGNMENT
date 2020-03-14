/*
 * Salesman.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef SALESMAN_H_
#define SALESMAN_H_
#include "Employee.h"
class Salesman:virtual public Employee {
private:
	float comm;
public:
	Salesman();
	Salesman(int,float,float);
	void accept();
	void display();

	virtual ~Salesman();

	float getComm() const {
		return comm;
	}

	void setComm(float comm) {
		this->comm = comm;
	}
protected:
	void display_salesman();
	void accept_salesman();
};

#endif /* SALESMAN_H_ */
