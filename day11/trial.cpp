#include<iostream>
using namespace std;

class base{
protected:
	int i, j;
public:
	void set (int a, int b){
		i=a;
		j=b;
	}

	void show(){
		cout<<i << " " <<j<<endl;
	}

};

class derived1: private base{
	int k;
public:

	void setk(){
		k=i*j;
	}
	void showk(){
		cout<<k<<endl;
	}
};

class derived2: public derived1{
	int m;
public:

	void setm(){
		k=i-j;
	}
	void showk(){
		cout<<m<<endl;
	}
};

int main(){
	derived1 ob1;
	derived2 ob2;
	ob1.set(1,2);
	ob1.showk();
	ob2.set(3,4);
	ob2.showm();
	return 0;
}
