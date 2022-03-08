#include<iostream>
using namespace std;

class A{
public:
	void display(){
		cout<<"parent"<<endl;
	}
};
class B: public A{
public:
	void display(){
		cout<<"child"<<endl;
	}
};
int main(){
	B obx;
	obx.display();
	obx.A::display();
}