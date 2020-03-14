//============================================================================
// Name        : ASSIGNMENT_03.cpp
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
	 Date(int dd,int mm,int yy)
	{
		this->dd=dd;
		this->mm=mm;
		this->yy=yy;
	}
	void PrintDateOnConsole();
	void AcceptDateFromConsole();
	bool IsLeapYear();

};

void Date::AcceptDateFromConsole(){
	cout<<"enter the date in format dd/mm/yy"<<endl;
	cin>>this->dd>>this->mm>>this->yy;
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
	cout<<"2.DISPLAY"<<endl;
	cout<<"3.CHECK"<<endl;
	cin>>ch;
	return ch;
}
enum option {
	exit,accept,display,check
};

int main() {
	Date d(12,12,2012);
	Date d;
	int ch;bool chk;
	while((ch=menu())!=0){
		switch(ch){
		case accept:d.AcceptDateFromConsole();break;
		case display:d.PrintDateOnConsole();break;
		case check:{chk=d.IsLeapYear();
				if(chk==1)cout<<"it is leap year";
				else cout<<"it is not leap year";
				break;}
		}
	}

	return 0;
}
