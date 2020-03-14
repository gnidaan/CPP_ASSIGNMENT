/*
 * address.h
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_

class address {
private:
	char building[40],street[50],city[50];
	int pincode;
public:
	address();
	address(char* ,char* ,char* ,int);


	void accept();
	void display();

	const char* getBuilding() const {
		return building;
	}

	const char* getCity() const {
		return city;
	}

	int getPincode() const {
		return pincode;
	}

	void setPincode(int pincode) {
		this->pincode = pincode;
	}
	void setBuilding(char *building){
	}

	void setStreet(char *Street){
	}
	void setCity(char *city){
	}

	const char* getStreet() const {
		return street;
	}
	~address();
};

#endif /* ADDRESS_H_ */
