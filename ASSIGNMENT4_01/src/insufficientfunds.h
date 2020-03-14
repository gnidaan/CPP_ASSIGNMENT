/*
 * insufficientfunds.h
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#ifndef INSUFFICIENTFUNDS_H_
#define INSUFFICIENTFUNDS_H_

class insufficient_funds {
private:
	int accid;
	double cur_balance;
	double withdraw_amount;
public:
	insufficient_funds(int ,double, double);
	void display();
	~insufficient_funds();
};

#endif /* INSUFFICIENTFUNDS_H_ */
