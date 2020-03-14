/*
 * insufficientfunds.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#include "insufficientfunds.h"
#include <iostream>
using namespace std;

insufficient_funds::insufficient_funds(int id,double balance,double withdrawamt) {
	this->accid=id;
	this->cur_balance=balance;
	this->withdraw_amount=withdrawamt;
}
void insufficient_funds::display(){
	cerr<<"insufficient balance"<<endl;
	cerr<<"the id is "<<this->accid<<endl;
	cerr<<"the balance is "<<this->cur_balance<<endl;
	cerr<<"the withdraw amt is "<<this->withdraw_amount<<endl;
}

insufficient_funds::~insufficient_funds() {
	// TODO Auto-generated destructor stub
}

