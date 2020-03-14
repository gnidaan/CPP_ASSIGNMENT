/*
 * account.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
#include "account.h"
#include "insufficientfunds.h"
#include <cstring>
using namespace std;
string t[4]={"","SAVINGS","CURRENT","DMAT"};
account::account(){
	this->id=0;
	this->balance=0;
	this->type=SAVINGS;

}
account::account(int id,account_type type,double balance){
	this->id=id;
	this->type=type;
	this->balance=0;
}

void account::deposit(double amount )
{
	this->balance=balance+amount;
}

void account::withdraw(double amount,int ID)
{
	insufficient_funds f(ID,this->balance,amount);
		if(this->balance<amount){
			throw insufficient_funds (ID,this->balance,amount);
		}
		else
		this->balance=balance-amount;

}

void account::accept(){
	int ch;
	cout<<"enter the id of account"<<endl;
	cin>>this->id;
	cout<<"enter the balance of account"<<endl;
	cin>>this->balance;
	cout<<"enter the account type of account"<<endl;
	cout<<"1.saving 2.current 3.dmat"<<endl;
	cin>>ch;
	this->type=(account_type)ch;
}

void account::display(){
	cout<<"the id of account is "<<this->id<<endl;
	cout<<"the balance of account is "<<this->balance<<endl;
	cout<<"the account type is "<<t[type]<<endl;
	cout<<endl<<endl;

}



account::~account() {
	// TODO Auto-generated destructor stub
}

