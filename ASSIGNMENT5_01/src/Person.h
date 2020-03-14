/*
 * Person.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef PERSON_H_
#define PERSON_H_
#include "Date.h"
#include <cstring>

class Person {
private:
	char name[50];
	char address[100];
	Date birth;
public:
	Person();
	Person(char *,char *,Date);
	void accept();
	void display();

	virtual ~Person();

	const char* getAddress() const {
		return address;
	}

	const Date& getBirth() const {
		return birth;
	}
	void setName(char *name){
		strcpy(this->name,name);
	}

	void setAddress(char *address){
		strcpy(this->address,address);
	}

	void setBirth(const Date& birth) {
		this->birth = birth;
	}

	const char* getName() const {
		return name;
	}
};

#endif /* PERSON_H_ */
