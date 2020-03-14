//============================================================================
// Name        : ASSIGNMENT_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class box{
private:float length,breadth,width,vol;
public:
	box(float length,float breadth,float width)
	{
		this->length=length;
		this->breadth=breadth;
		this->width=width;
	}
	box();
	void calculate();
	void display();
	void accept();
};

void box::display(){
	cout<<"length,breadth,width"<<this->length<<this->breadth<<this->width<<endl;
	cout<<"the volume of box is ="<<this->vol;
}
box::box(){
	    this->length=12;
		this->breadth=34;
		this->width=54;

}
void box::calculate(){
	this->vol=length*breadth*width;
}
void box::accept(){
	cout<<"enter the length of box"<<endl;
	cin>>this->length;
	cout<<"enter the breadth of box"<<endl;
	cin>>this->breadth;
	cout<<"enter the width of box"<<endl;
	cin>>this->width;
}

int menu(){
	int ch;
		cout<<"\n0.exit"<<endl;
		cout<<"1.ACCEPT"<<endl;
		cout<<"2.DISPLAY"<<endl;
		cout<<"3.CALCULATE"<<endl;
		cin>>ch;
		return ch;

}
int submenu(){
	int cho;
		cout<<"0.exit"<<endl;
		cout<<"1.parameterless"<<endl;
		cout<<"2.parameterized"<<endl;
		cout<<"enter sub menu choice"<<endl;
		cin>>cho;
		return cho;
}

box factory(){
	box b;box b1(2.1,4.3,4.5);
		box *e;
	int ch1;

			while((ch1=submenu())!=0){
				switch(ch1){
				case 1:return b;break;
				case 2:return b1;break;
				}
			}
}
int main() {
	int ch,ch1;
	box e=factory();
	while((ch=menu())!=0){
		switch(ch){
		case 1:e.accept();break;
		case 2:e.display();break;
		case 3:e.calculate();break;
		}
	}

	return 0;
}
