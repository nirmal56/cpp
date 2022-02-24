#include<iostream>
using namespace std;
class A{
public:
	int i,j,k,l,m;
	A(){
		cout<<"---------------------inside constructor--------------------"<<endl;
		i=0;
		j=10;
	}

	~A(){
		cout<<"--------------------inside destructor----------------------"<<endl;
	}
};

int main(){
	int *ptr1,*ptr2,sum;
	A a1,*a2,*a3;
	ptr1=new int;

	a2 = new A [5];
	a3 = new A;
	a3 = NULL;
	cout<<"sum:"<<sizeof(sum)<<"   ptr1:"<<sizeof(ptr1)<<endl;
	delete ptr1;
	delete[] a2;
	delete a3;
	char *c = (char *) malloc(sizeof(char)*5);

	A *d = (A *) malloc(sizeof(A)*5);
	delete c;
	delete d;
	return 0;
}