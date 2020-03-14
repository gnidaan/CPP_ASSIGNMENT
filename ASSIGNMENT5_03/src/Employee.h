/*
 * Employee.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

# include <cstring>


class Employee {
private:
	int id;
	float sal;

public:
	Employee();
	Employee(int,float);
	void accept();
	void display();


	virtual ~Employee();

	int getId() const {
		return id;
	}

	void setId(int id) {
		this->id = id;
	}

	float getSal() const {
		return sal;
	}

	void setSal(float sal) {
		this->sal = sal;
	}
};

#endif /* EMPLOYEE_H_ */
