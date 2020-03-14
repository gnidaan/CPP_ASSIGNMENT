//============================================================================
// Name        : ASSIGNMENT3_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Time{
private:int hour,minute,second;
public:
	int getHour() const {
		return hour;
	}

	void setHour(int hour) {
		this->hour = hour;
	}

	int getMinute() const {
		return minute;
	}

	void setMinute(int minute) {
		this->minute = minute;
	}

	int getSecond() const {
		return second;
	}

	void setSecond(int second) {
		this->second = second;
	}
	Time(){}
	Time(int hour,int minute,int second){
		this->minute=minute;
		this->hour=hour;
		this->second=second;
	}
	void print_Time(){
		cout<<"the time is "<<this->hour<<":"<<this->minute<<":"<<this->second<<endl;
	}
	void accept(){
		cout<<"enter the hour";
		cin>>this->hour;
		cout<<"enter the minute";
		cin>>this->minute;
		cout<<"enter the second";
		cin>>this->second;


	}
	~Time(){}

};

int main() {
	int no;
	cout<<"enter the  number of time";
	cin>>no;
	Time *t=new Time[no];
	Time t1(8,65,45646);
	t1.print_Time();

	Time t2(4,3453,453);
	t2.print_Time();

	for(int i=0;i<no;i++){
	t[i].accept();
	}
	for (int i = 0; i < no; ++i) {
		t[i].print_Time();
	}
	delete []t;t=NULL;





	return 0;
}
