//============================================================================
// Name        : ASSIGNMENT3_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;
class PasswordMismatch{
};

void detect(char *s){
	if(strcmp(s,"nidaan")==0){
		cout<<"password entered is true";
	}else{
		throw PasswordMismatch();
	}
}
int main() {
	char s[20];
	cout<<"enter password ";
	cin>>s;

	try{
		cout<<s<<endl;

		detect(s);
	}
	catch(PasswordMismatch p){
		cout<<"password wrong entered";
	}



	return 0;
}
