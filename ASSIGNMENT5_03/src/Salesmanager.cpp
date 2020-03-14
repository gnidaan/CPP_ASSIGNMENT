/*
 * Salesmanager.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include "Salesmanager.h"
#include<iostream>
using namespace std;
# include "Manager.h"
# include "Salesman.h"
Sales_manager::Sales_manager()
{
	Manager(100,10000,200);
	Salesman(100,20000,300);

}
Sales_manager::Sales_manager(int id,float sal,float bonus,float comm)
{
	Manager(id,sal,bonus);
	Salesman(id,sal,comm);
}
void Sales_manager::accept()
{

	Employee::accept();
	Manager::accept_manager();
	Salesman::accept_salesman();
}

void Sales_manager::display()
{
	Employee::display();
	Manager::display_manager();
	Salesman::display_salesman();
}

Sales_manager::~Sales_manager() {
	// TODO Auto-generated destructor stub
}

