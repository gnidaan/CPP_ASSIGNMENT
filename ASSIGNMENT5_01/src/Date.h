/*
 * Date.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef DATE_H_
#define DATE_H_

class Date {
private:
	int dd,mm,yy;
public:
	Date();
	Date(int,int,int);
	void accept();
	void display();
	void is_leapyr();
	virtual ~Date();

	int getDd() const {
		return dd;
	}

	void setDd(int dd) {
		this->dd = dd;
	}

	int getMm() const {
		return mm;
	}

	void setMm(int mm) {
		this->mm = mm;
	}

	int getYy() const {
		return yy;
	}

	void setYy(int yy) {
		this->yy = yy;
	}
};

#endif /* DATE_H_ */
