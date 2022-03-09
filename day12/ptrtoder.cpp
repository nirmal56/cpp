#include<iostream>
using namespace std;

class base{
	int x;
public:
	base(){
		cout<<"base class"<<endl;
	}
    void sample(){
        cout<<"sample"<<endl;
    }
	~base(){
		cout<<"base destructer"<<endl;
	}
};

class derived: public base{
	int y;
public:
	derived(){
		cout<<"derived"<<endl;
	}
	derived(int y){
		cout<<y<<endl;
	}
    void print(){
        cout<<"cwdcd"<<endl;
    }
	~derived(){
		cout<<"derived des"<<endl;
	}
};

int main(){
    base *ptr;
	base b;

	derived d;
    ptr=&b;

    ptr->sample();
    d.sample();
     ptr=&d;
     ptr->sample();
     ((derived *)ptr)->print();
    return 0;
}