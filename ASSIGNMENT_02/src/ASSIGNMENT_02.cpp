//============================================================================
// Name        : ASSIGNMENT_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Date{
private:
	int dd,mm,yy;
public:
	void InitDate();
	void PrintDateOnConsole();
	void AcceptDateFromConsole();
	bool IsLeapYear();

};

void Date::AcceptDateFromConsole(){
	cout<<"enter the date in fromat dd/mm.yy"<<endl;
	cin>>this->dd>>this->mm>>this->yy;
}
void Date::InitDate(){
	this->dd=21;
	this->mm=03;
	this->yy=2020;
}
void Date::PrintDateOnConsole(){
	cout<<"the date in given format is"<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<endl;
}
bool Date::IsLeapYear(){
	if(this->yy%4==0)
	{
		if(this->yy%100==0)
		{
			if(this->yy%400==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}else
		{
			return true;
		}

	}else
	{
		return false;
	}
}

int menu(){
	int ch;
	cout<<"\n0.exit"<<endl;
	cout<<"1.ACCEPT"<<endl;
	cout<<"2.INIT"<<endl;
	cout<<"3.DISPLAY"<<endl;
	cout<<"4.CHECK"<<endl;
	cin>>ch;
	return ch;
}
int main() {
	Date d;int ch;bool chk;
	while((ch=menu())!=0){
		switch(ch){
		case 1:d.AcceptDateFromConsole();break;
		case 2:d.InitDate();break;
		case 3:d.PrintDateOnConsole();break;
		case 4:{chk=d.IsLeapYear();
				if(chk==1)cout<<"it is leap year";
				else cout<<"it is not leap year";
				break;}
		}
	}


	return 0;
}
