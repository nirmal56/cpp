#include<iostream>
#include<stdio.h>
using namespace std;
class A{
public:
	int i=0,j=0   ,k,l,m;
	A(){
		cout<<"---------------------inside constructor--------------------"<<endl;
		i=0;
		j=10;
	}

	~A(){
		cout<<"---------------------inside destructor----------------------"<<endl;
	}
};

int main(){
	int *ptr1,*ptr2,sum;
	A a1,*a2,*a3,*d;
	ptr1=new int;

	a2 = new A [5];
	a3 = new A;
	a3 = NULL;
	cout<<"sum:"<<sizeof(sum)<<"   ptr1:"<<sizeof(ptr1)<<endl;
	delete ptr1;
	delete[] a2;
	delete a3;
	char *c = (char *) malloc(sizeof(char)*5);
	cout<<"----------------------"<<endl;
	d= (A *) malloc(sizeof(A)*5);
	cout<<"----------------------"<<endl;
	delete c;
	free(d);
	cout<<"sum:"<<sizeof(sum)<<"   ptr1:"<<sizeof(ptr1)<<endl;
	return 0;
}