//============================================================================
// Name        : ASSIGNMENT4_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "account.h"
#include "insufficientfunds.h"


int menu(){
	int ch;
	cout<<"0.EXIT"<<endl;
	cout<<"1.ACCEPT"<<endl;
	cout<<"2.DISPLAY"<<endl;
	cout<<"3.DEPOSIT"<<endl;
	cout<<"4.WITHDRAW"<<endl;
	cout<<"ENTER THE CHOICE"<<endl;
	cin>>ch;
	return ch;
}


int main() {
	double amt;int ch,ID,numbers;
	cout<<"enter  the number of account "<<endl;
	cin>>numbers;
	account a[numbers];
	while((ch=menu())!=0){
		switch(ch)
		{
		case 1:
			for(int i=0;i<numbers;i++){
			a[i].accept();
			}break;
		case 2:
			for(int i=0;i<numbers;i++){
					a[i].display();
			}break;
		case 3:
		{
			cout<<"enter the id to deposit"<<endl;
			cin>>ID;
			for(int i=0;i<numbers;i++)
			{
				if(a[i].getId()==ID)
				{
					cout<<"enter the amount to deposit"<<endl;
					cin>>amt;
					a[i].deposit(amt);
					a[i].display();
					break;
				}
			}
					cout<<"NO SEARCH FOUND"<<endl;


		}break;
		case 4:
		{
			try {
				cout<<"enter the id to withdraw"<<endl;
							cin>>ID;
							for(int i=0;i<numbers;i++)
							{
								if(a[i].getId()==ID)
								{
									cout<<"enter the amount to withdraw"<<endl;
									cin>>amt;
									a[i].withdraw(amt,ID);
									a[i].display();
									break;
								}

							}

				}
			catch (insufficient_funds e) {
				e.display();
			}
			//cout<<"NO SEARCH FOUND"<<endl;
		}break;


		}
	}




	return 0;
}
