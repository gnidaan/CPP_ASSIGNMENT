//============================================================================
// Name        : ASSIGNMENT6_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "shape.h"

int menu(){
	int ch;
	cout<<"1.ACCEPT"<<endl;
	cout<<"2.DISPLAY"<<endl;
	cout<<"3.CALCULATE AREA"<<endl;
	cout<<"4.CALCULATE PERIMETER"<<endl;
	cout<<"ENTER CHOICE"<<endl;
	cin>>ch;
	return ch;
}

int main() {
/*
	Circle c;
	c.accept();
	c.display();
*/
/*
	Rectangle r;
	r.accept();
	r.display();
*/

/*
	Square s;
	s.accept();
	s.display();
	float res;
	res=s.calc_area();
	cout<<"the result is"<<res<<endl;
*/

	int choice;
	shape *s[10];
	while((choice=menu())!=0)
	{
		switch(choice)
		{
		case 1:{
			for(int i=0;i<5;i++)
			{
			cout<<"1.ACCEPT RECTANGLE 2.ACCEPT SQUARE 3.ACCEPT CIRCLE"<<endl;
			cin>>choice;
			switch(choice)
			{
			case 1:s[i]=new Rectangle;break;
			case 2:s[i]=new Square;break;
			case 3:s[i]=new Circle;break;
			}
			s[i]->accept();
			}
		}break;
		case 2:
		{
			for(int i=0;i<5;i++)
			{
				s[i]->display();
			}
		}break;
		case 3:
		{
			float res_area=0;
			for(int i=0;i<5;i++)
			{
				res_area=res_area+s[i]->calc_area();
			}
			cout<<"the total area is="<<res_area<<endl;
		}break;
		case 4:
		{
			float res_peri=0;
			for(int i=0;i<5;i++)
			{
			res_peri=res_peri+s[i]->calc_peri();
			}
			cout<<"the total perimeter is="<<res_peri<<endl;
		}break;

		}
	}


	for(int i=0;i<5;i++){
		delete []s[i];
	}

	return 0;
}
