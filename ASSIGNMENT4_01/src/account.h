/*
 * account.h
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
enum account_type
{
	SAVINGS=1,CURRENT,DMAT
};

class account {
private:
	int id;
	account_type type;
	double balance;
public:
	account();
	account(int id,account_type type,double balance);

	void accept();
	void display();
	void deposit(double amount);
	void withdraw(double amount,int ID);


	account_type getAccountType() const {
		return type;
	}

	double getBalance() const {
		return balance;
	}

	void setBalance(double balance) {
		this->balance = balance;
	}

	int getId() const {
		return id;
	}

	void setAccountType(account_type type){
		this->type=type;
	}

	void setId(int id) {
		this->id = id;
	}
	~account();
};

#endif /* ACCOUNT_H_ */
