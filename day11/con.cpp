#include<iostream>
using namespace std;

class base{
	int x;
public:
	base(){
		cout<<"base class"<<endl;
	}
	~base(){
		cout<<"base destructer"<<endl;
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
	~derived(){
		cout<<"derived des"<<endl;
	}
};

int main(){
	base b;
	derived d1;
	derived d2(10);
}