//============================================================================
// Name        : ASSIGNMENT2_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;
class Student{
private:
	char name[50],gender[50],rr[50];
	int rollno,marks[3];
public:

	void accept(){
		cout<<"enter the name of student";
		cin>>name;
		cout<<"enter the gender of student";
		cin>>gender;
		cout<<"enter the roll no of student";
		cin>>rollno;
		cout<<"enter the marks of student";
		for(int i=0;i<3;i++)
		cin>>marks[i];
	}
	void print(){
		cout<<"the name is"<<name<<endl;
		cout<<"the gender is"<<gender<<endl;
		cout<<"the roll no is"<<rollno<<endl;
		for(int i=0;i<3;i++)
		cout<<"the marks is"<<marks[i]<<endl;
	}

	int getRollno() const {
		return rollno;
	}

	const char* getName() const {
		return name;
	}
};

int menu(){
	int ch;
	cout<<"\n0.exit"<<endl;
	cout<<"1.accept"<<endl;
	cout<<"2.display"<<endl;
	cout<<"3.search"<<endl;
	cout<<"4.sort"<<endl;
	cout<<"enter the choice";
	cin>>ch;
	return ch;
}

int compare(const void *a,const void *b){
	Student *s1=(Student*)a;
	Student *s2=(Student*)b;
	return strcmp(s1->getName(),s2->getName());
	//return (s1->getName()).compare(s2->getName());
	//return (s1->getRollno()-s2->getRollno());
	/*if((s1->getName())=s2->getName())
	{
		return 0;
	}
	else if(s1->getName()>s2->getName())
		return 1;
	else return -1;*/
}
int compare1(const void *a,const void *b){
	Student *s1=(Student*)a;
	Student *s2=(Student*)b;
	return s1->getRollno()-s2->getRollno();
}

void search(Student s[]){
	int data;
	cout<<"enter the roll no to search"<<endl;
				cin>>data;
				for(int i=0;i<2;i++){
					if(s[i].getRollno()==data){
						s[i].print();
					}
					else{
						cout<<"no search found"<<endl;
					}
				}

}

int submenu(){
	int ch;
	cout<<"\n0.exit"<<endl;
	cout<<"1.by name"<<endl;
	cout<<"2.by roll no"<<endl;
	cout<<"enter the choice"<<endl;
	cin>>ch;
	return ch;
}

void sortbyname(Student s[]){
	qsort(s,2,sizeof(Student),compare);
	for(int i=0;i<2;i++){
		s[i].print();
	}
}
void sortbyrollno(Student s[]){
		qsort(s,2,sizeof(Student),compare1);
		for(int i=0;i<2;i++){
			s[i].print();
		}
}


int main() {
	Student s[5];
	int ch;
	while((ch=menu())!=0){
		switch(ch){
		case 1:
		{
		 for(int i=0;i<2;i++){
			 s[i].accept();
		}
		}break;
		case 2:
		{
		 for(int i=0;i<2;i++){
					 s[i].print();
				}
				}break;
		case 3:
		{
			search(s);

		}break;
		case 4:
		{
			while((ch=submenu())!=0){
				switch(ch){
				case 1:sortbyname(s);break;
				case 2:sortbyrollno(s);break;
				}

			}

		}}
	}

	return 0;
}
