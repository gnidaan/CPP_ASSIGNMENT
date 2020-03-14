/*
 * Manager.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef MANAGER_H_
#define MANAGER_H_
#include "Employee.h"
class Manager:virtual public Employee {
private:
	float bonus;
public:
	Manager();
	Manager(int,float,float);
	void accept();
	void display();

	virtual ~Manager();

	float getBonus() const {
		return bonus;
	}

	void setBonus(float bonus) {
		this->bonus = bonus;
	}

protected:
	void display_manager();
	void accept_manager();

};

#endif /* MANAGER_H_ */
