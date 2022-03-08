#include <iostream>
using namespace std;

class A{
public:
	int i;
};

class B:virtual public A{
public:
	int j;
};

class C:virtual public A{
public:
	int k;
};

class D:public B,public C{
public:
	int sum;
};

int main(){
	D ob1;
	ob1.i=10;
	ob1.j=10;
	ob1.k=10;
	ob1.sum=ob1.i+ob1.j+ob1.k;
	cout<<ob1.sum<<endl;
	return 0;
}