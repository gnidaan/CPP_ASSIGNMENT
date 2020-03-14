
/*
 * Employee.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
# include "Date.h"
# include <cstring>

class Employee {
private:
	int id;
	float sal;
	char dept[100];
	Date joining;
public:
	Employee();
	Employee(int,float,char *,Date);
	void accept();
	void display();

	virtual ~Employee();

	const char* getDept() const {
		return dept;
	}

	int getId() const {
		return id;
	}

	void setId(int id) {
		this->id = id;
	}

	const Date& getJoining() const {
		return joining;
	}

	void setJoining(const Date& joining) {
		this->joining = joining;
	}

	float getSal() const {
		return sal;
	}

	void setSal(float sal) {
		this->sal = sal;
	}
	void setDept(char *dept){
		strcpy(this->dept,dept);
	}
};

#endif /* EMPLOYEE_H_ */
