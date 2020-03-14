//============================================================================
// Name        : ASSIGNMENT_05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class tollBooth{
private:
	unsigned int number_cars;
	double amt;
public:
	tollBooth(){
		this->amt=0;
		this->number_cars=0;
	}
	void payingCar();
	void nopayCar();
	void PrintOnConsole();
};

void tollBooth::payingCar(){
	this->number_cars++;
	this->amt+=0.50;
}
void tollBooth::nopayCar(){
	this->number_cars++;
}
void tollBooth::PrintOnConsole(){
	cout<<"total no of cars passed="<<this->number_cars<<endl;
	cout<<"total amount collected of cars passed="<<this->amt<<endl;
}
int menu(){
	int ch;
	cout<<"0.exit"<<endl;
	cout<<"1.collect paying car"<<endl;
	cout<<"2.collect non-paying car"<<endl;
	cout<<"3.print on console"<<endl;
	cin>>ch;
	return ch;
}
int main() {
	tollBooth t;int ch;
	while((ch=menu())!=0)
	{
		switch(ch)
		{
		case 1:t.payingCar();break;
		case 2:t.nopayCar();break;
		case 3:t.PrintOnConsole();break;

		}
	}
	return 0;
}
