/*
 * Salesmanager.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef SALESMANAGER_H_
#define SALESMANAGER_H_
#include"Salesman.h"
#include "Manager.h"
class Sales_manager :public Salesman,Manager
{
public:
	Sales_manager();
	Sales_manager(int,float,float,float);
	void accept();
	void display();
	virtual ~Sales_manager();
};

#endif /* SALESMANAGER_H_ */
