//============================================================================
// Name        : ASSIGNMENTstl_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string.h>
#include <algorithm>
#include <list>


int main() {
	list <string> str;
	string s1;

	for(int i=0;i<10;i++)
	{
		cin>>s1;
		str.push_back(s1);
	}

	cout<<"the names of student are as follow"<<endl;
	list <string>::iterator itr=str.begin();
	while(itr!=str.end())
	{
		cout<<*itr<<endl;
		itr++;
	}


	str.sort();

	cout<<"after sorting"<<endl;
	itr=str.begin();
		while(itr!=str.end())
		{
			cout<<*itr<<endl;
			itr++;
		}
	str.reverse();

	cout<<"after sorting and reversing"<<endl;
		itr=str.begin();
			while(itr!=str.end())
			{
				cout<<*itr<<endl;
				itr++;
			}

	return 0;
}
