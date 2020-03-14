//============================================================================
// Name        : ASSIGNMENT3_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Matrix{
private:int **arr,row,col;

public:
	Matrix(){
		this->row=2;
		this->col=2;
		arr=new int*[this->row];
			for (int i = 0; i < this->row; ++i) {
			arr[i]=new int[this->col];
			}
	}
	Matrix(int row,int col)
	{
		this->row=row;
		this->col=col;
		arr=new int*[this->row];
		for (int i = 0; i < this->row; ++i) {
			arr[i]=new int[this->col];
		}
	}

	void accept();
	void display();
	void add(Matrix &m1);
	void sub(Matrix &m1);
	void mul(Matrix &m1);
	void trans();
	void deletea(){
		for (int i = 0; i < this->col; ++i) {
			delete [] arr[i];
			}
		delete []arr;
		arr=NULL;

	}
	~Matrix(){}
};

void Matrix::accept(){
	for (int i = 0; i < this->row; ++i) {
		for (int y = 0; y < this->col; ++y) {
			cout<<"enter the matrix";
			cin>>arr[i][y];
		}
	}
}


void Matrix::display(){
	for (int i = 0; i < this->row; ++i) {
			for (int y = 0; y < this->col; ++y) {
				cout<<" "<<this->arr[i][y];
			}
			cout<<"\n";
		}
}

void Matrix::add(Matrix &m1)
{
	Matrix m2;
	for (int i = 0; i < this->row; ++i) {
		for (int y = 0; y <this->col; ++y) {
			m2.arr[i][y]=arr[i][y]+m1.arr[i][y];
		}
	}
	m2.display();
	m2.deletea();
}
void Matrix::sub(Matrix &m1){
	Matrix m2;
	for (int i = 0; i < this->row; ++i) {
		for (int y = 0; y <this->col; ++y) {
			m2.arr[i][y]=arr[i][y]-m1.arr[i][y];
		}
	}
	m2.display();
	m2.deletea();
}

void Matrix::mul(Matrix &m1){
	Matrix m2;
	for (int i = 0; i < this->row; ++i) {
				for (int y = 0; y <this->col; ++y)

				{m2.arr[i][y]=0;
					for (int k = 0; k < this->col; ++k)
					{

						m2.arr[i][y]=m2.arr[i][y]+(arr[i][k]*m1.arr[k][y]);
					}

				}
			}
	m2.display();
	m2.deletea();

}
void Matrix::trans(){
	Matrix m2;
	for (int i = 0; i < this->row; ++i) {
		for (int j = 0; j < this->col; ++j) {
			m2.arr[j][i]=arr[i][j];
		}
		}
	m2.display();
	m2.deletea();

}
int main() {
	/*int row,column;
	cout<<"enter the row and column";
	cin>>row>>column;
	Matrix m(row,column);

	m.accept();
	m.display();
*/
	Matrix m(2,2);
	Matrix m1(2,2);
	m.accept();
	m.display();
	m1.accept();
	m1.display();
	cout<<endl;
	m.add(m1);
	cout<<endl;
	m.sub(m1);

	cout<<endl;
	m.mul(m1);
	cout<<endl;
	m.trans();
	m.deletea();
	m1.deletea();


	return 0;
}
