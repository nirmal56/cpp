#include<iostream>

using namespace std;

class B;
class A{
	int a,b;
public:
	A(int x=0,int y=0){
		a=x;
		b=y;
	}
	void getdata(){
		cout<<"a:"<<a<<" --b:"<<b<<endl;

	}
	friend A operator + (A c1, B c2);
};
class B{
	int a,b;
public:
	B(int x=0,int y=0){
		a=x;
		b=y;
	}
	void getdata(){
		cout<<"a:"<<a<<" --b:"<<b<<endl;

	}
	void sum (){
		cout<<"sum="<<a+b<<endl;
	}
	friend A operator + (A c1, B c2);
};
A operator + (A c1, B c2){
	A temp;
	temp.a = c1.a + c2.a;
	temp.b = c1.b + c2.b;
	return temp;
}

int main(){
	A c1(10,20);
	c1.getdata();

	B c2(30,20);
	c2.getdata();

	A c3 = c1 + c2;
	c3.getdata();
	return 0;
}