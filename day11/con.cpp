#include<iostream>
using namespace std;

class base{
	int x;
public:
	base(){
		cout<<"base class"<<endl;
	}
};

class derived{
	int y;
public:
	derived(){
		cout<<"derived"<<endl;
	}
	derived(int y){
		cout<<y<<endl;
	}
};

int main(){
	base b;
	derived d1;
	derived d2(10);
}