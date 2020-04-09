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
#include <vector>


int main() {
	vector <float> f1;int no;
	cout<<"enter the number for input"<<endl;
	cin>>no;float ele;
	for(int i=0;i<no;i++)
	{
		cin>>ele;
		f1.push_back(ele);
	}
	vector <float>::iterator itr=f1.begin();
		while(itr!=f1.end())
		{
			cout<<*itr<<endl;
			itr++;
		}

		for(int i=0;i<no;i++)
		{
			cout<<f1.at(i)<<endl;
		}

		vector<float> ::iterator m;
		m=max_element(f1.begin(),f1.end());

		cout<<"the max element is="<<*m<<endl;

		vector<float> ::iterator mn;
		mn=min_element(f1.begin(),f1.end());

		cout<<"the min element is="<<*mn<<endl;
		cout<<endl;
		//https://github.com/gnidaan/CPP_ASSIGNMENT.git

	return 0;
}
